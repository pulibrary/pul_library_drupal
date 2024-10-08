set :files_dir, "production_files"

server "library-prod1.lib.princeton.edu", user: fetch(:user), roles: %w{app drupal_primary}
server "library-prod3.lib.princeton.edu", user: fetch(:user), roles: %w{app drupal_secondary}
server "library-prod4.lib.princeton.edu", user: fetch(:user), roles: %w{app drupal_secondary}

set :search_api_solr_host, 'lib-solr8-prod.princeton.edu'
# TODO: This should be a production location
set :search_api_solr_path, '/solr/library-prod'
set :smtp_host, "lib-ponyexpr.princeton.edu"
set :smtp_port, "25"
set :redis_prefix, "library-prod"
set :redis_host, "lib-redis-prod1.princeton.edu"

set :db_name, "libwww_prod"
