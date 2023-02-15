set :files_dir, "staging_files"

server "library-staging1", user: fetch(:user), roles: %w{app drupal_primary}
server "library-staging2", user: fetch(:user), roles: %w{app drupal_secondary}

server "mysql-db-staging1", user: 'pulsys', roles: %w{db}

set :search_api_solr_host, 'lib-solr8-staging.princeton.edu'
set :search_api_solr_path, '/solr/library-staging'
set :smtp_host, "localhost"
set :smtp_port, "1025"
set :redis_prefix, "library-staging"
set :redis_host, "lib-redis.princeton.edu"

set :db_name, "libwww_staging"
