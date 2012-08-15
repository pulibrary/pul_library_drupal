<?php

/**
 * @file
 * Field formatter hook implementations.
 */

/**
 * Implements hook_field_formatter_info().
 *
 * Provide field formatters for the 'sarnia' Solr document field type. These are
 * mainly used within the SarniaViewsHandlerField Views field handler, and in
 * general format a single property of the Solr document field. This limits
 * their utility should they be used in a more traditional entity-view
 * situation, but there is no entity viewing built out at this point.
 *
 * @see SarniaViewsHandlerField::get_value()
 */
function sarnia_field_formatter_info() {
  $formatters = array(
    'sarnia_formatter_plain' => array(
      'label' => t('Plain'),
      'description' => t('Output a Solr property as-is.'),
      'field types' => array('sarnia'),
      'settings' => array(),
    ),
    'sarnia_formatter_date' => array(
      'label' => t('Reformatted date'),
      'description' => t('Reformat a Solr property date string.'),
      'field types' => array('sarnia'),
      'settings' => array(
        'date_format_predefined' => '',
        'date_format_custom' => 'M j, Y',
        'data_is_timestamp' => FALSE,
      ),
    ),
    'sarnia_formatter_number' => array(
      'label' => t('Number'),
      'description' => t('Format a Solr property as a number.'),
      'field types' => array('sarnia'),
      'settings' => array(
        'separate_thousands' => TRUE,
      ),
    ),
    'sarnia_formatter_text' => array(
      'label' => t('Filtered text'),
      'description' => t('Format a Solr property using a Drupal input format.'),
      'field types' => array('sarnia'),
      'settings' => array(
        'input_format' => filter_fallback_format(),
      ),
    ),
    'sarnia_formatter_count' => array(
      'label' => t('Value count'),
      'description' => t('Display the total number of values in this Solr property.'),
      'field types' => array('sarnia'),
      'settings' => array(),
    ),
    'sarnia_formatter_image' => array(
      'label' => t('Image'),
      'description' => t('Format a Solr property as an image.'),
      'field types' => array('sarnia'),
      'settings' => array(
        'base_path' => NULL,
        'path_solr_property' => NULL,
        'alt_solr_property' => NULL,
        'title_solr_property' => NULL,
        'filename_suffix' => NULL,
      ),
    ),
    'sarnia_formatter_multimedia_count' => array(
      'label' => t('Multimedia type count'),
      'description' => t('Format a Solr property as a list of media types described by the property.'),
      'field types' => array('sarnia'),
      'settings' => array(
        'show_icon' => TRUE,
      ),
    ),
  );

  if (module_exists('mediaelement')) {
    $formatters['sarnia_formatter_multimedia'] = array(
      'label' => t('Multimedia'),
      'description' => t('Format a Solr property as multimedia; display images, embed audio and video in players, and provide download links to other file types.'),
      'field types' => array('sarnia'),
      'settings' => array(
        'base_path' => NULL,
        'path_solr_property' => NULL,
        'alt_solr_property' => NULL,
        'title_solr_property' => NULL,
        'filename_suffix' => NULL,
      ),
    );
  }

  if (module_exists('openlayers')) {
    $formatters['sarnia_formatter_openlayers'] = array(
      'label' => t('OpenLayers map'),
      'description' => t('Display latitude and longitude Solr properties as a point on a map.'),
      'field types' => array('sarnia'),
      'settings' => array(
        'lat_solr_property' => NULL,
        'lon_solr_property' => NULL,
        'openlayers_map' => 'sarnia_formatter_map',
      ),
    );
  }

  // Add a 'solr_property' setting for each formatter.
  foreach ($formatters as &$formatter) {
    $formatter['settings']['solr_property'] = NULL;
  }

  return $formatters;
}

/**
 * Implements hook_field_formatter_settings_summary().
 *
 * The output of this hook is currently unused except to assert that this
 * formatter has a settings form.
 */
