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

# Run at 6:30 am EST or 7:30 EDT (after the 6am staff list is generated from OIT and finance data)
every 1.day, at: '11:30 am', roles: [:drupal_primary] do
  command "/usr/bin/get_staff_updates.sh"
end

# Run at 12:30 am EST or 1:30 am EDT reboot the primary machine
every 1.day, at: '04:30 am', roles: [:drupal_primary] do
  command "sudo /sbin/shutdown -r now"
end

# Run at 1:30 am EST or 2:30 am EDT reboot the secondary machine(s)
every 1.day, at: '05:30 am', roles: [:drupal_secondary] do
  command "sudo /sbin/shutdown -r now"
end

# Run at 6:35 am EST or 7:35 EDT remove old users
every 1.day, at: '11:35 am', roles: [:drupal_primary] do
  command "sudo -u www-data drush @prod vbo-execute remove_old_users action::views_bulk_operations_user_cancel_action"
end
