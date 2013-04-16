
/**
 * Process MS Bing Layers
 *
 * @param layerOptions
 *   Object of options.
 * @param mapid
 *   Map ID.
 * @return
 *   Valid OpenLayers layer.
 */
Drupal.openlayers.layer.bing = function(title, map, options) {

  options.projection = new OpenLayers.Projection(options.projection);

  var layer = new OpenLayers.Layer.Bing(options);
  layer.styleMap = Drupal.openlayers.getStyleMap(map, options.drupalID);
  return layer;
};
