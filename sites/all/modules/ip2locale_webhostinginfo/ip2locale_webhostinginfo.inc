<?php
// $Id: ip2locale_webhostinginfo.inc,v 1.1.2.5 2009/12/13 09:46:46 mrfelton Exp $

/**
 * @file
 * Include file for IP to Country module.
 */

function ip2locale_webhostinginfo_batch_prepare() {
  $src = variable_get('database_source', 'http://ip-to-country.webhosting.info/downloads/ip-to-country.csv.zip');
  
  $operations = array();
  $operations[] = array('_ip2locale_webhostinginfo_get_zip', array($src));
  $operations[] = array('_ip2locale_webhostinginfo_batch_insert', array());
  
  $recover = variable_get('ip2locale_webhostinginfo_get_zip_done', FALSE) | variable_get('ip2locale_webhostinginfo_extract_zip_done', FALSE) | variable_get('ip2locale_webhostinginfo_store_location_csv_done', FALSE);
  
  $batch = array(
    'title' => t('Importing IP to Locale Webhosting.info database'),
    'operations' => $operations,
    'title' => t('Importing'),
    'init_message'     => $recover ? t('Recovering...') : t('Starting...'),
    'progress_message' => '',
    'error_message' => t('The import process has encountered an error.'),
    'finished' => '_ip2locale_webhostinginfo_batch_insert_finished',
    'file' => drupal_get_path('module', 'ip2locale_webhostinginfo') . '/ip2locale_webhostinginfo.inc',
  );
  batch_set($batch);
  return $batch;
}

function ip2locale_webhostinginfo_batch_insert($ajax = FALSE) {
  $batch =& batch_get();
  if (empty($batch)) {
    $batch = ip2locale_webhostinginfo_batch_prepare();
  }
  
  // If we are running in an ajax callback, don't run in progressive mode
  if ($ajax) {
    $batch =& batch_get();
    $batch['progressive'] = FALSE;
    batch_process();
  }
}
  
function _ip2locale_webhostinginfo_batch_insert(&$context) {

  // Work out how many lines we have.
  if (empty($context['sandbox'])) {
    
    $file = drupal_get_path('module', 'ip2locale_webhostinginfo') . '/ip-to-country.csv';
    if (!$file || !file_exists($file)) {
      drupal_set_message(t("The ip2locale_webhostinginfo database file @file is missing. ", array('@file' => $file)), 'error');
      return FALSE;
    }
    $fd = fopen($file, 'r');
    if (!$fd) {
      drupal_set_message(t("Could not open the ip2locale_webhostinginfo database (@file) for reading. Please check it's permissions.", array('@file' => $file)), 'error');
      return FALSE;
    }
    
    $context['sandbox']['progress'] = 0;
    $context['sandbox']['current_line'] = 0;
    $context['sandbox']['max'] = count(file($file));
    $context['sandbox']['file'] = $file;
    
    // flush the existing entries
    db_delete('ip2locale_webhostinginfo')->execute();
  }
  
  $fd = fopen($context['sandbox']['file'], 'r');
  
  // insert some records
  $query = db_insert('ip2locale_webhostinginfo')->fields(array('ip_from', 'ip_to', 'iso2', 'iso3', 'name'));
  
  $count = 0;
  $start = $context['sandbox']['current_line'];
  $end = $context['sandbox']['current_line'] + 5000;
  
  while ($line = fgets($fd)) {
    if ($count >= $start && $count < $end) {
      if (preg_match('/^"([0-9]+)","([0-9]+)","(.{2})","(.{3})","(.*)"$/', trim($line), $matches)) {
        $query->values(array(
          'ip_from' => $matches[1],
          'ip_to' => $matches[2],
          'iso2' => $matches[3],
          'iso3' => $matches[4],
          'name' => $matches[5],
        ));
        $context['results'][] = $line;
      }
      $context['sandbox']['progress']++;
      $context['sandbox']['current_line']++;
    }
    $count++;
  }
 
  $query->execute();
  fclose($fd);

  if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  }
  // Record the current status for use in ajax progress bar
  variable_set('ip2locale_webhostinginfo_update_progress_message', t('@count of @total', array('@count' => $context['sandbox']['progress'], '@total' => $context['sandbox']['max'])));
  variable_set('ip2locale_webhostinginfo_update_progress_percent', $context['finished']);
  variable_set('ip2locale_webhostinginfo_last_update', REQUEST_TIME);
}

function _ip2locale_webhostinginfo_batch_insert_finished($success, $results, $operations) {
  if ($success) {
    $message = format_plural(count($results), 'One record imported.', '@count records imported.');
  }
  else {
    $message = t('Finished with an error.');
  }
  drupal_set_message($message);
  
  // Reset the status variables.
  variable_set('ip2locale_webhostinginfo_update_progress_message', '');
  variable_set('ip2locale_webhostinginfo_update_progress_percent', 0);
}

function _ip2locale_webhostinginfo_inet_aton($a) {
  $ip = gethostbyname($a);
  return sprintf("%u", ip2long($ip));
}

/**
 * Get the total count of IP ranges in database
 */
function _ip2locale_webhostinginfo_get_count() {
  $sql   = "SELECT COUNT(*) FROM {ip2locale_webhostinginfo}";
  $count = db_query($sql)->fetchField();
  return (int) $count;
}



function _ip2locale_webhostinginfo_get_zip($src = NULL, &$context) {
  if (variable_get('ip2locale_webhostinginfo_store_location_csv_done', FALSE) || variable_get('ip2locale_webhostinginfo_extract_zip_done', FALSE)) {
    // We are in recovery mode.
    return;
  }
  $path = file_stream_wrapper_uri_normalize('private://ip2locale/webhostinginfo');
  if (!file_prepare_directory($path, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS)) {
    // Private file system path not defined then stop the process
    $message = t('Private file system path not defined. Please define the private file system path !here.',  array('!here' => l('here', 'admin/config/media/file-system')));
    $context['results']['#abort'] = $message;
    $context['message'] = $message;
    return;
  }
  
  variable_set('ip2locale_webhostinginfo_update_progress_message', t('Fetching latest database'));
  
  $zip_files = file_scan_directory($path, '/\.zip$/');
  foreach ($zip_files as $zip_file) {
    $context['results']['#zip_file'] = drupal_realpath($zip_file->uri);
  }
  if (variable_get('ip2locale_webhostinginfo_get_zip_done', FALSE)) {
    // We are in recovery mode. Using previous downloaded zip.
    $context['finished'] = TRUE;
    $context['message']  = t('Using previous downloaded zip file (recovery mode)');
    return;
  }
  variable_set('ip2locale_webhostinginfo_get_zip_done', FALSE);

  if (isset($context['results']['#zip_file'])) {
    // Don't download, use manually uploaded zip file then 
    // update our progress information.
    $context['finished'] = TRUE;
    $context['message']  = t('Using manually uploaded @zip file', array('@zip' => $context['results']['#zip_file']));
  }
  else {
    $context['results']['#zip_file'] = drupal_realpath($path . '/ip-to-country.csv.zip');
    $context['finished'] = 50 / 100; 
    if (@copy($src, $context['results']['#zip_file'])) {
      // Update our progress information.
      $context['finished'] = TRUE; 
      $context['message']  = t('Download done. Extracting zip file...');
      // An indicator that is to be used in recovery mode
      variable_set('ip2locale_webhostinginfo_get_zip_done', TRUE);
    }
    else {
      // Error occured then stop the process
      $message = t('Download %src file failed. Be sure %src exists.',  array('%src' => $src));
      $context['results']['#abort'] = $message;
      $context['message'] = $message;
    }
  }
}