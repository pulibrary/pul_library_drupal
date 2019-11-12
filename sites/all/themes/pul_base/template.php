<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * pul_base theme.
 */

function pul_base_css_alter(&$css) {

  // list of css files to be excluded from display
  $exclude = array(
    'sites/all/themes/omega/omega/css/modules/comment/comment.theme.css' => FALSE,
    'sites/all/themes/omega/omega/css/modules/system/system.theme.css' => FALSE,
    'sites/all/modules/calendar/css/calendar_multiday.css' => FALSE,
    'sites/all/modules/calendar/css/calendar-overlap-no-scroll.css' => FALSE,
    'sites/all/modules/calendar/css/calendar-overlap.css' => FALSE,
    'sites/all/modules/calendar/css/calendar.css' => FALSE,
    'sites/all/modules/date/date_api/date.css' => FALSE,
    'sites/all/modules/date/date_popup/themes/datepicker.1.7.css' => FALSE,
    'sites/all/modules/date/date_repeat_field/date_repeat_field.css' => FALSE,
    'sites/all/modules/date/date_views/css/date_views.css' => FALSE,
    'sites/all/modules/office_hours/office_hours.css' => FALSE,
    'sites/all/modules/panels/plugins/layouts/twocol/twocol.css' => FALSE,
    'sites/all/modules/ctools/css/ctools.css' => FALSE,
    'sites/all/modules/panels/css/panels.css' => FALSE,
    'sites/all/modules/quicktabs/css/quicktabs.css' => FALSE,
  );
  $css = array_diff_key($css, $exclude);
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

function pul_base_allsearch_block_form_validate($form, &$form_state) {
  $keys = $form_state['values']['query'];
  if (!empty($keys) && substr($keys, 0, 1) == '.') {
    $form_state['values']['query'] = substr($keys, 1);
  }
}

function pul_base_form_alter(&$form, &$form_state, $form_id) {
    switch($form_id) {
        case 'allsearch_block_form':
            $form['#validate'][] = 'pul_base_allsearch_block_form_validate';
            $form['allsearch_block_form']['#attributes']['placeholder'] = t('Search');
            $form['button'] = array(
                '#prefix' => '<button type="submit" id="allsearch-submit-btn" name="op" class="form-submit">',
                '#suffix' => '</button>',
                '#markup' => '<span class="hide">Search</span>',
            );
            break;

        case 'allsearch_form_form':
            $form['allsearch_form_form']['#attributes']['placeholder'] = t('Search');
            $form['button'] = array(
                '#prefix' => '<button type="submit" id="search-submit-btn" name="op" class="form-submit">',
                '#suffix' => '</button>',
                '#markup' => '<span class="hide">Search</span>',
            );
            break;
        case 'catalog_block_form':
            $form['catalog_block_form']['#attributes']['placeholder'] = t('Search');
            $form['button'] = array(
                '#prefix' => '<button type="submit" id="catalog-submit-btn" name="op" class="form-submit">',
                '#suffix' => '</button>',
                '#markup' => '<span class="hide">Search</span>',
            );
            break;
        case 'summon_block_form':
            $form['summon_block_form']['#attributes']['placeholder'] = t('Search');
            $form['button'] = array(
                '#prefix' => '<button type="submit" id="summon-submit-btn" name="op" class="form-submit">',
                '#suffix' => '</button>',
                '#markup' => '<span class="hide">Search</span>',
            );
            break;
        case 'dbsearch_block_form':
            $form['dbsearch_block_form']['#attributes']['placeholder'] = t('Search');
            $form['button'] = array(
                '#prefix' => '<button type="submit" id="dbsearch-submit-btn" name="op" class="form-submit">',
                '#suffix' => '</button>',
                '#markup' => '<span class="hide">Search</span>',
            );
            break;
        case 'prdssearch_block_form':
            $form['prdssearch_block_form']['#attributes']['placeholder'] = t('Search');
            $form['button'] = array(
                '#prefix' => '<button type="submit" id="prdssearch-submit-btn" name="op" class="form-submit">',
                '#suffix' => '</button>',
                '#markup' => '<span class="hide">Search</span>',
            );
            break;
        case 'music_audio_block_form':
            $form['music_audio_block_form']['#attributes']['placeholder'] = t('Search');
            $form['button'] = array(
                '#prefix' => '<button type="submit" id="audio-submit-btn" name="op" class="form-submit">',
                '#suffix' => '</button>',
                '#markup' => '<span class="hide">Search</span>',
            );
            break;
        case 'music_score_block_form':
            $form['music_score_block_form']['#attributes']['placeholder'] = t('Search');
            $form['button'] = array(
                '#prefix' => '<button type="submit" id="score-submit-btn" name="op" class="form-submit">',
                '#suffix' => '</button>',
                '#markup' => '<span class="hide">Search</span>',
            );
            break;
        case 'music_video_block_form':
            $form['music_video_block_form']['#attributes']['placeholder'] = t('Search');
            $form['button'] = array(
                '#prefix' => '<button type="submit" id="video-submit-btn" name="op" class="form-submit">',
                '#suffix' => '</button>',
                '#markup' => '<span class="hide">Search</span>',
            );
            break;
    }

}

function pul_base_tablesort_indicator($variables) {
  if ($variables['style'] == "asc") {
    return theme('image', array(
      'path' => 'sites/all/themes/pul_base/assets/public/images/arrow-asc.png',
      'width' => 10,
      'height' => 10,
      'alt' => t('sort ascending'),
      'title' => t('sort ascending'),
    ));
  }
  else {
    return theme('image', array(
      'path' => 'sites/all/themes/pul_base/assets/public/images/arrow-desc.png',
      'width' => 10,
      'height' => 10,
      'alt' => t('sort descending'),
      'title' => t('sort descending'),
    ));
  }
}

/**
 * Override of theme('textarea').
 * Deprecate misc/textarea.js in favor of using the 'resize' CSS3 property.
 */

function pul_base_textarea($variables) {
  $element = $variables ['element'];
  element_set_attributes($element, array('id', 'name', 'cols', 'rows'));
  _form_set_class($element, array('form-textarea'));

  $wrapper_attributes = array(
    'class' => array('form-textarea-wrapper'),
  );

  $output = '<div' . drupal_attributes($wrapper_attributes) . '>';
  $output .= '<textarea' . drupal_attributes($element ['#attributes']) . '>' . check_plain($element ['#value']) . '</textarea>';
  $output .= '</div>';
  return $output;
}

function pul_base_menu_link__main_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
    $element['#localized_options']['attributes']['aria-haspopup'][] = 'true';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
} 
