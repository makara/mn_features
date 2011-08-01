Drupal.behaviors.mn_core_behavior_layerswitcherplus = function(context) {
  var data = $(context).data('openlayers');
  if (data && data.map.behaviors.mn_core_behavior_layerswitcherplus) {
    // Add control
    var control = new OpenLayers.Control.LayerSwitcherPlus();
    data.openlayers.addControl(control);
    control.activate();
  }
};
