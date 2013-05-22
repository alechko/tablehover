<?php
/**
 * @file
 * Settings for file
 */

/**
 * Implements hook_form().
 */
function tablehover_settings_form() {
  $form = array();
  $form['tablehover_type'] = array(
    '#type' => 'select',
    '#title' => t('Choose file type:'),
    '#options' => array(
      0 => 'Normal (13.8K)',
      1 => 'Minified (3.2K)',
      2 => 'Packed (2.9K)',
    ),
    '#default_value' => variable_get('tablehover_type', 1),
  );
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return system_settings_form($form);
}
