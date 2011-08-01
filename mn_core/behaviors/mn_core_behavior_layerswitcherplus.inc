<?php

class mn_core_behavior_layerswitcherplus extends openlayers_behavior {
  /**
   * Render.
   */
  function render(&$map) {
    drupal_add_js(drupal_get_path('module', 'mn_core') .'/behaviors/mn_core_behavior_layerswitcherplus_control.js');
    drupal_add_js(drupal_get_path('module', 'mn_core') .'/behaviors/mn_core_behavior_layerswitcherplus.js');
    drupal_add_css(drupal_get_path('module', 'mn_core') .'/behaviors/mn_core_behavior_layerswitcherplus.css');
    return $this->options;
  }
}
