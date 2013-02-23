<?php

/**
 * @file
 * Functionality for Grid field formatter administration page.
 */

/**
 * Menu callback: configuration of Grid Field Formatter field types.
 */
function grid_field_formatter_settings($form, &$form_state){
  $options = array();
  foreach(field_info_field_types() as $type_name => $type){
    $options[$type_name] = $type['label'];
  }

  $form['#prefix'] = t('Configure the Grid Field Formatter settings below:');
  $form['grid_field_formatter_field_types'] = array(
    '#title' => t('Please select the field type for which Grid Field Formatter should be available.'),
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => variable_get('grid_field_formatter_field_types', array()),
  );

  return system_settings_form($form);
}

function grid_field_formatter_settings_submit($form, &$form_state){
  // flush field cache
  field_cache_clear();
}