function sarnia_field_formatter_settings_summary($field, $instance, $view_mode) {
  if (isset($instance['display'][$view_mode]['settings']['solr_property'])) {
    $summary = t('Solr property: %property', array('%property' => $instance['display'][$view_mode]['settings']['solr_property']));
  }
  else {
    $summary = t('No property selected.');
  }

  return $summary;
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function sarnia_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $formatter = $instance['display'][$view_mode]['type'];
  $settings = $instance['display'][$view_mode]['settings'];

  // Add a "Solr property" setting to each formatter settings form. When these
  // formatters are used in the context of SarniaViewsHandlerField::get_options(),
  // this form element is stripped off in favor of a handler-wide form element.
  $sarnia_type = sarnia_entity_type_load($instance['entity_type']);
  $solr_property_options = sarnia_index_get_field_options($sarnia_type['search_api_index']);
  $form['solr_property'] = array(
    '#type' => 'select',
    '#title' => t('Solr property'),
    '#description' => t('Choose a Solr property to format.'),
    '#options' => $solr_property_options,
    '#default_value' => $settings['solr_property'],
  );

  // Formatter-specific settings.
  if ($formatter == 'sarnia_formatter_date') {
    // Summon up all the system-provided date formats.
    $options = array();
    foreach (module_invoke_all('date_formats') as $format) {
      $options[$format['format']] = date($format['format'], $_SERVER['REQUEST_TIME']);
    }
    // Add a 'custom' option to the end of the list.
    $options[0] = '- ' . t('Custom') . ' -';

    $form['date_format_predefined'] = array(
      '#type' => 'select',
      '#title' => t('Date format'),
      '#options' => $options,
      '#default_value' => $settings['date_format_predefined'],
    );
    $form['date_format_custom'] = array(
      '#type' => 'textfield',
      '#title' => t('Custom date format'),
      '#default_value' => $settings['date_format_custom'],
      '#states' => array(
        'visible' => array(
          ':input[name="options[settings][date_format_predefined]"]' => array('value' => '0'),
        ),
      ),
    );
    $form['data_is_timestamp'] = array(
      '#type' => 'checkbox',
      '#title' => t('This data is already a unix timestamp'),
      '#default_value' => $settings['data_is_timestamp'],
    );
  }
  elseif ($formatter == 'sarnia_formatter_number') {
    $form['separate_thousands'] = array(
      '#type' => 'checkbox',
      '#title' => t('Separate thousands and hide decimals'),
      '#default_value' => $settings['separate_thousands'],
    );
  }
  elseif ($formatter == 'sarnia_formatter_multimedia' || $formatter == 'sarnia_formatter_image') {
    $form['base_path'] = array(
      '#type' => 'textfield',
      '#title' => t('Base URL or path'),
      '#description' => t('A shared base URL or path for all images.'),
      '#default_value' => $settings['base_path'],
    );

    $options = $solr_property_options;
    array_unshift($options, '- ' . t('None') . ' -');
    $form['path_solr_property'] = array(
      '#type' => 'select',
      '#title' => t('Path component'),
      '#description' => t('Choose a Solr property to use as a path component or base URL.'),
      '#options' => $options,
      '#default_value' => $settings['path_solr_property'],
    );
    $form['alt_solr_property'] = array(
      '#type' => 'select',
      '#title' => t('Alternate text'),
      '#description' => t('Choose a Solr property to use as alternate text.'),
      '#options' => $options,
      '#default_value' => $settings['alt_solr_property'],
    );
    $form['title_solr_property'] = array(
      '#type' => 'select',
      '#title' => t('Title (mouseover) text'),
      '#description' => t('Choose a Solr property to use as title text.'),
      '#options' => $options,
      '#default_value' => $settings['title_solr_property'],
    );
    sarnia_element_add_combobox($form['path_solr_property']);
    sarnia_element_add_combobox($form['alt_solr_property']);
    sarnia_element_add_combobox($form['title_solr_property']);
    $form['filename_suffix'] = array(
      '#type' => 'textfield',
      '#title' => t('Filename suffix'),
      '#description' => t('Text to insert before the file extension; for example, transform <em>filename.jpg</em> to <em>filename.thumb.jpg</em> by entering "<em>.thumb</em>". This will only be added to image files.'),
      '#default_value' => $settings['filename_suffix'],
    );
  }
  elseif ($formatter == 'sarnia_formatter_text') {
    $options = array();
    foreach (filter_formats() as $format => $info) {
      $options[$format] = $info->name;
    }
    $form['input_format'] = array(
      '#type' => 'select',
      '#title' => t('Input format'),
      '#options' => $options,
      '#default_value' => $settings['input_format'],
    );
  }
  elseif ($formatter == 'sarnia_formatter_multimedia_count') {
    $form['show_icon'] = array(
      '#type' => 'checkbox',
      '#title' => t('Show icon'),
      '#description' => t('Show file type icons.'),
      '#default_value' => $settings['show_icon'],
    );
  }
  elseif ($formatter == 'sarnia_formatter_openlayers') {
    // Disable the default Solr property.
    // @TODO maybe use this to select a "title" field?
    $form['solr_property']['#access'] = FALSE;

    $form['lat_solr_property'] = array(
      '#type' => 'select',
      '#title' => t('Latitude'),
      '#description' => t('Solr property to use as the latitude.'),
      '#options' => $solr_property_options,
      '#default_value' => $settings['lat_solr_property'],
    );
    $form['lon_solr_property'] = array(
      '#type' => 'select',
      '#title' => t('Longitude'),
      '#description' => t('Solr property to use as the longitude.'),
      '#options' => $solr_property_options,
      '#default_value' => $settings['lon_solr_property'],
    );
    sarnia_element_add_combobox($form['lat_solr_property']);
    sarnia_element_add_combobox($form['lon_solr_property']);

    // Get preset options, filtered to those which have the GeoField placeholder layer
    $maps = openlayers_maps();
    $options = array();
    foreach ($maps as $map) {
      if (in_array('sarnia_formatter_layer', $map->data['layers'])) {
        $options[$map->name] = $map->title;
      }
    }
    $form['openlayers_map'] = array(
      '#type' => 'select',
      '#title' => t('OpenLayers map'),
      '#description' => t('Select an OpenLayers map to use. Only maps which have the "Sarnia Formatter" layer may be selected.'),
      '#options' => $options,
      '#default_value' => $settings['openlayers_map'],
    );
  }

  return $form;
}

