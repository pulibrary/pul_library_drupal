set :branch, ENV["BRANCH"] || "master"

set :files_dir, "staging_files"

server "library-staging1", user: fetch(:user), roles: %w{app}
server "library-staging2", user: fetch(:user), roles: %w{app}

set :search_api_solr_host, 'lib-solr-staging.princeton.edu'
set :search_api_solr_path, '/solr/libwww-staging'
