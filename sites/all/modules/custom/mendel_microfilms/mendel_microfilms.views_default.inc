<?php

/**
 * @file
 * mendel_microfilms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mendel_microfilms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mendel_microfilm';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mendel Microfilm Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mendel Microfilm';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_mus_microfilm_composer' => 'field_mus_microfilm_composer',
    'field_mus_collection' => 'field_mus_collection',
    'field_mus_microfilm_number' => 'field_mus_microfilm_number',
    'field_mus_notes' => 'field_mus_notes',
    'field_mus_reel_number' => 'field_mus_reel_number',
    'field_mus_year' => 'field_mus_year',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_microfilm_composer' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_collection' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_microfilm_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_year' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Sort information';
  $handler->display->display_options['header']['area']['content'] = 'Certain columns can be sorted by clicking on the header (Title, Year, Composer). Clicking on a composer name will show all works for the composer across all Microfilm Special Collections.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_mus_microfilm_author']['id'] = 'field_mus_microfilm_author';
  $handler->display->display_options['fields']['field_mus_microfilm_author']['table'] = 'field_data_field_mus_microfilm_author';
  $handler->display->display_options['fields']['field_mus_microfilm_author']['field'] = 'field_mus_microfilm_author';
  /* Field: Content: Barcode */
  $handler->display->display_options['fields']['field_mus_barcode']['id'] = 'field_mus_barcode';
  $handler->display->display_options['fields']['field_mus_barcode']['table'] = 'field_data_field_mus_barcode';
  $handler->display->display_options['fields']['field_mus_barcode']['field'] = 'field_mus_barcode';
  $handler->display->display_options['fields']['field_mus_barcode']['delta_offset'] = '0';
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_mus_levy_calendar']['id'] = 'field_mus_levy_calendar';
  $handler->display->display_options['fields']['field_mus_levy_calendar']['table'] = 'field_data_field_mus_levy_calendar';
  $handler->display->display_options['fields']['field_mus_levy_calendar']['field'] = 'field_mus_levy_calendar';
  $handler->display->display_options['fields']['field_mus_levy_calendar']['delta_offset'] = '0';
  /* Field: Content: Century */
  $handler->display->display_options['fields']['field_mus_levy_century']['id'] = 'field_mus_levy_century';
  $handler->display->display_options['fields']['field_mus_levy_century']['table'] = 'field_data_field_mus_levy_century';
  $handler->display->display_options['fields']['field_mus_levy_century']['field'] = 'field_mus_levy_century';
  $handler->display->display_options['fields']['field_mus_levy_century']['delta_offset'] = '0';
  /* Field: Content: City/Region */
  $handler->display->display_options['fields']['field_mus_levy_cityregion']['id'] = 'field_mus_levy_cityregion';
  $handler->display->display_options['fields']['field_mus_levy_cityregion']['table'] = 'field_data_field_mus_levy_cityregion';
  $handler->display->display_options['fields']['field_mus_levy_cityregion']['field'] = 'field_mus_levy_cityregion';
  /* Field: Content: Collection */
  $handler->display->display_options['fields']['field_mus_collection']['id'] = 'field_mus_collection';
  $handler->display->display_options['fields']['field_mus_collection']['table'] = 'field_data_field_mus_collection';
  $handler->display->display_options['fields']['field_mus_collection']['field'] = 'field_mus_collection';
  /* Field: Content: Composer */
  $handler->display->display_options['fields']['field_mus_microfilm_composer']['id'] = 'field_mus_microfilm_composer';
  $handler->display->display_options['fields']['field_mus_microfilm_composer']['table'] = 'field_data_field_mus_microfilm_composer';
  $handler->display->display_options['fields']['field_mus_microfilm_composer']['field'] = 'field_mus_microfilm_composer';
  $handler->display->display_options['fields']['field_mus_microfilm_composer']['delta_offset'] = '0';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_mus_levy_country']['id'] = 'field_mus_levy_country';
  $handler->display->display_options['fields']['field_mus_levy_country']['table'] = 'field_data_field_mus_levy_country';
  $handler->display->display_options['fields']['field_mus_levy_country']['field'] = 'field_mus_levy_country';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_mus_description']['id'] = 'field_mus_description';
  $handler->display->display_options['fields']['field_mus_description']['table'] = 'field_data_field_mus_description';
  $handler->display->display_options['fields']['field_mus_description']['field'] = 'field_mus_description';
  /* Field: Content: Folio */
  $handler->display->display_options['fields']['field_mus_levy_folio']['id'] = 'field_mus_levy_folio';
  $handler->display->display_options['fields']['field_mus_levy_folio']['table'] = 'field_data_field_mus_levy_folio';
  $handler->display->display_options['fields']['field_mus_levy_folio']['field'] = 'field_mus_levy_folio';
  /* Field: Content: Holding Library */
  $handler->display->display_options['fields']['field_mus_holding_library']['id'] = 'field_mus_holding_library';
  $handler->display->display_options['fields']['field_mus_holding_library']['table'] = 'field_data_field_mus_holding_library';
  $handler->display->display_options['fields']['field_mus_holding_library']['field'] = 'field_mus_holding_library';
  /* Field: Content: Librettist */
  $handler->display->display_options['fields']['field_mus_microfilm_librettist']['id'] = 'field_mus_microfilm_librettist';
  $handler->display->display_options['fields']['field_mus_microfilm_librettist']['table'] = 'field_data_field_mus_microfilm_librettist';
  $handler->display->display_options['fields']['field_mus_microfilm_librettist']['field'] = 'field_mus_microfilm_librettist';
  /* Field: Content: Manuscript type */
  $handler->display->display_options['fields']['field_mus_levy_manuscript_type']['id'] = 'field_mus_levy_manuscript_type';
  $handler->display->display_options['fields']['field_mus_levy_manuscript_type']['table'] = 'field_data_field_mus_levy_manuscript_type';
  $handler->display->display_options['fields']['field_mus_levy_manuscript_type']['field'] = 'field_mus_levy_manuscript_type';
  /* Field: Content: Microfilm Number */
  $handler->display->display_options['fields']['field_mus_microfilm_number']['id'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['table'] = 'field_data_field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['field'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_mus_notes']['id'] = 'field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['table'] = 'field_data_field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['field'] = 'field_mus_notes';
  /* Field: Content: Occasion */
  $handler->display->display_options['fields']['field_mus_scheide_occasion']['id'] = 'field_mus_scheide_occasion';
  $handler->display->display_options['fields']['field_mus_scheide_occasion']['table'] = 'field_data_field_mus_scheide_occasion';
  $handler->display->display_options['fields']['field_mus_scheide_occasion']['field'] = 'field_mus_scheide_occasion';
  /* Field: Content: Primary Catalog Number */
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['id'] = 'field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['table'] = 'field_data_field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['field'] = 'field_mus_primary_catalog_no';
  /* Field: Content: Reel Name (not order or enumeration) */
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['id'] = 'field_mus_reel_name_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['table'] = 'field_data_field_mus_reel_name_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['field'] = 'field_mus_reel_name_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['label'] = 'Reel Name/Enumeration';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['delta_offset'] = '0';
  /* Field: Content: Reel Number */
  $handler->display->display_options['fields']['field_mus_reel_number']['id'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['field'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['type'] = 'text_default';
  $handler->display->display_options['fields']['field_mus_reel_number']['delta_offset'] = '0';
  /* Field: Content: Secondary Catalog Number */
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['id'] = 'field_mus_secondary_catalog_no';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['table'] = 'field_data_field_mus_secondary_catalog_no';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['field'] = 'field_mus_secondary_catalog_no';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['delta_offset'] = '0';
  /* Field: Content: Shelfmark/Number */
  $handler->display->display_options['fields']['field_mus_micro_snm']['id'] = 'field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['table'] = 'field_data_field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['field'] = 'field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['delta_offset'] = '0';
  /* Field: Content: Uncat Title */
  $handler->display->display_options['fields']['field_mus_uncat_title']['id'] = 'field_mus_uncat_title';
  $handler->display->display_options['fields']['field_mus_uncat_title']['table'] = 'field_data_field_mus_uncat_title';
  $handler->display->display_options['fields']['field_mus_uncat_title']['field'] = 'field_mus_uncat_title';
  /* Field: Content: Uncataloged Composer etc */
  $handler->display->display_options['fields']['field_mus_uncat_composer']['id'] = 'field_mus_uncat_composer';
  $handler->display->display_options['fields']['field_mus_uncat_composer']['table'] = 'field_data_field_mus_uncat_composer';
  $handler->display->display_options['fields']['field_mus_uncat_composer']['field'] = 'field_mus_uncat_composer';
  $handler->display->display_options['fields']['field_mus_uncat_composer']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_mus_year']['id'] = 'field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['table'] = 'field_data_field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['field'] = 'field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mus_year']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mus_mendel_microfilm' => 'mus_mendel_microfilm',
  );

  /* Display: Admin Page */
  $handler = $view->new_display('page', 'Admin Page', 'page');
  $handler->display->display_options['path'] = 'mendel-microfilm';

  /* Display: Mendel Walker Microfilm Collection */
  $handler = $view->new_display('page', 'Mendel Walker Microfilm Collection', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mendel Walker Nielsen Microfilm Collection';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_mus_notes' => 'field_mus_notes',
    'field_mus_year' => 'field_mus_year',
    'field_mus_primary_catalog_no' => 'field_mus_primary_catalog_no',
    'field_mus_microfilm_number' => 'field_mus_microfilm_number',
    'field_mus_reel_number' => 'field_mus_reel_number',
    'field_mus_reel_order_enumeration' => 'field_mus_reel_order_enumeration',
    'field_mus_collection' => 'field_mus_collection',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_primary_catalog_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_microfilm_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_order_enumeration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_collection' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Sort information';
  $handler->display->display_options['header']['area']['content'] = 'Certain columns can be sorted by clicking on the header (Title, Year, Composer, etc.). ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_mus_notes']['id'] = 'field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['table'] = 'field_data_field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['field'] = 'field_mus_notes';
  /* Field: Content: Primary Catalog Number */
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['id'] = 'field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['table'] = 'field_data_field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['field'] = 'field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['label'] = 'Fog and Schousboe Number';
  /* Field: Content: Microfilm Number */
  $handler->display->display_options['fields']['field_mus_microfilm_number']['id'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['table'] = 'field_data_field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['field'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reel Number */
  $handler->display->display_options['fields']['field_mus_reel_number']['id'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['field'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['type'] = 'text_default';
  $handler->display->display_options['fields']['field_mus_reel_number']['delta_offset'] = '0';
  /* Field: Content: Reel Order/Enumeration */
  $handler->display->display_options['fields']['field_mus_reel_order_enumeration']['id'] = 'field_mus_reel_order_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_order_enumeration']['table'] = 'field_data_field_mus_reel_order_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_order_enumeration']['field'] = 'field_mus_reel_order_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_order_enumeration']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_mus_reel_order_enumeration']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_mus_reel_order_enumeration']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Microfilm Number (field_mus_microfilm_number) */
  $handler->display->display_options['sorts']['field_mus_microfilm_number_value']['id'] = 'field_mus_microfilm_number_value';
  $handler->display->display_options['sorts']['field_mus_microfilm_number_value']['table'] = 'field_data_field_mus_microfilm_number';
  $handler->display->display_options['sorts']['field_mus_microfilm_number_value']['field'] = 'field_mus_microfilm_number_value';
  /* Sort criterion: Content: Reel Number (field_mus_reel_number) */
  $handler->display->display_options['sorts']['field_mus_reel_number_value']['id'] = 'field_mus_reel_number_value';
  $handler->display->display_options['sorts']['field_mus_reel_number_value']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['sorts']['field_mus_reel_number_value']['field'] = 'field_mus_reel_number_value';
  /* Sort criterion: Content: Reel Order/Enumeration (field_mus_reel_order_enumeration) */
  $handler->display->display_options['sorts']['field_mus_reel_order_enumeration_value']['id'] = 'field_mus_reel_order_enumeration_value';
  $handler->display->display_options['sorts']['field_mus_reel_order_enumeration_value']['table'] = 'field_data_field_mus_reel_order_enumeration';
  $handler->display->display_options['sorts']['field_mus_reel_order_enumeration_value']['field'] = 'field_mus_reel_order_enumeration_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mus_mendel_microfilm' => 'mus_mendel_microfilm',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    25895 => '25895',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['tid']['group_info']['label'] = 'Collection Choice';
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['tid']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['tid']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Walker Collection',
      'operator' => 'or',
      'value' => array(
        25690 => '25690',
        25691 => '25691',
        25689 => '25689',
      ),
    ),
    2 => array(
      'title' => 'Walker Nielsen',
      'operator' => 'and',
      'value' => array(
        25691 => '25691',
      ),
    ),
    3 => array(
      'title' => 'Walker Opera Seria',
      'operator' => 'and',
      'value' => array(
        25689 => '25689',
      ),
    ),
    4 => array(
      'title' => 'Walker Contarini Collection',
      'operator' => 'and',
      'value' => array(
        25690 => '25690',
      ),
    ),
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'mus_mendel_collections';
  $handler->display->display_options['path'] = 'music/microfilm/walker_nielsen';

  /* Display: Mendel Walker Opera Seria Collection */
  $handler = $view->new_display('page', 'Mendel Walker Opera Seria Collection', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mendel Walker Opera Seria Microfilm Collection';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'field_mus_notes' => 'field_mus_notes',
    'field_mus_year' => 'field_mus_year',
    'field_mus_microfilm_number' => 'field_mus_microfilm_number',
    'field_mus_reel_number' => 'field_mus_reel_number',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_microfilm_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Sort information';
  $handler->display->display_options['header']['area']['content'] = 'Certain columns can be sorted by clicking on the header (Title, Composer, etc.). Clicking on a composer name will show all works for the composer across all Microfilm Special Collections.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'mus_mendel_microfilm_composers' => 'mus_mendel_microfilm_composers',
    'acquisition_material_type' => 0,
    'audiences' => 0,
    'database_keywords' => 0,
    'database_subjects' => 0,
    'departments' => 0,
    'division' => 0,
    'econlib_cbh_bank_name' => 0,
    'econlib_cbh_binding_freq' => 0,
    'econlib_cbh_color' => 0,
    'econlib_cbh_region' => 0,
    'econlib_cd_covers' => 0,
    'econ_lib_cdir_covers' => 0,
    'econlib_se_binding_colors' => 0,
    'econ_library_stock_exchange_holdings_binding_colors' => 0,
    'econlib_se_binding_frequency' => 0,
    'econ_library_stock_exchange_holdings_binding_frequency' => 0,
    'econlib_se_country' => 0,
    'econ_library_stock_exchange_holdings_country' => 0,
    'econlib_se_exchange' => 0,
    'econ_library_stock_exchange_holdings_exchange' => 0,
    'econlib_wp_publishers' => 0,
    'editing_groups' => 0,
    'lib_event_types' => 0,
    'faq_topics' => 0,
    'featured_pul_link_categories' => 0,
    'amenities' => 0,
    'pul_location_type' => 0,
    'mus_mendel_collections' => 0,
    'mus_mendel_microfilm_authors' => 0,
    'mus_mendel_microfilm_librettist' => 0,
    'mendel_periodical_location' => 0,
    'mus_sheet_music_arranger' => 0,
    'mus_sheetmusic_boxnumber' => 0,
    'mus_sheetmusic_composers' => 0,
    'mus_sheet_music_date' => 0,
    'mus_sheetmusic_instrumentation' => 0,
    'mus_sheet_music_lyricists' => 0,
    'mus_sheet_music_publisher' => 0,
    'news_events_categories' => 0,
    'newspaper_cities' => 0,
    'newspaper_countries' => 0,
    'newspaper_us_states' => 0,
    'princeton_library_blog_tags' => 0,
    'rare_book_subjects' => 0,
    'rare_books_authors' => 0,
    'subjects' => 0,
    'resource_types' => 0,
    'sales_catalog_auction_house' => 0,
    'sales_catalog_city' => 0,
    'section' => 0,
    'selector_departments' => 0,
    'selector_subject_areas' => 0,
    'pul_spotlight_tags' => 0,
    'tags' => 0,
    'unit' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Composer';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_mus_notes']['id'] = 'field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['table'] = 'field_data_field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['field'] = 'field_mus_notes';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_mus_year']['id'] = 'field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['table'] = 'field_data_field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['field'] = 'field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mus_year']['delta_offset'] = '0';
  /* Field: Content: Microfilm Number */
  $handler->display->display_options['fields']['field_mus_microfilm_number']['id'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['table'] = 'field_data_field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['field'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reel Number */
  $handler->display->display_options['fields']['field_mus_reel_number']['id'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['field'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['type'] = 'text_default';
  $handler->display->display_options['fields']['field_mus_reel_number']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Reel Number (field_mus_reel_number) */
  $handler->display->display_options['sorts']['field_mus_reel_number_value']['id'] = 'field_mus_reel_number_value';
  $handler->display->display_options['sorts']['field_mus_reel_number_value']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['sorts']['field_mus_reel_number_value']['field'] = 'field_mus_reel_number_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mus_mendel_microfilm' => 'mus_mendel_microfilm',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    25896 => '25896',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['tid']['group_info']['label'] = 'Collection Choice';
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['tid']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['tid']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Walker Collection',
      'operator' => 'or',
      'value' => array(
        25690 => '25690',
        25691 => '25691',
        25689 => '25689',
      ),
    ),
    2 => array(
      'title' => 'Walker Nielsen',
      'operator' => 'and',
      'value' => array(
        25691 => '25691',
      ),
    ),
    3 => array(
      'title' => 'Walker Opera Seria',
      'operator' => 'and',
      'value' => array(
        25689 => '25689',
      ),
    ),
    4 => array(
      'title' => 'Walker Contarini Collection',
      'operator' => 'and',
      'value' => array(
        25690 => '25690',
      ),
    ),
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'mus_mendel_collections';
  $handler->display->display_options['path'] = 'music/microfilm/walker_opera';

  /* Display: Mendel Walker Contarini Collection */
  $handler = $view->new_display('page', 'Mendel Walker Contarini Collection', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mendel Walker Contarini Microfilm Collection';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'field_mus_year' => 'field_mus_year',
    'field_mus_primary_catalog_no' => 'field_mus_primary_catalog_no',
    'field_mus_microfilm_number' => 'field_mus_microfilm_number',
    'field_mus_reel_number' => 'field_mus_reel_number',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_primary_catalog_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_microfilm_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'mus_mendel_microfilm_composers' => 'mus_mendel_microfilm_composers',
    'acquisition_material_type' => 0,
    'audiences' => 0,
    'database_keywords' => 0,
    'database_subjects' => 0,
    'departments' => 0,
    'division' => 0,
    'econlib_cbh_bank_name' => 0,
    'econlib_cbh_binding_freq' => 0,
    'econlib_cbh_color' => 0,
    'econlib_cbh_region' => 0,
    'econlib_cd_covers' => 0,
    'econ_lib_cdir_covers' => 0,
    'econlib_se_binding_colors' => 0,
    'econ_library_stock_exchange_holdings_binding_colors' => 0,
    'econlib_se_binding_frequency' => 0,
    'econ_library_stock_exchange_holdings_binding_frequency' => 0,
    'econlib_se_country' => 0,
    'econ_library_stock_exchange_holdings_country' => 0,
    'econlib_se_exchange' => 0,
    'econ_library_stock_exchange_holdings_exchange' => 0,
    'econlib_wp_publishers' => 0,
    'editing_groups' => 0,
    'lib_event_types' => 0,
    'faq_topics' => 0,
    'featured_pul_link_categories' => 0,
    'amenities' => 0,
    'pul_location_type' => 0,
    'mus_mendel_collections' => 0,
    'mus_mendel_microfilm_authors' => 0,
    'mus_mendel_microfilm_librettist' => 0,
    'mendel_periodical_location' => 0,
    'mus_sheet_music_arranger' => 0,
    'mus_sheetmusic_boxnumber' => 0,
    'mus_sheetmusic_composers' => 0,
    'mus_sheet_music_date' => 0,
    'mus_sheetmusic_instrumentation' => 0,
    'mus_sheet_music_lyricists' => 0,
    'mus_sheet_music_publisher' => 0,
    'news_events_categories' => 0,
    'newspaper_cities' => 0,
    'newspaper_countries' => 0,
    'newspaper_us_states' => 0,
    'princeton_library_blog_tags' => 0,
    'rare_book_subjects' => 0,
    'rare_books_authors' => 0,
    'subjects' => 0,
    'resource_types' => 0,
    'sales_catalog_auction_house' => 0,
    'sales_catalog_city' => 0,
    'section' => 0,
    'selector_departments' => 0,
    'selector_subject_areas' => 0,
    'pul_spotlight_tags' => 0,
    'tags' => 0,
    'unit' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Composer';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_mus_year']['id'] = 'field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['table'] = 'field_data_field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['field'] = 'field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mus_year']['delta_offset'] = '0';
  /* Field: Content: Primary Catalog Number */
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['id'] = 'field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['table'] = 'field_data_field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['field'] = 'field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['label'] = 'Biblioteca Marciana Catalog Number';
  /* Field: Content: Microfilm Number */
  $handler->display->display_options['fields']['field_mus_microfilm_number']['id'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['table'] = 'field_data_field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['field'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reel Number */
  $handler->display->display_options['fields']['field_mus_reel_number']['id'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['field'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['type'] = 'text_default';
  $handler->display->display_options['fields']['field_mus_reel_number']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mus_mendel_microfilm' => 'mus_mendel_microfilm',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    25894 => '25894',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['tid']['group_info']['label'] = 'Collection Choice';
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['tid']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['tid']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Walker Collection',
      'operator' => 'or',
      'value' => array(
        25690 => '25690',
        25691 => '25691',
        25689 => '25689',
      ),
    ),
    2 => array(
      'title' => 'Walker Nielsen',
      'operator' => 'and',
      'value' => array(
        25691 => '25691',
      ),
    ),
    3 => array(
      'title' => 'Walker Opera Seria',
      'operator' => 'and',
      'value' => array(
        25689 => '25689',
      ),
    ),
    4 => array(
      'title' => 'Walker Contarini Collection',
      'operator' => 'and',
      'value' => array(
        25690 => '25690',
      ),
    ),
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'mus_mendel_collections';
  $handler->display->display_options['path'] = 'music/microfilm/walker_contarini';

  /* Display: Mendel Scheide Bach Manuscript Archive Microfilm Collection */
  $handler = $view->new_display('page', 'Mendel Scheide Bach Manuscript Archive Microfilm Collection', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Scheide Bach Manuscript Archive';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_mus_scheide_occasion' => 'field_mus_scheide_occasion',
    'field_mus_primary_catalog_no' => 'field_mus_primary_catalog_no',
    'field_mus_secondary_catalog_no' => 'field_mus_secondary_catalog_no',
    'field_mus_micro_snm' => 'field_mus_micro_snm',
    'field_mus_microfilm_number' => 'field_mus_microfilm_number',
    'field_mus_reel_number' => 'field_mus_reel_number',
    'field_mus_reel_name_enumeration' => 'field_mus_reel_name_enumeration',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_scheide_occasion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_primary_catalog_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_secondary_catalog_no' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_micro_snm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_microfilm_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_name_enumeration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Occasion */
  $handler->display->display_options['fields']['field_mus_scheide_occasion']['id'] = 'field_mus_scheide_occasion';
  $handler->display->display_options['fields']['field_mus_scheide_occasion']['table'] = 'field_data_field_mus_scheide_occasion';
  $handler->display->display_options['fields']['field_mus_scheide_occasion']['field'] = 'field_mus_scheide_occasion';
  /* Field: Content: Primary Catalog Number */
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['id'] = 'field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['table'] = 'field_data_field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['field'] = 'field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['label'] = 'BWV';
  /* Field: Content: Secondary Catalog Number */
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['id'] = 'field_mus_secondary_catalog_no';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['table'] = 'field_data_field_mus_secondary_catalog_no';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['field'] = 'field_mus_secondary_catalog_no';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['label'] = 'BC';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['delta_offset'] = '0';
  /* Field: Content: Shelfmark/Number */
  $handler->display->display_options['fields']['field_mus_micro_snm']['id'] = 'field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['table'] = 'field_data_field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['field'] = 'field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['label'] = 'Shelfmark';
  $handler->display->display_options['fields']['field_mus_micro_snm']['delta_offset'] = '0';
  /* Field: Content: Microfilm Number */
  $handler->display->display_options['fields']['field_mus_microfilm_number']['id'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['table'] = 'field_data_field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['field'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reel Number */
  $handler->display->display_options['fields']['field_mus_reel_number']['id'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['field'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['type'] = 'text_default';
  $handler->display->display_options['fields']['field_mus_reel_number']['delta_offset'] = '0';
  /* Field: Content: Reel Name (not order or enumeration) */
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['id'] = 'field_mus_reel_name_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['table'] = 'field_data_field_mus_reel_name_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['field'] = 'field_mus_reel_name_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['label'] = 'Reel Name';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['separator'] = '/';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mus_mendel_microfilm' => 'mus_mendel_microfilm',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    25889 => '25889',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['tid']['group_info']['label'] = 'Collection Choice';
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['tid']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['tid']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Walker Collection',
      'operator' => 'or',
      'value' => array(
        25690 => '25690',
        25691 => '25691',
        25689 => '25689',
      ),
    ),
    2 => array(
      'title' => 'Walker Nielsen',
      'operator' => 'and',
      'value' => array(
        25691 => '25691',
      ),
    ),
    3 => array(
      'title' => 'Walker Opera Seria',
      'operator' => 'and',
      'value' => array(
        25689 => '25689',
      ),
    ),
    4 => array(
      'title' => 'Walker Contarini Collection',
      'operator' => 'and',
      'value' => array(
        25690 => '25690',
      ),
    ),
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'mus_mendel_collections';
  $handler->display->display_options['path'] = 'music/microfilm/sbma';

  /* Display: Mendel Scheide Bach MPA Microfilm Collection */
  $handler = $view->new_display('page', 'Mendel Scheide Bach MPA Microfilm Collection', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Scheide Bach Manuscript Photo Archive';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_mus_scheide_occasion' => 'field_mus_scheide_occasion',
    'field_mus_primary_catalog_no' => 'field_mus_primary_catalog_no',
    'field_mus_secondary_catalog_no' => 'field_mus_secondary_catalog_no',
    'field_mus_micro_snm' => 'field_mus_micro_snm',
    'field_mus_microfilm_number' => 'field_mus_microfilm_number',
    'field_mus_reel_number' => 'field_mus_reel_number',
    'field_mus_reel_name_enumeration' => 'field_mus_reel_name_enumeration',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_scheide_occasion' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_primary_catalog_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_secondary_catalog_no' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_micro_snm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_microfilm_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_name_enumeration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['empty'] = 'Unknown';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Occasion */
  $handler->display->display_options['fields']['field_mus_scheide_occasion']['id'] = 'field_mus_scheide_occasion';
  $handler->display->display_options['fields']['field_mus_scheide_occasion']['table'] = 'field_data_field_mus_scheide_occasion';
  $handler->display->display_options['fields']['field_mus_scheide_occasion']['field'] = 'field_mus_scheide_occasion';
  /* Field: Content: Primary Catalog Number */
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['id'] = 'field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['table'] = 'field_data_field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['field'] = 'field_mus_primary_catalog_no';
  $handler->display->display_options['fields']['field_mus_primary_catalog_no']['label'] = 'BWV';
  /* Field: Content: Secondary Catalog Number */
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['id'] = 'field_mus_secondary_catalog_no';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['table'] = 'field_data_field_mus_secondary_catalog_no';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['field'] = 'field_mus_secondary_catalog_no';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['label'] = 'BC';
  $handler->display->display_options['fields']['field_mus_secondary_catalog_no']['delta_offset'] = '0';
  /* Field: Content: Shelfmark/Number */
  $handler->display->display_options['fields']['field_mus_micro_snm']['id'] = 'field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['table'] = 'field_data_field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['field'] = 'field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['label'] = 'Shelfmark';
  $handler->display->display_options['fields']['field_mus_micro_snm']['delta_offset'] = '0';
  /* Field: Content: Microfilm Number */
  $handler->display->display_options['fields']['field_mus_microfilm_number']['id'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['table'] = 'field_data_field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['field'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reel Number */
  $handler->display->display_options['fields']['field_mus_reel_number']['id'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['field'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['type'] = 'text_default';
  $handler->display->display_options['fields']['field_mus_reel_number']['delta_offset'] = '0';
  /* Field: Content: Reel Name (not order or enumeration) */
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['id'] = 'field_mus_reel_name_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['table'] = 'field_data_field_mus_reel_name_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['field'] = 'field_mus_reel_name_enumeration';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['label'] = 'Reel Name';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mus_reel_name_enumeration']['separator'] = '/';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mus_mendel_microfilm' => 'mus_mendel_microfilm',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    25890 => '25890',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['tid']['group_info']['label'] = 'Collection Choice';
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['tid']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['tid']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Walker Collection',
      'operator' => 'or',
      'value' => array(
        25690 => '25690',
        25691 => '25691',
        25689 => '25689',
      ),
    ),
    2 => array(
      'title' => 'Walker Nielsen',
      'operator' => 'and',
      'value' => array(
        25691 => '25691',
      ),
    ),
    3 => array(
      'title' => 'Walker Opera Seria',
      'operator' => 'and',
      'value' => array(
        25689 => '25689',
      ),
    ),
    4 => array(
      'title' => 'Walker Contarini Collection',
      'operator' => 'and',
      'value' => array(
        25690 => '25690',
      ),
    ),
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'mus_mendel_collections';
  $handler->display->display_options['path'] = 'music/microfilm/sbmpa';

  /* Display: Mendel Levy Chant Microfilm Collection */
  $handler = $view->new_display('page', 'Mendel Levy Chant Microfilm Collection', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Levy Chant Microfilm Collection';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_mus_levy_century' => 'field_mus_levy_century',
    'field_mus_levy_country' => 'field_mus_levy_country',
    'field_mus_levy_cityregion' => 'field_mus_levy_cityregion',
    'field_mus_holding_library' => 'field_mus_holding_library',
    'field_mus_micro_snm' => 'field_mus_micro_snm',
    'field_mus_levy_calendar' => 'field_mus_levy_calendar',
    'field_mus_levy_folio' => 'field_mus_levy_folio',
    'field_mus_microfilm_number' => 'field_mus_microfilm_number',
    'field_mus_reel_number' => 'field_mus_reel_number',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_levy_century' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_levy_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_levy_cityregion' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_holding_library' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_micro_snm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_levy_calendar' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_levy_folio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_microfilm_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Manuscript Type';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['empty'] = 'Unknown';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Century */
  $handler->display->display_options['fields']['field_mus_levy_century']['id'] = 'field_mus_levy_century';
  $handler->display->display_options['fields']['field_mus_levy_century']['table'] = 'field_data_field_mus_levy_century';
  $handler->display->display_options['fields']['field_mus_levy_century']['field'] = 'field_mus_levy_century';
  $handler->display->display_options['fields']['field_mus_levy_century']['delta_offset'] = '0';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_mus_levy_country']['id'] = 'field_mus_levy_country';
  $handler->display->display_options['fields']['field_mus_levy_country']['table'] = 'field_data_field_mus_levy_country';
  $handler->display->display_options['fields']['field_mus_levy_country']['field'] = 'field_mus_levy_country';
  /* Field: Content: City/Region */
  $handler->display->display_options['fields']['field_mus_levy_cityregion']['id'] = 'field_mus_levy_cityregion';
  $handler->display->display_options['fields']['field_mus_levy_cityregion']['table'] = 'field_data_field_mus_levy_cityregion';
  $handler->display->display_options['fields']['field_mus_levy_cityregion']['field'] = 'field_mus_levy_cityregion';
  /* Field: Content: Holding Library */
  $handler->display->display_options['fields']['field_mus_holding_library']['id'] = 'field_mus_holding_library';
  $handler->display->display_options['fields']['field_mus_holding_library']['table'] = 'field_data_field_mus_holding_library';
  $handler->display->display_options['fields']['field_mus_holding_library']['field'] = 'field_mus_holding_library';
  /* Field: Content: Shelfmark/Number */
  $handler->display->display_options['fields']['field_mus_micro_snm']['id'] = 'field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['table'] = 'field_data_field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['field'] = 'field_mus_micro_snm';
  $handler->display->display_options['fields']['field_mus_micro_snm']['label'] = 'Shelf Number';
  $handler->display->display_options['fields']['field_mus_micro_snm']['delta_offset'] = '0';
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_mus_levy_calendar']['id'] = 'field_mus_levy_calendar';
  $handler->display->display_options['fields']['field_mus_levy_calendar']['table'] = 'field_data_field_mus_levy_calendar';
  $handler->display->display_options['fields']['field_mus_levy_calendar']['field'] = 'field_mus_levy_calendar';
  $handler->display->display_options['fields']['field_mus_levy_calendar']['delta_offset'] = '0';
  /* Field: Content: Folio */
  $handler->display->display_options['fields']['field_mus_levy_folio']['id'] = 'field_mus_levy_folio';
  $handler->display->display_options['fields']['field_mus_levy_folio']['table'] = 'field_data_field_mus_levy_folio';
  $handler->display->display_options['fields']['field_mus_levy_folio']['field'] = 'field_mus_levy_folio';
  /* Field: Content: Microfilm Number */
  $handler->display->display_options['fields']['field_mus_microfilm_number']['id'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['table'] = 'field_data_field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['field'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reel Number */
  $handler->display->display_options['fields']['field_mus_reel_number']['id'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['field'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['empty'] = 'missing';
  $handler->display->display_options['fields']['field_mus_reel_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Manuscript type';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mus_mendel_microfilm' => 'mus_mendel_microfilm',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    25898 => '25898',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['tid']['group_info']['label'] = 'Collection Choice';
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['tid']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['tid']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Walker Collection',
      'operator' => 'or',
      'value' => array(
        25690 => '25690',
        25691 => '25691',
        25689 => '25689',
      ),
    ),
    2 => array(
      'title' => 'Walker Nielsen',
      'operator' => 'and',
      'value' => array(
        25691 => '25691',
      ),
    ),
    3 => array(
      'title' => 'Walker Opera Seria',
      'operator' => 'and',
      'value' => array(
        25689 => '25689',
      ),
    ),
    4 => array(
      'title' => 'Walker Contarini Collection',
      'operator' => 'and',
      'value' => array(
        25690 => '25690',
      ),
    ),
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'mus_mendel_collections';
  $handler->display->display_options['path'] = 'music/microfilm/levychant';

  /* Display: Mendel Misc. Handel Microfilm Collection */
  $handler = $view->new_display('page', 'Mendel Misc. Handel Microfilm Collection', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mendel Music Library J. Merrill Knapp Miscellaneous Handel Microfilm Collection';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_mus_year' => 'field_mus_year',
    'field_mus_description' => 'field_mus_description',
    'field_mus_notes' => 'field_mus_notes',
    'field_mus_holding_library' => 'field_mus_holding_library',
    'field_mus_microfilm_number' => 'field_mus_microfilm_number',
    'field_mus_reel_number' => 'field_mus_reel_number',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_holding_library' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_microfilm_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_reel_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['empty'] = 'Unknown';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_mus_year']['id'] = 'field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['table'] = 'field_data_field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['field'] = 'field_mus_year';
  $handler->display->display_options['fields']['field_mus_year']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mus_year']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_mus_description']['id'] = 'field_mus_description';
  $handler->display->display_options['fields']['field_mus_description']['table'] = 'field_data_field_mus_description';
  $handler->display->display_options['fields']['field_mus_description']['field'] = 'field_mus_description';
  $handler->display->display_options['fields']['field_mus_description']['hide_empty'] = TRUE;
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_mus_notes']['id'] = 'field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['table'] = 'field_data_field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['field'] = 'field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['hide_empty'] = TRUE;
  /* Field: Content: Holding Library */
  $handler->display->display_options['fields']['field_mus_holding_library']['id'] = 'field_mus_holding_library';
  $handler->display->display_options['fields']['field_mus_holding_library']['table'] = 'field_data_field_mus_holding_library';
  $handler->display->display_options['fields']['field_mus_holding_library']['field'] = 'field_mus_holding_library';
  $handler->display->display_options['fields']['field_mus_holding_library']['hide_empty'] = TRUE;
  /* Field: Content: Microfilm Number */
  $handler->display->display_options['fields']['field_mus_microfilm_number']['id'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['table'] = 'field_data_field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['field'] = 'field_mus_microfilm_number';
  $handler->display->display_options['fields']['field_mus_microfilm_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reel Number */
  $handler->display->display_options['fields']['field_mus_reel_number']['id'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['field'] = 'field_mus_reel_number';
  $handler->display->display_options['fields']['field_mus_reel_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Manuscript type';
  /* Sort criterion: Content: Reel Number (field_mus_reel_number) */
  $handler->display->display_options['sorts']['field_mus_reel_number_value']['id'] = 'field_mus_reel_number_value';
  $handler->display->display_options['sorts']['field_mus_reel_number_value']['table'] = 'field_data_field_mus_reel_number';
  $handler->display->display_options['sorts']['field_mus_reel_number_value']['field'] = 'field_mus_reel_number_value';
  /* Sort criterion: Content: Reel Order/Enumeration (field_mus_reel_order_enumeration) */
  $handler->display->display_options['sorts']['field_mus_reel_order_enumeration_value']['id'] = 'field_mus_reel_order_enumeration_value';
  $handler->display->display_options['sorts']['field_mus_reel_order_enumeration_value']['table'] = 'field_data_field_mus_reel_order_enumeration';
  $handler->display->display_options['sorts']['field_mus_reel_order_enumeration_value']['field'] = 'field_mus_reel_order_enumeration_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mus_mendel_microfilm' => 'mus_mendel_microfilm',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    25897 => '25897',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['tid']['group_info']['label'] = 'Collection Choice';
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['tid']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['tid']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Walker Collection',
      'operator' => 'or',
      'value' => array(
        25690 => '25690',
        25691 => '25691',
        25689 => '25689',
      ),
    ),
    2 => array(
      'title' => 'Walker Nielsen',
      'operator' => 'and',
      'value' => array(
        25691 => '25691',
      ),
    ),
    3 => array(
      'title' => 'Walker Opera Seria',
      'operator' => 'and',
      'value' => array(
        25689 => '25689',
      ),
    ),
    4 => array(
      'title' => 'Walker Contarini Collection',
      'operator' => 'and',
      'value' => array(
        25690 => '25690',
      ),
    ),
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'mus_mendel_collections';
  $handler->display->display_options['path'] = 'music/microfilm/mischandel';

  /* Display: Uncatalogued Microfilm */
  $handler = $view->new_display('page', 'Uncatalogued Microfilm', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Uncatalogued Microfilm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_mus_uncat_title' => 'field_mus_uncat_title',
    'title' => 'title',
    'field_mus_barcode' => 'field_mus_barcode',
    'field_mus_description' => 'field_mus_description',
    'field_mus_uncat_composer' => 'field_mus_uncat_composer',
    'field_mus_notes' => 'field_mus_notes',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_mus_uncat_title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_mus_uncat_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_barcode' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_uncat_composer' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mus_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Barcode */
  $handler->display->display_options['fields']['field_mus_barcode']['id'] = 'field_mus_barcode';
  $handler->display->display_options['fields']['field_mus_barcode']['table'] = 'field_data_field_mus_barcode';
  $handler->display->display_options['fields']['field_mus_barcode']['field'] = 'field_mus_barcode';
  $handler->display->display_options['fields']['field_mus_barcode']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_mus_description']['id'] = 'field_mus_description';
  $handler->display->display_options['fields']['field_mus_description']['table'] = 'field_data_field_mus_description';
  $handler->display->display_options['fields']['field_mus_description']['field'] = 'field_mus_description';
  /* Field: Content: Uncataloged Composer etc */
  $handler->display->display_options['fields']['field_mus_uncat_composer']['id'] = 'field_mus_uncat_composer';
  $handler->display->display_options['fields']['field_mus_uncat_composer']['table'] = 'field_data_field_mus_uncat_composer';
  $handler->display->display_options['fields']['field_mus_uncat_composer']['field'] = 'field_mus_uncat_composer';
  $handler->display->display_options['fields']['field_mus_uncat_composer']['delta_offset'] = '0';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_mus_notes']['id'] = 'field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['table'] = 'field_data_field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['field'] = 'field_mus_notes';
  $handler->display->display_options['fields']['field_mus_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mus_mendel_microfilm' => 'mus_mendel_microfilm',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    25891 => '25891',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['tid']['group_info']['label'] = 'Collection Choice';
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['tid']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['tid']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Walker Collection',
      'operator' => 'or',
      'value' => array(
        25690 => '25690',
        25691 => '25691',
        25689 => '25689',
      ),
    ),
    2 => array(
      'title' => 'Walker Nielsen',
      'operator' => 'and',
      'value' => array(
        25691 => '25691',
      ),
    ),
    3 => array(
      'title' => 'Walker Opera Seria',
      'operator' => 'and',
      'value' => array(
        25689 => '25689',
      ),
    ),
    4 => array(
      'title' => 'Walker Contarini Collection',
      'operator' => 'and',
      'value' => array(
        25690 => '25690',
      ),
    ),
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'mus_mendel_collections';
  $handler->display->display_options['path'] = 'music/microfilm/uncatalogued';
  $export['mendel_microfilm'] = $view;

  return $export;
}