/**
 * Implements hook_field_formatter_view().
 *
 * Uses sarnia_field_get_property() to fetch properties.
 */
function sarnia_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $formatter = $display['type'];
  $settings = $display['settings'];
  $solr_property = $settings['solr_property'];

  // Get the value of the property we're formatting.
  $values = sarnia_field_get_property($entity, $field, $solr_property);

  // Build a render array for the values.
  $render_array = array();
  if ($formatter == 'sarnia_formatter_plain') {
    foreach ($values as $i => $value) {
      $render_array['#items'][$i] = $value;
      $render_array[$i] = array('#markup' => check_plain($value));
    }
  }
  elseif ($formatter == 'sarnia_formatter_date') {
    $format = ($settings['date_format_predefined'] ? $settings['date_format_predefined'] : $settings['date_format_custom']);
    foreach ($values as $i => $value) {
      $raw = ($settings['data_is_timestamp'] ? $value : strtotime($value));
      $formatted = date($format, $raw);
      $render_array['#items'][$i] = $raw;
      $render_array[$i] = array('#markup' => $formatted);
    }
  }
  elseif ($formatter == 'sarnia_formatter_number') {
    foreach ($values as $i => $value) {
      $formatted = $raw = (float) $value;
      if ($settings['separate_thousands']) {
        $formatted = number_format($raw);
      }
      $render_array['#items'][$i] = $raw;
      $render_array[$i] = array('#markup' => $formatted);
    }
  }
  elseif ($formatter == 'sarnia_formatter_multimedia' || $formatter == 'sarnia_formatter_image') {
    $path_values = ($settings['path_solr_property'] ? sarnia_field_get_property($entity, $field, $settings['path_solr_property']) : array());
    $alt_values = ($settings['alt_solr_property'] ? sarnia_field_get_property($entity, $field, $settings['alt_solr_property']) : array());
    $title_values = ($settings['title_solr_property'] ? sarnia_field_get_property($entity, $field, $settings['title_solr_property']) : array());

    $player_settings = array(
      'controls' => TRUE,
      'width' => 300,
      'height' => 30,
      'download_link' => FALSE,
      'download_text' => t('Download'),
    );
    $player_js_settings = array(
      'opts' => array(
        'audioHeight' => 30,
        'audioWidth' => 300,
      ),
      'controls' => TRUE,
    );

    foreach ($values as $i => $value) {
      $file = new stdclass;
      $file->filename = $value;
      $file->filemime = file_get_mimetype($file->filename);
      $file->filepath = _sarnia_build_path($i, $values, $path_values, $settings['base_path']);
      $file->uri = url($file->filepath);
      $file->filesize = 0;

      // Select the file display based on the first half of the mimetype.
      $simple_mime = current(explode('/', $file->filemime));

      // Only provide media players if mediaelement is present.
      if (!module_exists('mediaelement') && ($simple_mime == 'audio' || $simple_mime == 'video')) {
        $simple_mime = 'default';
      }
      // MediaElement.js will only play mp4, webm, ogg, and flv video formats.
      elseif ($simple_mime == 'video' && !in_array($file->filemime, array('video/mp4', 'video/webm', 'video/ogg', 'video/x-flv'))) {
        $simple_mime = 'default';
      }

      switch ($simple_mime) {
        case 'audio':
        case 'video':
          $class = drupal_html_id('sarnia-media-player');
          $render_array['#items'][$i] = $file->uri;
          $render_array[$i] = array(
            '#theme' => ($simple_mime == 'audio' ? 'mediaelement_audio' : 'mediaelement_video'),
            '#attributes' => array(
              'class' => $class,
              'src' => $file->uri,
              'type' => $file->filemime,
            ),
            '#settings' => $player_settings,
            '#attached' => array(
              'library' => array(array('mediaelement', 'mediaelement')),
              'js' => array(
                array(
                  'type' => 'file',
                  'data' => drupal_get_path('module', 'mediaelement') . '/mediaelement.js',
                ),
                array(
                  'type' => 'setting',
                  'data' => array('mediaelement' => array(".$class" => $player_js_settings)),
                ),
              ),
            ),
          );
          break;
        case 'image':
          if (!empty($settings['filename_suffix'])) {
            $file->filepath = _sarnia_build_path($i, $values, $path_values, $settings['base_path'], $settings['filename_suffix']);
            $file->uri = url($file->filepath);
          }

          $alt = trim((isset($alt_values[$i]) ? $alt_values[$i] : current($alt_values)), '/');
          $title = (isset($title_values[$i]) ? $title_values[$i] : current($title_values));
          $render_array['#items'][$i] = $file->uri;
          $render_array[$i] = array(
            '#theme' => 'image',
            '#path' => $file->uri,
            '#alt' => $alt,
            '#title' => $title,
          );
          break;
        default:
          $render_array['#items'][$i] = $file->uri;
          $render_array[$i] = array(
            '#theme' => 'file_link',
            '#file' => $file,
          );
      }
    }
  }
  elseif ($formatter == 'sarnia_formatter_text') {
    foreach ($values as $i => $value) {
      $raw = $value;
      $formatted = check_markup($raw, $settings['input_format']);

      $render_array['#items'][$i] = $raw;
      $render_array[$i] = array('#markup' => $formatted);
    }
  }
  elseif ($formatter == 'sarnia_formatter_count') {
    $count = count($values);
    $render_array['#items'][] = $count;
    $render_array[] = array('#markup' => $count);
  }
  elseif ($formatter == 'sarnia_formatter_multimedia_count') {
    // Use Drupal's file_icon_url() to divide files up by type. Count the number
    // of files of each type.
    $types = array();
    foreach ($values as $i => $value) {
      $file = new stdclass;
      $file->filename = $value;
      $file->filemime = file_get_mimetype($file->filename);

      $icon_path = file_icon_url($file);
      $types[$icon_path] = (empty($types[$icon_path]) ? 1 : $types[$icon_path] + 1);
      $render_array['#items'][$i] = $icon_path;
    }

    // Translate file type icons to a common, human readable name.
    $type_name_map = array(
      'application-octet-stream.png' => t('unknown'),
      'application-pdf.png' => t('PDF'),
      'application-x-executable.png' => t('executable'),
      'audio-x-generic.png' => t('audio'),
      'image-x-generic.png' => t('image'),
      'package-x-generic.png' => t('zip'),
      'text-html.png' => t('HTML'),
      'text-plain.png' => t('plain text'),
      'text-x-generic.png' => t('document'),
      'text-x-script.png' => t('script'),
      'video-x-generic.png' => t('video'),
      'x-office-document.png' => t('Office document'),
      'x-office-presentation.png' => t('Powerpoint'),
      'x-office-spreadsheet.png' => t('spreadsheet'),
    );

    // Make a renderable list of the file types in this field.
    foreach ($types as $icon_path => $count) {
      $icon_filename = substr($icon_path, strrpos($icon_path, '/') + 1);
      $icon_type = (isset($type_name_map[$icon_filename]) ? $type_name_map[$icon_filename] : t('unknown'));
      $text = format_plural($count, '1 !type file', '@count !type files', array('!type' => $icon_type));

      $render_array['#items'][] = $text;
      $render_array[] = array(
        array(
          '#theme' => 'image',
          '#path' => $icon_path,
          '#alt' => '',
          '#access' => $settings['show_icon'],
        ),
        array('#markup' => $text),
      );
    }
  }
  elseif ($formatter == 'sarnia_formatter_openlayers' && module_exists('openlayers')) {
    $map_features = array();

    $latitudes = sarnia_field_get_property($entity, $field, $settings['lat_solr_property']);
    $longitudes = sarnia_field_get_property($entity, $field, $settings['lon_solr_property']);
    foreach ($latitudes as $i => $lat) {
      if (isset($longitudes[$i])) {
        $lon = $longitudes[$i];

        // Render the coordinates as WKT.
        // @see http://en.wikipedia.org/wiki/Well-known_text
        $wkt = sprintf('POINT(%F %F)', check_plain($lon), check_plain($lat));
        $map_features[] = array(
          'wkt' => $wkt,
          'projection' => '4326',
        );
        $render_array['#items'][$i] = $wkt;
      }
    }

    $map = openlayers_map_load($settings['openlayers_map']);
    if (!empty($map->data['layers']['sarnia_formatter_layer'])) {
      if (empty($map_features)) {
        // Let the map preset handle empty values.
        $render_array[] = array('#markup' => openlayers_render_map($map->data));
      }
      else {
        $map = openlayers_build_map($map->data);
        $map['layers']['sarnia_formatter_layer']['features'] = $map_features;

        // If there were no errors, render the map.
        if (empty($map['errors'])) {
          $render_array[0] = array();
          $render_array[0]['#markup'] = theme('openlayers_map', array('map' => $map, 'map_name' => $settings['openlayers_map']));
          $render_array[0]['#attached']['js'][] = array(
            'type' => 'setting',
            'data' => array('openlayers' => array('maps' => array($map['id'] => $map))),
          );
        }
      }
    }
  }

  return $render_array;
}

