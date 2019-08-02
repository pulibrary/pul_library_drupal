set :branch, ENV["BRANCH"] || "master"

set :files_dir, "staging_files"

server "library-staging1", user: fetch(:user), roles: %w{app}
server "library-staging2", user: fetch(:user), roles: %w{app}
