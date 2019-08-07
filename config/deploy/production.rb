set :branch, ENV["BRANCH"] || "master"

set :files_dir, "production_files"

server "library-prod1", user: fetch(:user), roles: %w{app drupal_primary}
server "library-prod3", user: fetch(:user), roles: %w{app}

set :search_api_solr_host, 'lib-solr.princeton.edu'
# TODO: This should be a production location
set :search_api_solr_path, '/solr/libwww-staging'
