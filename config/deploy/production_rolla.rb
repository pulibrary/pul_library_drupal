set :files_dir, "production_files"

server "library-prod1", user: fetch(:user), roles: %w{app drupal_primary}

set :search_api_solr_host, 'library-solr-prod.princeton.edu'
# TODO: This should be a production location
set :search_api_solr_path, '/solr/library-prod'
set :smtp_host, "lib-ponyexpr-prod.princeton.edu"
set :smtp_port, "25"
set :redis_prefix, "library-prod"
set :redis_host, "lib-redis.princeton.edu"
