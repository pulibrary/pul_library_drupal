# Use this file to easily define all of your cron jobs.
#
# It's helpful, but not entirely necessary to understand cron before proceeding.
# http://en.wikipedia.org/wiki/Cron

# Example:
#
# set :output, "/path/to/my/cron_log.log"
#
# every 2.hours do
#   command "/usr/bin/some_great_command"
#   runner "MyModel.some_method"
#   rake "some:great:rake:task"
# end
#
# every 4.days do
#   runner "AnotherModel.prune_old_records"
# end

# Learn more: http://github.com/javan/whenever

set :output, '/var/www/library_cap/shared/tmp/cron_log.log'

every 1.hours, roles: [:drupal_primary] do
  command "sudo -u www-data drush @prod cron"
end

# Run at 6:05 am EST or 7:05 EDT (after the 6am staff list is generated from OIT and finance data)
every 1.day, at: '11:30 am', roles: [:drupal_primary] do
  command "/usr/bin/get_staff_updates.sh"
end

