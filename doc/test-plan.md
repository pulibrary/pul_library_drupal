### Manual testing plan

1. Load the main page
1. Log in at /user
1. Look at the reports > status report.  Confirm that there are no errors
1. Go to /ask-us and try to submit the form.  The email should send without error
1. Do a search in the bento box, and make sure that you see results
1. Repeat the last step with the network dev tools open.  Limit the dev tools to XHR requests.  Make sure they are all 200 status.
1. Go to Research Tools > Databases.  Open a database and confirm that it loads, and doesn't have repetitive content.
1. Go to /import, select the PUL Library Staff Importer, then press the Import button.  You should see "There are no new users" and no errors in the log.
1. Go to /import, select the Events feed, and press the Import button.  You should see no errors in the log.
