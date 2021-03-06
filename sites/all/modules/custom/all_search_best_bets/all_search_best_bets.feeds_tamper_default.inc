<?php

/**
 * @file
 * all_search_best_bets.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function all_search_best_bets_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'all_search_best_bets-search_terms-explode';
  $feeds_tamper->importer = 'all_search_best_bets';
  $feeds_tamper->source = 'search_terms';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => '|',
    'separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['all_search_best_bets-search_terms-explode'] = $feeds_tamper;

  return $export;
}
