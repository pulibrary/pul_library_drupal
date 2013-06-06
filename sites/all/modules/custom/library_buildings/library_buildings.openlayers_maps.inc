<?php
/**
 * @file
 * library_buildings.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function library_buildings_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'library_locations_map';
  $openlayers_maps->title = 'Library Locations Map';
  $openlayers_maps->description = 'Creates a map of a single library location or multiples via the building content type and Google Maps.';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-74.657495, 40.349582',
        'zoom' => '17',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'building_maps_openlayers_1' => 'building_maps_openlayers_1',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'building_maps_openlayers_1' => 'building_maps_openlayers_1',
          'google_normal' => 0,
          'google_satellite' => 0,
        ),
        'point_zoom_level' => '18',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'google_satellite' => 'google_satellite',
      'building_maps_openlayers_1' => 'building_maps_openlayers_1',
    ),
    'layer_weight' => array(
      'building_maps_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'building_maps_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'building_maps_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_activated' => array(
      'building_maps_openlayers_1' => 'building_maps_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'building_maps_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default_marker_blue',
      'select' => 'default_marker_black_small',
      'temporary' => 'default_marker_black_small',
    ),
  );
  $export['library_locations_map'] = $openlayers_maps;

  return $export;
}
