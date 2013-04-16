
/**
 * @file
 * Layer handler for OSM layers
 */

/**
 * Openlayer layer handler for OSM layer
 */
Drupal.openlayers.layer.osm = function(title, map, options) {
    var layer = new OpenLayers.Layer.OSM(title, options.url, options);
    layer.styleMap = Drupal.openlayers.getStyleMap(map, options.drupalID);
    return layer;
};
