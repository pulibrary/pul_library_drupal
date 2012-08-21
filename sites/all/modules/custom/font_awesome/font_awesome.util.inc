<?php
/*
 * Checks for the Font Awesome library
 * @return string path
 */
function font_awesome_check_library() {
  $library = 'font_awesome';
  $file = 'css/font-awesome.css';
  $libraries = libraries_get_libraries();

  // Check the library exists
  if (isset($libraries[$library])) {
    $library_path = $libraries[$library] . '/' . $file;

    // Ensure the css file exists
    if (file_exists($library_path)) {
      // Return the path to the css file
      return $library_path;
    }
  }  
  return FALSE;
}
