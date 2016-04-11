<?php

/**
 * Implements hook_services_resources().
 */
function hybridauth_services_services_resources() {
  $definition['hybridauth']['actions']['connect'] = array(
    'file' => array(
      'type' => 'inc', 
      'module' => 'hybridauth_services', 
      'name' => 'hybridauth_services.resource',
      ),
    'help' => 'Facebook Login using hybridauth module',
    'callback' => 'hybridauth_services_connect',
    'args' => array(
      array(
        'name' => 'access_token',
        'type' => 'string',
        'description' => 'A valid Facebook access token',
        'source' => 'data',
        'optional' => FALSE,
      ),
    ),
    'access callback' => 'services_access_menu',
  );
 
  return $definition;
}