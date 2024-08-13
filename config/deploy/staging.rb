set :files_dir, "staging_files"

server "library-staging1.lib.princeton.edu", user: fetch(:user), roles: %w{app drupal_primary}
server "library-staging2.lib.princeton.edu", user: fetch(:user), roles: %w{app drupal_secondary}

set :search_api_solr_host, 'lib-solr8-staging.princeton.edu'
set :search_api_solr_path, '/solr/library-staging'
set :smtp_host, "localhost"
set :smtp_port, "1025"
set :redis_prefix, "library-staging"
set :redis_host, "lib-redis-staging1.princeton.edu"

set :db_name, "libwww_staging"
