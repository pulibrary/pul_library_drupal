set :branch, ENV["BRANCH"] || "master"

set :files_dir, "production_files"

server "library-prod1", user: fetch(:user), roles: %w{app}
server "library-prod3", user: fetch(:user), roles: %w{app}
