<?php

/**
 * @file
 * Page callbacks for Font Awesome.
 */
function font_awesome_demo() {
  // Font Awesome Demo.
  $form = array();

  $form['demo'] = array(
    '#markup' => "
      <p>For all documentation please refer to the 
	<a href='http://fortawesome.github.com/Font-Awesome'>
	  Font Awesome Documentation
        </a>
      </p>

      <p>If you can see these icons Font Awesome is working:</p>
      <p>
        <i class='icon-star-empty' style='font-size: 64px;'></i>
  	<i class='icon-envelope' style='font-size: 64px;'></i>
  	<i class='icon-comment' style='font-size: 64px;'></i>
  	<i class='icon-play' style='font-size: 64px;'></i>
  	<i class='icon-gift' style='font-size: 64px;'></i>
  	<i class='icon-leaf' style='font-size: 64px;'></i>
  	<i class='icon-fire' style='font-size: 64px;'></i>
  	<i class='icon-print' style='font-size: 64px;'></i>
  	<i class='icon-camera' style='font-size: 64px;'></i>
      </p>",
  );

  return $form;
} 
