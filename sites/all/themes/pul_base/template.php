<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * pul_base theme.
 */


/**
 * Implements hook_form_alter.
 *
 */

function pul_base_form_alter(&$form, &$form_state, $form_id) {
  // Remove elements from the page.
  if($form_id == 'allsearch_block_form') {
    #print_r($form_state);
    if(drupal_is_front_page()) {
      $suffix = '<div class="homepage-tab-form-message"><a onclick="_gaq.push([\'_trackEvent\', \'Tab Link\', \'Main Catalog\', \'All Tab\']);" title="Go to the Main Catalog" href="http://catalog.princeton.edu/">Main Catalog</a></div>';
      $form['#suffix'] = $suffix; 
    }
  }
}

function pul_base_date_nav_title($params) {
    $granularity = $params['granularity'];
    $view = $params['view'];
    $date_info = $view->date_info;
    $link = !empty($params['link']) ? $params['link'] : FALSE;
    $format = !empty($params['format']) ? $params['format'] : NULL;
    
    switch ($granularity) {
        case 'year':
        $title = $date_info->year;
        $date_arg = $date_info->year;
        break;

        case 'month':
        $format = !empty($format) ? $format : (empty($date_info->mini) ? 'F Y' : 'F Y');
        $title = date_format_date($date_info->min_date, 'custom', $format);
        $date_arg = $date_info->year .'-'. date_pad($date_info->month);
        break;

        case 'day':
        $format = !empty($format) ? $format : (empty($date_info->mini) ? 'l, F j Y' : 'l, F j');
        $title = date_format_date($date_info->min_date, 'custom', $format);
        $date_arg = $date_info->year .'-'. date_pad($date_info->month) .'-'. date_pad($date_info->day);
        break;
        
        case 'week':
        $format = !empty($format) ? $format : (empty($date_info->mini) ? 'F j Y' : 'F j');
        $title = t('Week of @date', array('@date' => date_format_date($date_info->min_date, 'custom', $format)));
        $date_arg = $date_info->year .'-W'. date_pad($date_info->week);
        break;
    }
    if (!empty($date_info->mini) || $link) {
        // Month navigation titles are used as links in the mini view.
        $attributes = array('title' => t('View full page month'));
        $url = date_pager_url($view, $granularity, $date_arg, TRUE);
        return l($title, $url, array('attributes' => $attributes));
    }
    else {
        return $title;
    }
}
