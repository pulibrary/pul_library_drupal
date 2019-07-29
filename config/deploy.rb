# config valid for current version and patch releases of Capistrano
lock "~> 3.11.0"

set :application, "library"
set :repo_url, "git@github.com:pulibrary/pul_library_drupal.git"

set :keep_releases, 5

set :deploy_to, "/var/www/library_cap"

set :drupal_settings, "/home/deploy/settings.php"
set :drupal_fileshare_mount, "/mnt/diglibdata/drupalweb"
set :drupal_site, "default"
set :drupal_file_temporary_path, "../../shared/tmp"
set :drupal_file_public_path, "sites/default/files"
set :drupal_file_private_path, "sites/default/files/private"

set :user, "deploy"

# Default value for :format is :airbrussh.
# set :format, :airbrussh

# You can configure the Airbrussh format using :format_options.
# These are the defaults.
# set :format_options, command_output: true, log_file: "log/capistrano.log", color: :auto, truncate: :auto

# Default value for :pty is false
# set :pty, true

# Default value for :linked_files is []
# append :linked_files, "config/database.yml"

# Default value for linked_dirs is []
# append :linked_dirs, "log", "tmp/pids", "tmp/cache", "tmp/sockets", "public/system"

# Default value for default_env is {}
# set :default_env, { path: "/opt/ruby/bin:$PATH" }

# Default value for local_user is ENV['USER']
# set :local_user, -> { `git config user.name`.chomp }

# Default value for keep_releases is 5
# set :keep_releases, 5

# Uncomment the following to require manually verifying the host key before first deploy.
# set :ssh_options, verify_host_key: :secure

namespace :drupal do

  desc "Include creation of additional Drupal specific shared folders"
  task :prepare_shared_paths do
      on release_roles :app do
          execute :mkdir, '-p', "#{shared_path}/tmp"
          execute :mkdir, '-p', "#{shared_path}/node_modules"
      end
  end

  desc "Link settings.php"
  task :link_settings do
    on roles(:app) do |host|
      execute "cd #{release_path}/sites/#{fetch(:drupal_site)} && ln -sf #{fetch(:drupal_settings)} settings.php"
      info "linked settings into #{release_path}/sites/#{fetch(:drupal_site)} site"
    end
  end

  desc "Link shared drupal files"
  task :link_files do
    on roles(:app) do |host|
      execute "cd #{release_path}/sites/#{fetch(:drupal_site)} && ln -sf #{fetch(:drupal_fileshare_mount)}/staging_files files"
      execute "cd #{release_path}/sites/all/themes/pul_base && ln -sf #{shared_path}/node_modules node_modules"
      info "linked files mount into #{fetch(:drupal_site)} site"
    end
  end

  desc "Install Assets"
  task :install_assets do
    on roles(:app) do |host|
      execute "cd #{release_path}/sites/all/themes/pul_base && npm install"
      execute "cd #{release_path}/sites/all/themes/pul_base && gulp deploy"
      info "Installed Assets"
    end
  end

  desc "Clear the drupal cache"
  task :cache_clear do
      on release_roles :app do
          execute "cd #{release_path} && drush -r #{release_path} cc all"
          info "cleared the drupal cache"
        end
  end

  desc "Update file permissions to follow best security practice: https://drupal.org/node/244924"
  task :set_permissions_for_runtime do
      on release_roles :app do
          execute :find, "#{release_path}", '-type f -exec', :chmod, "640 {} ';'"
          execute :find, "#{release_path}", '-type d -exec', :chmod, "2750 {} ';'"
          execute :find, "#{shared_path}/tmp", '-type d -exec', :chmod, "2770 {} ';'"
      end
  end

  desc "Set the site offline"
  task :site_offline do
      on release_roles :app do
          execute "cd #{release_path} && drush -r #{release_path} vset --exact maintenance_mode 1"
          info "set site to offline"
      end
  end

  desc "Set the site online"
  task :site_online do
      on release_roles :app do
          execute "cd #{release_path} && drush -r #{release_path} vdel -y --exact maintenance_mode"
          info "set site to onffline"
      end
  end

  desc "Set file system variables"
  task :set_file_system_variables do
      on release_roles :app do
          execute "cd #{release_path} && drush -r #{release_path} vset --exact file_temporary_path #{fetch(:drupal_file_temporary_path)}"
          execute "cd #{release_path} && drush -r #{release_path} vset --exact file_public_path #{fetch(:drupal_file_public_path)}"
          execute "cd #{release_path} && drush -r #{release_path} vset --exact file_private_path #{fetch(:drupal_file_private_path)}"
      end
  end

  desc "Enable SMTP module"
  task :enable_smtp do
      on release_roles :app do
          execute "cd #{release_path} && drush -r #{release_path} -y en --resolve-dependencies smtp"
          info "Enabled the smtp module"
      end
  end

  desc "change the owner of the directory to www-data for apache"
  task :update_directory_owner do
      on release_roles :app do
        execute :sudo, "/bin/chown -R www-data /var/www/library_cap"
      end
  end
  
  namespace :database do

    desc "Run Drush SQL Client against a local sql file SQL_DIR/SQL_FILE"
    task :import_dump do
        on roles(:all) do |host|
          upload! ENV["SQL_DIR"] + ENV["SQL_FILE"], '/tmp/'+ENV["SQL_FILE"]
          execute "cd #{release_path} && drush sql-cli < /tmp/"+ENV["SQL_FILE"]
        end
    end

    desc "Update the solr index"
    task :update_search_index do
        on release_roles :app do
            execute "cd #{release_path} && drush search-api-clear"
            execute "cd #{release_path} && drush search-api-index"
        end
    end
  end
end

namespace :deploy do
  desc "Set file system variables"
  task :after_deploy_check do
      invoke "drupal:prepare_shared_paths"
  end
      
  desc "Set file system variables"
  task :after_deploy_updated do
      invoke "drupal:link_settings"
      invoke "drupal:link_files"
      invoke "drupal:install_assets"
      invoke "drupal:set_permissions_for_runtime"
      invoke "drupal:set_file_system_variables"
      invoke "drupal:update_directory_owner"
      invoke "drupal:enable_smtp"
      invoke "drupal:cache_clear"
  end
      
  after :check, "deploy:after_deploy_check"

  #after :started, "drupal:site_offline"
  
  after :updated, "deploy:after_deploy_updated"

  #after :finished, "drupal:site_online"
end
