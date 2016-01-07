<?php
/**
 * @file
 * ca_adv_staff.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_adv_staff_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_staff_l_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member Grid 1 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-1 ca-adv-staff-member-list-1-square',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '64218529-c1f1-45b3-8b39-2529c9edffb1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-53074e37-5917-42dd-9b27-c713e04ad016';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_member_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '53074e37-5917-42dd-9b27-c713e04ad016';
    $display->content['new-53074e37-5917-42dd-9b27-c713e04ad016'] = $pane;
    $display->panels['middle'][0] = 'new-53074e37-5917-42dd-9b27-c713e04ad016';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_staff_l_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_staff_l_node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member Grid 1 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_one',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-1 ca-adv-staff-member-list-1-portrait',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '32a9a8ed-6801-4800-a7e1-c7d6d191785f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc2fe39a-e3cf-4586-a40d-183879a62191';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_portrait-staff_member_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc2fe39a-e3cf-4586-a40d-183879a62191';
    $display->content['new-dc2fe39a-e3cf-4586-a40d-183879a62191'] = $pane;
    $display->panels['middle'][0] = 'new-dc2fe39a-e3cf-4586-a40d-183879a62191';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_staff_l_node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_staff_l_node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member List View 2 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_two',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-2 ca-adv-staff-member-list-2-square',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8adca3e4-3993-49a4-811f-909189f7279c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b1a6fe0e-aac9-4ba1-b4fc-17ceb7b7ebfe';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_member_list_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1a6fe0e-aac9-4ba1-b4fc-17ceb7b7ebfe';
    $display->content['new-b1a6fe0e-aac9-4ba1-b4fc-17ceb7b7ebfe'] = $pane;
    $display->panels['middle'][0] = 'new-b1a6fe0e-aac9-4ba1-b4fc-17ceb7b7ebfe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_staff_l_node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_staff_l_node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member List View 2 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_two',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-2 ca-adv-staff-member-list-2-portrait',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f33065a4-ee08-4a55-9e2f-0c2a6bbfcc76';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a3c83ab4-0267-4deb-b2fd-9c6c0c20ccb7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_portrait-staff_member_list_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3c83ab4-0267-4deb-b2fd-9c6c0c20ccb7';
    $display->content['new-a3c83ab4-0267-4deb-b2fd-9c6c0c20ccb7'] = $pane;
    $display->panels['middle'][0] = 'new-a3c83ab4-0267-4deb-b2fd-9c6c0c20ccb7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_staff_l_node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_staff_n_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member Node View 1 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_member' => 'adv_staff_member',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_node_template',
          'settings' => array(
            'ca_adv_staff_node_template' => 'ca_adv_staff_node_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-node ca-adv-staff-member-node-1 ca-adv-staff-member-node-1-square',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7dcf0971-3048-4f78-bfe5-e263dbcbfd26';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dbf10557-9d21-46a2-819f-4796bc3fd9d6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_node-ca_staff_node_1_square';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dbf10557-9d21-46a2-819f-4796bc3fd9d6';
    $display->content['new-dbf10557-9d21-46a2-819f-4796bc3fd9d6'] = $pane;
    $display->panels['middle'][0] = 'new-dbf10557-9d21-46a2-819f-4796bc3fd9d6';
    $pane = new stdClass();
    $pane->pid = 'new-089efd61-602e-4294-82d9-bb8d476eb76c';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '089efd61-602e-4294-82d9-bb8d476eb76c';
    $display->content['new-089efd61-602e-4294-82d9-bb8d476eb76c'] = $pane;
    $display->panels['middle'][1] = 'new-089efd61-602e-4294-82d9-bb8d476eb76c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_staff_n_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_staff_n_node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member Node View Template 1 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_member' => 'adv_staff_member',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-node ca-adv-staff-member-node-1 ca-adv-staff-member-node-1-portrait',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3add1555-8fd7-4e00-a9c7-b6793c8dcc00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_node-ca_staff_node_1_portrait';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a';
    $display->content['new-2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a'] = $pane;
    $display->panels['middle'][0] = 'new-2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a';
    $pane = new stdClass();
    $pane->pid = 'new-cf288c24-c97c-441c-a1e8-03b74bff76fe';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf288c24-c97c-441c-a1e8-03b74bff76fe';
    $display->content['new-cf288c24-c97c-441c-a1e8-03b74bff76fe'] = $pane;
    $display->panels['middle'][1] = 'new-cf288c24-c97c-441c-a1e8-03b74bff76fe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_staff_n_node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_staff_n_node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member List Flex View 1 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-flex ca-adv-staff-member-flex-1 ca-adv-staff-member-flex-1-square',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '64218529-c1f1-45b3-8b39-2529c9edffb1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67b4f13b-74c2-4a12-9d8e-08ff5e5d3a39';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_member_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67b4f13b-74c2-4a12-9d8e-08ff5e5d3a39';
    $display->content['new-67b4f13b-74c2-4a12-9d8e-08ff5e5d3a39'] = $pane;
    $display->panels['middle'][0] = 'new-67b4f13b-74c2-4a12-9d8e-08ff5e5d3a39';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_staff_n_node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_staff_n_node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member List Flex View 1 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-flex ca-adv-staff-member-flex-1 ca-adv-staff-member-flex-1-portrait',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '32a9a8ed-6801-4800-a7e1-c7d6d191785f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b27a3cbe-ca32-4547-be21-e01cac5eb27e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_member_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b27a3cbe-ca32-4547-be21-e01cac5eb27e';
    $display->content['new-b27a3cbe-ca32-4547-be21-e01cac5eb27e'] = $pane;
    $display->panels['middle'][0] = 'new-b27a3cbe-ca32-4547-be21-e01cac5eb27e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_staff_n_node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__aurora-ca-adv-staff-member-grid-1-portrait';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora CA Adv Staff: Member Grid 1 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_one',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-1 ca-adv-staff-member-list-1-portrait',
    'name' => 'aurora-ca-adv-staff-member-grid-1-portrait',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '32a9a8ed-6801-4800-a7e1-c7d6d191785f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc2fe39a-e3cf-4586-a40d-183879a62191';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_portrait-staff_member_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc2fe39a-e3cf-4586-a40d-183879a62191';
    $display->content['new-dc2fe39a-e3cf-4586-a40d-183879a62191'] = $pane;
    $display->panels['middle'][0] = 'new-dc2fe39a-e3cf-4586-a40d-183879a62191';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__aurora-ca-adv-staff-member-grid-1-portrait'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__aurora-ca-adv-staff-member-grid-1-square';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora CA Adv Staff: Member Grid 1 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_member' => 'adv_staff_member',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-node ca-adv-staff-member-node-1 ca-adv-staff-member-node-1-portrait',
    'name' => 'aurora-ca-adv-staff-member-grid-1-square',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3add1555-8fd7-4e00-a9c7-b6793c8dcc00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_node-ca_staff_node_1_portrait';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a';
    $display->content['new-2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a'] = $pane;
    $display->panels['middle'][0] = 'new-2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a';
    $pane = new stdClass();
    $pane->pid = 'new-cf288c24-c97c-441c-a1e8-03b74bff76fe';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf288c24-c97c-441c-a1e8-03b74bff76fe';
    $display->content['new-cf288c24-c97c-441c-a1e8-03b74bff76fe'] = $pane;
    $display->panels['middle'][1] = 'new-cf288c24-c97c-441c-a1e8-03b74bff76fe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__aurora-ca-adv-staff-member-grid-1-square'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__aurora-ca-adv-staff-member-list-flex-view-1-portrait';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Aurora CA Adv Staff: Member List Flex View 1 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-flex ca-adv-staff-member-flex-1 ca-adv-staff-member-flex-1-portrait',
    'name' => 'aurora-ca-adv-staff-member-list-flex-view-1-portrait',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '32a9a8ed-6801-4800-a7e1-c7d6d191785f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b27a3cbe-ca32-4547-be21-e01cac5eb27e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_member_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b27a3cbe-ca32-4547-be21-e01cac5eb27e';
    $display->content['new-b27a3cbe-ca32-4547-be21-e01cac5eb27e'] = $pane;
    $display->panels['middle'][0] = 'new-b27a3cbe-ca32-4547-be21-e01cac5eb27e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__aurora-ca-adv-staff-member-list-flex-view-1-portrait'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__aurora-ca-adv-staff-member-list-flex-view-1-square';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Aurora CA Adv Staff: Member List Flex View 1 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-flex ca-adv-staff-member-flex-1 ca-adv-staff-member-flex-1-square',
    'name' => 'aurora-ca-adv-staff-member-list-flex-view-1-square',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '64218529-c1f1-45b3-8b39-2529c9edffb1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67b4f13b-74c2-4a12-9d8e-08ff5e5d3a39';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_member_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67b4f13b-74c2-4a12-9d8e-08ff5e5d3a39';
    $display->content['new-67b4f13b-74c2-4a12-9d8e-08ff5e5d3a39'] = $pane;
    $display->panels['middle'][0] = 'new-67b4f13b-74c2-4a12-9d8e-08ff5e5d3a39';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__aurora-ca-adv-staff-member-list-flex-view-1-square'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__aurora-ca-adv-staff-member-list-view-2-portrait';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Aurora CA Adv Staff: Member List View 2 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_two',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-2 ca-adv-staff-member-list-2-portrait',
    'name' => 'aurora-ca-adv-staff-member-list-view-2-portrait',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f33065a4-ee08-4a55-9e2f-0c2a6bbfcc76';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a3c83ab4-0267-4deb-b2fd-9c6c0c20ccb7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_portrait-staff_member_list_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3c83ab4-0267-4deb-b2fd-9c6c0c20ccb7';
    $display->content['new-a3c83ab4-0267-4deb-b2fd-9c6c0c20ccb7'] = $pane;
    $display->panels['middle'][0] = 'new-a3c83ab4-0267-4deb-b2fd-9c6c0c20ccb7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__aurora-ca-adv-staff-member-list-view-2-portrait'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__aurora-ca-adv-staff-member-list-view-2-square';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Aurora CA Adv Staff: Member List View 2 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_categories' => 'adv_staff_categories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_m_list_template',
          'settings' => array(
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_two',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-2 ca-adv-staff-member-list-2-square',
    'name' => 'aurora-ca-adv-staff-member-list-view-2-square',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8adca3e4-3993-49a4-811f-909189f7279c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b1a6fe0e-aac9-4ba1-b4fc-17ceb7b7ebfe';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_member_list_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1a6fe0e-aac9-4ba1-b4fc-17ceb7b7ebfe';
    $display->content['new-b1a6fe0e-aac9-4ba1-b4fc-17ceb7b7ebfe'] = $pane;
    $display->panels['middle'][0] = 'new-b1a6fe0e-aac9-4ba1-b4fc-17ceb7b7ebfe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__aurora-ca-adv-staff-member-list-view-2-square'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__aurora-ca-adv-staff-member-node-view-1-square';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Aurora CA Adv Staff: Member Node View 1 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_member' => 'adv_staff_member',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_node_template',
          'settings' => array(
            'ca_adv_staff_node_template' => 'ca_adv_staff_node_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-node ca-adv-staff-member-node-1 ca-adv-staff-member-node-1-square',
    'name' => 'aurora-ca-adv-staff-member-node-view-1-square',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7dcf0971-3048-4f78-bfe5-e263dbcbfd26';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dbf10557-9d21-46a2-819f-4796bc3fd9d6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_node-ca_staff_node_1_square';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dbf10557-9d21-46a2-819f-4796bc3fd9d6';
    $display->content['new-dbf10557-9d21-46a2-819f-4796bc3fd9d6'] = $pane;
    $display->panels['middle'][0] = 'new-dbf10557-9d21-46a2-819f-4796bc3fd9d6';
    $pane = new stdClass();
    $pane->pid = 'new-089efd61-602e-4294-82d9-bb8d476eb76c';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '089efd61-602e-4294-82d9-bb8d476eb76c';
    $display->content['new-089efd61-602e-4294-82d9-bb8d476eb76c'] = $pane;
    $display->panels['middle'][1] = 'new-089efd61-602e-4294-82d9-bb8d476eb76c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__aurora-ca-adv-staff-member-node-view-1-square'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__aurora-ca-adv-staff-member-node-view-template-1-portrait';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Aurora CA Adv Staff: Member Node View Template 1 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'adv_staff_member' => 'adv_staff_member',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-node ca-adv-staff-member-node-1 ca-adv-staff-member-node-1-portrait',
    'name' => 'aurora-ca-adv-staff-member-node-view-template-1-portrait',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3add1555-8fd7-4e00-a9c7-b6793c8dcc00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_node-ca_staff_node_1_portrait';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a';
    $display->content['new-2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a'] = $pane;
    $display->panels['middle'][0] = 'new-2c28a520-0c3d-46b5-9ec0-d2f6edfe5b2a';
    $pane = new stdClass();
    $pane->pid = 'new-cf288c24-c97c-441c-a1e8-03b74bff76fe';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf288c24-c97c-441c-a1e8-03b74bff76fe';
    $display->content['new-cf288c24-c97c-441c-a1e8-03b74bff76fe'] = $pane;
    $display->panels['middle'][1] = 'new-cf288c24-c97c-441c-a1e8-03b74bff76fe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__aurora-ca-adv-staff-member-node-view-template-1-portrait'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_adv_staff_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_staff_add_category';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Staff Admin: Add Category';
  $page->admin_description = '';
  $page->path = 'staff/add_category';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 13007701,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Category',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_add_category_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_add_category';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'adv_staff_categories',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_add_category__aurora_adv_staff_admin_add_categ';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_add_category';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff Admin: Add Category',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora_adv_staff_admin_add_categ',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '18233c67-5c7e-4d48-9137-7bf067f3006e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-81d683fe-5130-4132-a322-6effacdb6c21';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'adv_staff_categories',
      'context_admin_use_node_edit' => 0,
      'context' => 'empty',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '81d683fe-5130-4132-a322-6effacdb6c21';
    $display->content['new-81d683fe-5130-4132-a322-6effacdb6c21'] = $pane;
    $display->panels['first-first'][0] = 'new-81d683fe-5130-4132-a322-6effacdb6c21';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-81d683fe-5130-4132-a322-6effacdb6c21';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_staff_add_category'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_staff_add_image';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Staff Admin: Add Member';
  $page->admin_description = '';
  $page->path = 'node/%node/add_member';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'adv_staff_categories' => 'adv_staff_categories',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 135943149,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Member',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_add_image__aurora_adv_staff_admin_add_membe';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_add_image';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff Admin: Add Member',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora_adv_staff_admin_add_membe',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f350fd2c-721b-427c-9c97-d04ef106e4ba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7ffc5c4f-8454-4da6-8b60-1e4d1970e0db';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'adv_staff_member',
      'context_admin_use_node_edit' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7ffc5c4f-8454-4da6-8b60-1e4d1970e0db';
    $display->content['new-7ffc5c4f-8454-4da6-8b60-1e4d1970e0db'] = $pane;
    $display->panels['first-first'][0] = 'new-7ffc5c4f-8454-4da6-8b60-1e4d1970e0db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7ffc5c4f-8454-4da6-8b60-1e4d1970e0db';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_add_image_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_add_image';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'noderef_create_node',
    'context_admin_options_items' => 'adv_staff_member',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
    'context_admin_field' => 'field_ca_adv_staff_m_category',
    'context_admin_custom_redirect' => '',
    'context_admin_autoforward' => 1,
    'context_admin_content_types' => array(
      'adv_staff_member' => 'field_ca_adv_staff_m_category',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_staff_add_image'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_staff_admin_member_administration';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Staff Admin: Member Administration';
  $page->admin_description = '';
  $page->path = 'node/%node/staff-admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'adv_staff_categories' => 'adv_staff_categories',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 135943149,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '5',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_admin_member_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_admin_member_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Adv Staff Admin: Administration',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9f04a355-eb46-4f0e-ad9b-a6421899b27c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9ef47f2d-c981-4d52-9fd9-a968336038df';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_admin-ca_adv_staff_member_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ef47f2d-c981-4d52-9fd9-a968336038df';
    $display->content['new-9ef47f2d-c981-4d52-9fd9-a968336038df'] = $pane;
    $display->panels['middle'][0] = 'new-9ef47f2d-c981-4d52-9fd9-a968336038df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_admin_member_administration__panel_context_47d8d112-0422-4cd2-8208-b08596d79ecc';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_admin_member_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff: Member Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9f04a355-eb46-4f0e-ad9b-a6421899b27c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9ef47f2d-c981-4d52-9fd9-a968336038df';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_admin-ca_adv_staff_member_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ef47f2d-c981-4d52-9fd9-a968336038df';
    $display->content['new-9ef47f2d-c981-4d52-9fd9-a968336038df'] = $pane;
    $display->panels['first-first'][0] = 'new-9ef47f2d-c981-4d52-9fd9-a968336038df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_staff_admin_member_administration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_staff_category_administration';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Staff Admin: Staff Administration';
  $page->admin_description = '';
  $page->path = 'staff/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 135943149,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '10',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_category_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_category_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Staff Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Administer';
  $display->uuid = 'bff841aa-8293-4c08-9493-40b3cd260dc7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6c70b9b2-edb5-4876-af3c-4b44fc4f5363';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_admin-ca_adv_staff_cat_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c70b9b2-edb5-4876-af3c-4b44fc4f5363';
    $display->content['new-6c70b9b2-edb5-4876-af3c-4b44fc4f5363'] = $pane;
    $display->panels['middle'][0] = 'new-6c70b9b2-edb5-4876-af3c-4b44fc4f5363';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_category_administration__panel_context_a57be5d6-0681-4dd5-a6fe-e409476224d3';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_category_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff: Staff Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Administer';
  $display->uuid = 'bff841aa-8293-4c08-9493-40b3cd260dc7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6c70b9b2-edb5-4876-af3c-4b44fc4f5363';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_admin-ca_adv_staff_cat_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c70b9b2-edb5-4876-af3c-4b44fc4f5363';
    $display->content['new-6c70b9b2-edb5-4876-af3c-4b44fc4f5363'] = $pane;
    $display->panels['first-first'][0] = 'new-6c70b9b2-edb5-4876-af3c-4b44fc4f5363';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_staff_category_administration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_staff_category_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Staff: Category Sort';
  $page->admin_description = '';
  $page->path = 'staff/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 135943149,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_category_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_category_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Category Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82531128-64ff-4d6d-8ceb-d47db807cae2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1476ae46-02d1-42f0-8bb1-fad633194870';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_sort-ca_adv_staff_cat_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1476ae46-02d1-42f0-8bb1-fad633194870';
    $display->content['new-1476ae46-02d1-42f0-8bb1-fad633194870'] = $pane;
    $display->panels['middle'][0] = 'new-1476ae46-02d1-42f0-8bb1-fad633194870';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_category_sort__panel_context_b02994dd-2c5c-4914-b087-1ea318461b2e';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_category_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff: Category Sor',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82531128-64ff-4d6d-8ceb-d47db807cae2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1476ae46-02d1-42f0-8bb1-fad633194870';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_sort-ca_adv_staff_cat_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1476ae46-02d1-42f0-8bb1-fad633194870';
    $display->content['new-1476ae46-02d1-42f0-8bb1-fad633194870'] = $pane;
    $display->panels['first-first'][0] = 'new-1476ae46-02d1-42f0-8bb1-fad633194870';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_staff_category_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_staff_list_view';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Staff: List View';
  $page->admin_description = '';
  $page->path = 'staff/view';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Staff',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__panel_context_955edb80-aaf1-45ff-8fa1-1d5ece5e496f';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora  Adv Staff: Category Grid 1 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-1 ca-adv-staff-category-list-1-square',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '017234b5-4620-45f4-94db-6533ee1c66bf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc89e546-ca9a-40de-8e49-7f12c22c509e';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_list_1_square';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc89e546-ca9a-40de-8e49-7f12c22c509e';
    $display->content['new-bc89e546-ca9a-40de-8e49-7f12c22c509e'] = $pane;
    $display->panels['first-first'][0] = 'new-bc89e546-ca9a-40de-8e49-7f12c22c509e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__panel_context_142ced2d-8dff-4661-af5f-9b52d06d0f14';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora  Adv Staff: Category Grid 1 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-1 ca-adv-staff-category-list-1-portrait',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2f758ffa-fb52-4b35-a9d3-66f3a7dabc72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-773e3a1a-d4f7-4d24-80d6-41a753d7f936';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_list_1_portrait';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '773e3a1a-d4f7-4d24-80d6-41a753d7f936';
    $display->content['new-773e3a1a-d4f7-4d24-80d6-41a753d7f936'] = $pane;
    $display->panels['first-first'][0] = 'new-773e3a1a-d4f7-4d24-80d6-41a753d7f936';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__panel_context_0cccd422-99bd-4df6-8856-5e432dd12a3d';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Aurora  Adv Staff: Grouped List Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-group ca-adv-staff-category-group-square',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_two',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.89517819706498',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'menu' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => '25.10482180293501',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'menu' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a243e4eb-f324-4a6e-8c5a-87bab85d6e00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_menu_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2176794-7935-494a-8546-c4d4bdff0f43';
    $display->content['new-c2176794-7935-494a-8546-c4d4bdff0f43'] = $pane;
    $display->panels['first-first'][0] = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane = new stdClass();
    $pane->pid = 'new-07286891-17ca-4b4c-9ce5-54c80cd13442';
    $pane->panel = 'first-second';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_grouped_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '07286891-17ca-4b4c-9ce5-54c80cd13442';
    $display->content['new-07286891-17ca-4b4c-9ce5-54c80cd13442'] = $pane;
    $display->panels['first-second'][0] = 'new-07286891-17ca-4b4c-9ce5-54c80cd13442';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__aurora-adv-staff-grouped-list-portrait';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff: Grouped List Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-group ca-adv-staff-category-group-portrait',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_two',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'aurora-adv-staff-grouped-list-portrait',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.89517819706498',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'menu' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => '25.10482180293501',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'menu' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a243e4eb-f324-4a6e-8c5a-87bab85d6e00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_menu_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2176794-7935-494a-8546-c4d4bdff0f43';
    $display->content['new-c2176794-7935-494a-8546-c4d4bdff0f43'] = $pane;
    $display->panels['first-first'][0] = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane = new stdClass();
    $pane->pid = 'new-fb950c21-6030-406c-a567-f573e3045eb7';
    $pane->panel = 'first-second';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_portrait-staff_grouped_member_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fb950c21-6030-406c-a567-f573e3045eb7';
    $display->content['new-fb950c21-6030-406c-a567-f573e3045eb7'] = $pane;
    $display->panels['first-second'][0] = 'new-fb950c21-6030-406c-a567-f573e3045eb7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__panel_context_b98e86d1-2010-483e-9927-be1e6fde0a50';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff: Category Flex 1 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-flex-1 ca-adv-staff-category-flex-1-square',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '017234b5-4620-45f4-94db-6533ee1c66bf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-11747b09-3903-4b88-8325-b7a7bf96b9c3';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_flex_1_square';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '11747b09-3903-4b88-8325-b7a7bf96b9c3';
    $display->content['new-11747b09-3903-4b88-8325-b7a7bf96b9c3'] = $pane;
    $display->panels['first-first'][0] = 'new-11747b09-3903-4b88-8325-b7a7bf96b9c3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__panel_context_a211ce3d-8ae3-4d7b-8d33-6280fb807b69';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Aurora  Adv Staff: Category Flex 1 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-flex-1 ca-adv-staff-category-flex-1-portrait',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2f758ffa-fb52-4b35-a9d3-66f3a7dabc72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fdf46674-4f2d-4f75-9dc5-0b9f7495e287';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_flex_1_portrait';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fdf46674-4f2d-4f75-9dc5-0b9f7495e287';
    $display->content['new-fdf46674-4f2d-4f75-9dc5-0b9f7495e287'] = $pane;
    $display->panels['first-first'][0] = 'new-fdf46674-4f2d-4f75-9dc5-0b9f7495e287';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__panel_context_e1901d84-d37c-49f6-8ac8-380b9ca9646c';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff: Grouped Flex Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-group-flex ca-adv-staff-category-group-flex-square',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_two_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'content',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'menu_' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'menu',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'menu' => NULL,
      'menu_' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a243e4eb-f324-4a6e-8c5a-87bab85d6e00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_menu_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2176794-7935-494a-8546-c4d4bdff0f43';
    $display->content['new-c2176794-7935-494a-8546-c4d4bdff0f43'] = $pane;
    $display->panels['first-first'][0] = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane = new stdClass();
    $pane->pid = 'new-7ab94651-5bfc-4511-bc3f-f922dc23667f';
    $pane->panel = 'first-second';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_grouped_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7ab94651-5bfc-4511-bc3f-f922dc23667f';
    $display->content['new-7ab94651-5bfc-4511-bc3f-f922dc23667f'] = $pane;
    $display->panels['first-second'][0] = 'new-7ab94651-5bfc-4511-bc3f-f922dc23667f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__aurora-adv-staff-grouped-flex-portrait';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff: Grouped Flex Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-group-flex ca-adv-staff-category-group-flex-square',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_two_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'aurora-adv-staff-grouped-flex-portrait',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'content',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'menu_' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'menu',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'menu' => NULL,
      'menu_' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a243e4eb-f324-4a6e-8c5a-87bab85d6e00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_menu_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2176794-7935-494a-8546-c4d4bdff0f43';
    $display->content['new-c2176794-7935-494a-8546-c4d4bdff0f43'] = $pane;
    $display->panels['first-first'][0] = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane = new stdClass();
    $pane->pid = 'new-1305d2d5-c90c-4c81-bdf2-0a278014d683';
    $pane->panel = 'first-second';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_portrait-staff_grouped_member_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1305d2d5-c90c-4c81-bdf2-0a278014d683';
    $display->content['new-1305d2d5-c90c-4c81-bdf2-0a278014d683'] = $pane;
    $display->panels['first-second'][0] = 'new-1305d2d5-c90c-4c81-bdf2-0a278014d683';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Category Grid 1 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-1 ca-adv-staff-category-list-1-square',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '017234b5-4620-45f4-94db-6533ee1c66bf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c4e4c553-b96c-4fd9-b859-bb622d143fbb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_list_1_square';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4e4c553-b96c-4fd9-b859-bb622d143fbb';
    $display->content['new-c4e4c553-b96c-4fd9-b859-bb622d143fbb'] = $pane;
    $display->panels['middle'][0] = 'new-c4e4c553-b96c-4fd9-b859-bb622d143fbb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Category Grid 1 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-1 ca-adv-staff-category-list-1-portrait',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2f758ffa-fb52-4b35-a9d3-66f3a7dabc72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-088a62a8-e881-4105-a9dc-33f3b80e7cf0';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_list_1_portrait';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '088a62a8-e881-4105-a9dc-33f3b80e7cf0';
    $display->content['new-088a62a8-e881-4105-a9dc-33f3b80e7cf0'] = $pane;
    $display->panels['middle'][0] = 'new-088a62a8-e881-4105-a9dc-33f3b80e7cf0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Grouped Grid Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-group ca-adv-staff-category-group-square',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_two',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.89517819706498',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'menu' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => '25.10482180293501',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a243e4eb-f324-4a6e-8c5a-87bab85d6e00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-aed37c97-d9ed-42b5-b9ff-06353f96c5ba';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_grouped_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aed37c97-d9ed-42b5-b9ff-06353f96c5ba';
    $display->content['new-aed37c97-d9ed-42b5-b9ff-06353f96c5ba'] = $pane;
    $display->panels['center'][0] = 'new-aed37c97-d9ed-42b5-b9ff-06353f96c5ba';
    $pane = new stdClass();
    $pane->pid = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane->panel = 'menu';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_menu_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2176794-7935-494a-8546-c4d4bdff0f43';
    $display->content['new-c2176794-7935-494a-8546-c4d4bdff0f43'] = $pane;
    $display->panels['menu'][0] = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__ca-adv-staff-grouped-grid-portrait';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Grouped Grid Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-group ca-adv-staff-category-group-portrait',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_two',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'ca-adv-staff-grouped-grid-portrait',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.89517819706498',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'menu' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => '25.10482180293501',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a243e4eb-f324-4a6e-8c5a-87bab85d6e00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-39bcf594-c0bc-4122-a23c-4c62bb4222df';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_portrait-staff_grouped_member_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '39bcf594-c0bc-4122-a23c-4c62bb4222df';
    $display->content['new-39bcf594-c0bc-4122-a23c-4c62bb4222df'] = $pane;
    $display->panels['center'][0] = 'new-39bcf594-c0bc-4122-a23c-4c62bb4222df';
    $pane = new stdClass();
    $pane->pid = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane->panel = 'menu';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_menu_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2176794-7935-494a-8546-c4d4bdff0f43';
    $display->content['new-c2176794-7935-494a-8546-c4d4bdff0f43'] = $pane;
    $display->panels['menu'][0] = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view_panel_context_5';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Category Flex 1 Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-flex-1 ca-adv-staff-category-flex-1-square',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '017234b5-4620-45f4-94db-6533ee1c66bf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bafbd62e-de46-4524-a9eb-96d246289be9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_flex_1_square';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bafbd62e-de46-4524-a9eb-96d246289be9';
    $display->content['new-bafbd62e-de46-4524-a9eb-96d246289be9'] = $pane;
    $display->panels['middle'][0] = 'new-bafbd62e-de46-4524-a9eb-96d246289be9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view_panel_context_6';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Category Flex 1 Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-flex-1 ca-adv-staff-category-flex-1-portrait',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2f758ffa-fb52-4b35-a9d3-66f3a7dabc72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fa638f3e-ce81-4f98-911f-d5dce7ade090';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_flex_1_portrait';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fa638f3e-ce81-4f98-911f-d5dce7ade090';
    $display->content['new-fa638f3e-ce81-4f98-911f-d5dce7ade090'] = $pane;
    $display->panels['middle'][0] = 'new-fa638f3e-ce81-4f98-911f-d5dce7ade090';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view_panel_context_7';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Grouped Flex Square',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-group-flex ca-adv-staff-category-group-square-flex',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_two_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'content',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'menu_' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'menu',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'menu' => NULL,
      'menu_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a243e4eb-f324-4a6e-8c5a-87bab85d6e00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4c74b05a-7865-4f2c-9803-8ee4ce0790d1';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_square-staff_grouped_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4c74b05a-7865-4f2c-9803-8ee4ce0790d1';
    $display->content['new-4c74b05a-7865-4f2c-9803-8ee4ce0790d1'] = $pane;
    $display->panels['center'][0] = 'new-4c74b05a-7865-4f2c-9803-8ee4ce0790d1';
    $pane = new stdClass();
    $pane->pid = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane->panel = 'menu_';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_menu_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2176794-7935-494a-8546-c4d4bdff0f43';
    $display->content['new-c2176794-7935-494a-8546-c4d4bdff0f43'] = $pane;
    $display->panels['menu_'][0] = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__ca-adv-staff-grouped-flex-portrait';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Grouped Flex Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-group-flex ca-adv-staff-category-group-portrait-flex',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_two_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_staff_dispaly_template',
          'settings' => array(
            'ca_adv_staff_display' => 'ca_adv_staff_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'ca-adv-staff-grouped-flex-portrait',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'content',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'menu_' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'menu',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'menu' => NULL,
      'menu_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a243e4eb-f324-4a6e-8c5a-87bab85d6e00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-78e81dc4-11b7-4232-ae40-5bf73c2e15b6';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_list_portrait-staff_grouped_member_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78e81dc4-11b7-4232-ae40-5bf73c2e15b6';
    $display->content['new-78e81dc4-11b7-4232-ae40-5bf73c2e15b6'] = $pane;
    $display->panels['center'][0] = 'new-78e81dc4-11b7-4232-ae40-5bf73c2e15b6';
    $pane = new stdClass();
    $pane->pid = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
    $pane->panel = 'menu_';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_menu_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2176794-7935-494a-8546-c4d4bdff0f43';
    $display->content['new-c2176794-7935-494a-8546-c4d4bdff0f43'] = $pane;
    $display->panels['menu_'][0] = 'new-c2176794-7935-494a-8546-c4d4bdff0f43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_staff_list_view'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_staff_member_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Staff Admin: Member Sort';
  $page->admin_description = '';
  $page->path = 'node/%node/staff-admin/member_sort_order';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'adv_staff_categories' => 'adv_staff_categories',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 135943149,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort Member',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_member_sort_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_member_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Adv Staff Admin: Member Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '859268a3-6bda-464b-8071-3e8a3dd7206f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cbbe42a7-5e22-492b-a333-30351529f829';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_sort-ca_adv_staff_member_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cbbe42a7-5e22-492b-a333-30351529f829';
    $display->content['new-cbbe42a7-5e22-492b-a333-30351529f829'] = $pane;
    $display->panels['middle'][0] = 'new-cbbe42a7-5e22-492b-a333-30351529f829';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_member_sort__panel_context_653399a5-c179-4f28-b929-c1991e6c660b';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_member_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff Admin: Member Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '859268a3-6bda-464b-8071-3e8a3dd7206f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cbbe42a7-5e22-492b-a333-30351529f829';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_sort-ca_adv_staff_member_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cbbe42a7-5e22-492b-a333-30351529f829';
    $display->content['new-cbbe42a7-5e22-492b-a333-30351529f829'] = $pane;
    $display->panels['first-first'][0] = 'new-cbbe42a7-5e22-492b-a333-30351529f829';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_staff_member_sort'] = $page;

  return $pages;

}
