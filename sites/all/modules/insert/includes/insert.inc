<?php

/**
 * @file
 * Insert support for generic files.
 */

/**
 * Implementation of hook_insert_styles().
 */
function insert_insert_styles() {
  $insert_styles = array();
  $insert_styles['auto'] = array('label' => t('Automatic'), 'weight' => -20);
  $insert_styles['link'] = array('label' => t('Link to file'), 'weight' => -12);
  $insert_styles['icon_link'] = array('label' => t('Link to file (with icon)'), 'weight' => -11);
  $insert_styles['image'] = array('label' => t('Original image'), 'weight' => -10);
  $insert_styles['video'] = array('label' => t('Embed video'), 'weight' => -9);
  $insert_styles['audio'] = array('label' => t('Embed audio'), 'weight' => -8);
  return $insert_styles;
}

/**
 * Implementation of hook_insert_content().
 */
function insert_insert_content($item, $style, $widget) {
  $style_name = $style['name'];

  if (empty($item['fid'])) {
    return '';
  }

  if ($style_name == 'auto') {
    $file = file_load($item['fid']);
    $info = @pathinfo($file->uri);
    $extension = isset($info['extension'])
      ? strtolower($info['extension']) : null;

    foreach (array_map(function($value) {
      return variable_get($value, unserialize(INSERT_DEFAULT_CONFIG)[$value]);
    }, [
      'image' => 'insert_file_extensions_image',
      'audio' => 'insert_file_extensions_audio',
      'video' => 'insert_file_extensions_video',
      ]
    ) as $fileType => $extensions) {
      if (in_array($extension, $extensions)) {
        $style_name = $fileType;
        break;
      }
    }
  }

  if ($style_name == 'image') {
    return theme('insert_image', array('item' => $item, 'widget' => $widget));
  }
  elseif ($style_name == 'icon_link') {
    return theme('insert_icon_link', array('item' => $item, 'widget' => $widget));
  }
  elseif ($style_name === 'video') {
    return theme('insert_video', array('item' => $item, 'widget' => $widget));
  }
  elseif ($style_name === 'audio') {
    return theme('insert_audio', array('item' => $item, 'widget' => $widget));
  }
  else {
    return theme('insert_link', array('item' => $item, 'widget' => $widget));
  }
}

/**
 * Preprocess variables for the insert-image.tpl.php file.
 */
function template_preprocess_insert_image(&$vars) {
  $vars['file'] = file_load($vars['item']['fid']);
  $absolute = isset($vars['widget']['settings']['insert_absolute']) ? $vars['widget']['settings']['insert_absolute'] : NULL;
  $vars['url'] = insert_create_url($vars['file']->uri, $absolute);
  $vars['class'] = !empty($vars['widget']['settings']['insert_class']) ? $vars['widget']['settings']['insert_class'] : '';
  $image_info = @image_get_info($vars['file']->uri);
  $vars['width'] = isset($image_info['width']) ? $image_info['width'] : '';
  $vars['height'] = isset($image_info['height']) ? $image_info['height'] : '';
}

/**
 * Preprocess variables for the insert-link.tpl.php file.
 */
function template_preprocess_insert_link(&$vars) {
  $vars = _insert_default_vars($vars);
  $vars['name'] = $vars['file']->filename;
}

/**
 * Preprocess variables for the insert-icon-link.tpl.php file.
 */
function template_preprocess_insert_icon_link(&$vars) {
  $vars = _insert_default_vars($vars);
  $vars['name'] = $vars['file']->filename;
  $vars['type'] = $vars['file']->filemime .'; length='. $vars['file']->filesize;
  $vars['icon'] = theme('file_icon', array('file' => $vars['file']));
}

/**
 * Preprocess variables for the insert-video.tpl.php file.
 */
function template_preprocess_insert_video(&$vars) {
  $vars = _insert_default_vars($vars);
  $vars['name'] = $vars['file']->filename;
  $vars['mime'] = $vars['file']->filemime;
}

/**
 * Preprocess variables for the insert-audio.tpl.php file.
 */
function template_preprocess_insert_audio(&$vars) {
  $vars = _insert_default_vars($vars);
  $vars['name'] = $vars['file']->filename;
  $vars['mime'] = $vars['file']->filemime;
}

/**
 * Aggregates default variables to be sent to every template.
 *
 * @param array $vars
 * @return array
 */
function _insert_default_vars(array $vars) {
  $vars['file'] = file_load($vars['item']['fid']);
  $absolute = isset($vars['widget']['settings']['insert_absolute']) ? $vars['widget']['settings']['insert_absolute'] : NULL;
  $vars['url'] = insert_create_url($vars['file']->uri, $absolute);
  $vars['class'] = !empty($vars['widget']['settings']['insert_class']) ? $vars['widget']['settings']['insert_class'] : '';
  return $vars;
}
