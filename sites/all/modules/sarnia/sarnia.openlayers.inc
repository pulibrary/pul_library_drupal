<?php

/**
 * @file
 * Provide default maps and layers for integration with OpenLayers (http://drupal.org/project/openlayers)
 */

/**
 * Implements hook_openlayers_maps().
 *
 * Provide a default OpenLayers map for the Sarnia "OpenLayers map" field
 * formatter.
 */
function sarnia_openlayers_maps() {
  $openlayers_path = drupal_get_path('module', 'openlayers');
  $maps = array();

  $map = new stdClass();
  $map->disabled = FALSE;
  $map->api_version = 1;
  $map->name = 'sarnia_formatter_map';
  $map->title = t('Sarnia Formatter Map');
  $map->description = t('Used by Sarnia for formatting Solr properties.');
  $map->data = array(
    'projection' => '900913',
    'width' => '400px',
    'height' => '266px',
    'image_path' => $openlayers_path . '/themes/default_dark/img/',
    'css_path' => $openlayers_path . '/themes/default_dark/style.css',
    'default_layer' => 'mapquest_osm',
    'hide_empty_map' => TRUE,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0, 0',
        'zoom' => '1',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'sarnia_formatter_layer',
        'point_zoom_level' => '3',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'sarnia_formatter_layer' => 'sarnia_formatter_layer',
    ),
    'layer_activated' => array(
      'sarnia_formatter_layer' => 'sarnia_formatter_layer',
    ),
    'layer_styles' => array(
      'sarnia_formatter_layer' => 'default_marker_black',
    ),
    'layer_styles_select' => array(
      'sarnia_formatter_layer' => 'default_marker_black',
    ),
    'map_name' => $map->name,
  );
  $maps[$map->name] = $map;

  return $maps;
}

/**
 * Implements hook_openlayers_layers().
 *
 * Provide a placeholder layer so raw feature data can be pushed into a map when
 * rendering Sarnia's "OpenLayers map" field formatter.
 */
function sarnia_openlayers_layers() {
  $layers = array();

  $layer = new stdClass();
  $layer->disabled = FALSE;
  $layer->api_version = 1;
  $layer->name = 'sarnia_formatter_layer';
  $layer->title = 'Sarnia Formatter';
  $layer->description = 'Placeholder for data from the Sarnia "OpenLayers map" field formatter.';
  $layer->data = array(
    'layer_type' => 'openlayers_layer_type_raw',
    'projection' => array('900913'),
    'baselayer' => FALSE,
    'vector' => TRUE,
    'features' => array(),
  );
  $layers[$layer->name] = $layer;

  return $layers;
}
