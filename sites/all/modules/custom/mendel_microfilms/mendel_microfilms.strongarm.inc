<?php
/**
 * @file
 * mendel_microfilms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mendel_microfilms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_mus_mendel_microfilm';
  $strongarm->value = '0';
  $export['comment_anonymous_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_mus_mendel_microfilm';
  $strongarm->value = 1;
  $export['comment_default_mode_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_mus_mendel_microfilm';
  $strongarm->value = '50';
  $export['comment_default_per_page_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_mus_mendel_microfilm';
  $strongarm->value = 1;
  $export['comment_form_location_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_mus_mendel_microfilm';
  $strongarm->value = '1';
  $export['comment_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_mus_mendel_microfilm';
  $strongarm->value = '1';
  $export['comment_preview_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_mus_mendel_microfilm';
  $strongarm->value = 1;
  $export['comment_subject_field_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_mus_mendel_microfilm';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_mus_mendel_microfilm';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_mus_mendel_microfilm';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__mus_mendel_microfilm';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_mus_mendel_microfilm';
  $strongarm->value = array();
  $export['menu_options_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_mus_mendel_microfilm';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_mus_mendel_microfilm';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_mus_mendel_microfilm';
  $strongarm->value = '1';
  $export['node_preview_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_mus_mendel_microfilm';
  $strongarm->value = 0;
  $export['node_submitted_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_mus_mendel_microfilm';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_mus_mendel_microfilm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_mendel_collections';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_mendel_collections'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_mendel_microfilm_authors';
  $strongarm->value = array(
    'entity' => 'taxonomy_term',
    'bundle' => 'mendel_microfilm_authors',
    'info' => array(
      'label' => 'Mendel Microfilm Authors',
      'admin' => array(
        'path' => 'admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/edit',
        'real path' => 'admin/structure/taxonomy/mendel_microfilm_authors/edit',
        'bundle argument' => 3,
        'access arguments' => array(
          0 => 'administer taxonomy',
        ),
      ),
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:Concept',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'rdfs:label',
            1 => 'skos:prefLabel',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'skos:definition',
          ),
        ),
        'vid' => array(
          'predicates' => array(
            0 => 'skos:inScheme',
          ),
          'type' => 'rel',
        ),
        'parent' => array(
          'predicates' => array(
            0 => 'skos:broader',
          ),
          'type' => 'rel',
        ),
      ),
      'xmlsitemap' => array(
        'entity' => 'taxonomy_term',
        'bundle' => 'mendel_microfilm_authors',
        'status' => '0',
        'priority' => '0.5',
      ),
    ),
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_mendel_microfilm_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_mendel_microfilm_composers';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_mendel_microfilm_composers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_mendel_microfilm_librettist';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_mendel_microfilm_librettist'] = $strongarm;

  return $export;
}
