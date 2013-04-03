/**
 * OpenLayers Image Layer Handler
 */
Drupal.openlayers.layer.image = function(title, map, options) {
  return new OpenLayers.Layer.Image(
    title,
    options.file,
    new OpenLayers.Bounds.fromArray(options.maxExtent),
    new OpenLayers.Size(options.size.w/options.factors.x, options.size.h/options.factors.y),
    {numZoomLevels: options.numZoomLevels}
  );
};
