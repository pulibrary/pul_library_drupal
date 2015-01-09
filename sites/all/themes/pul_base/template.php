<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * pul_base theme.
 */


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