/**
 * Build a path based on Sarnia field formatter settings.
 *
 * @param int $i
 *   The index of $values that the path should be built from.
 * @param array $values
 *   An array of values that will comprise the end of the path.
 * @param array $components
 *   An array of values that will comprise the middle of the path. If present,
 *   the value corresponding to $i will be used in the path; otherwise, if this
 *   is a single value array, the same value will be used for all paths.
 * @param string $base_path
 *   A constant value to use as the base for all paths.
 * @param string $filename_suffix
 *   A constant value to insert in the filename before the file extension.
 */
function _sarnia_build_path($i, $values, $components = array(), $base_path = '', $filename_suffix = '') {
  $path = '';
  // @TODO: Should we run anything here through urlencode()?
  if (!empty($values[$i])) {
    $path = $values[$i];

    if (!empty($filename_suffix) && ($pos = strrpos($path, '.'))) {
      $path = substr_replace($path, $filename_suffix, $pos, 0);
    }

    if (isset($components[$i])) {
      $path = rtrim($components[$i], '/') . '/' . ltrim($path, '/');
    }
    elseif (count($components) == 1) {
      $path = rtrim($components[0], '/') . '/' . ltrim($path, '/');
    }

    if (!empty($base_path)) {
      $path = rtrim($base_path, '/') . '/' . ltrim($path, '/');
    }
  }
  return $path;
}
