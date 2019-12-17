set :branch, ENV["BRANCH"] || "master"

set :files_dir, "staging_files"

server "library-staging1", user: fetch(:user), roles: %w{app drupal_primary}
server "library-staging2", user: fetch(:user), roles: %w{app drupal_secondary}

set :search_api_solr_host, 'library-solr-staging.princeton.edu'
set :search_api_solr_path, '/solr/library-staging'
