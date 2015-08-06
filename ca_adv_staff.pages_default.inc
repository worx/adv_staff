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
    'title' => 'CA Adv Staff: Member List View Template 1',
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
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-1',
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
    $pane->pid = 'new-6b5ac0ba-9f1e-4d87-9de4-53ee6ba8fbab';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_staff_list-staff_member_list_1';
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
    $pane->uuid = '6b5ac0ba-9f1e-4d87-9de4-53ee6ba8fbab';
    $display->content['new-6b5ac0ba-9f1e-4d87-9de4-53ee6ba8fbab'] = $pane;
    $display->panels['middle'][0] = 'new-6b5ac0ba-9f1e-4d87-9de4-53ee6ba8fbab';
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
    'title' => 'CA Adv Staff: Member List Grid View Template 2',
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
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-2',
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
    $pane->pid = 'new-f33f3902-dad7-4fdc-89ba-37c56e0ae228';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_staff_list-staff_member_list_2';
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
    $pane->uuid = 'f33f3902-dad7-4fdc-89ba-37c56e0ae228';
    $display->content['new-f33f3902-dad7-4fdc-89ba-37c56e0ae228'] = $pane;
    $display->panels['middle'][0] = 'new-f33f3902-dad7-4fdc-89ba-37c56e0ae228';
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
    'title' => 'CA Adv Staff: Member List View Template 3',
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
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_three',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-3',
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
    $pane->pid = 'new-e8186a5c-ed0b-4496-a304-b54167caaafd';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_staff_list-staff_member_list_3';
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
    $pane->uuid = 'e8186a5c-ed0b-4496-a304-b54167caaafd';
    $display->content['new-e8186a5c-ed0b-4496-a304-b54167caaafd'] = $pane;
    $display->panels['middle'][0] = 'new-e8186a5c-ed0b-4496-a304-b54167caaafd';
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
    'title' => 'CA Adv Staff: Member List View Template 4',
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
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_four',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-list ca-adv-staff-member-list-4',
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
    $pane->pid = 'new-3dea68c0-fc6a-4882-8e50-04d219803a3c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_staff_list-staff_member_list_4';
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
    $pane->uuid = '3dea68c0-fc6a-4882-8e50-04d219803a3c';
    $display->content['new-3dea68c0-fc6a-4882-8e50-04d219803a3c'] = $pane;
    $display->panels['middle'][0] = 'new-3dea68c0-fc6a-4882-8e50-04d219803a3c';
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
  $handler->weight = -18;
  $handler->conf = array(
    'title' => ' CA Adv Staff: Member Node View Template 1',
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
    'body_classes_to_add' => 'ca-adv-staff-member-node ca-adv-staff-member-node-1',
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
    $pane->pid = 'new-0ab70d89-7490-4b98-b941-a5dba6e3e5d5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_node-ca_staff_node_1';
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
    $pane->uuid = '0ab70d89-7490-4b98-b941-a5dba6e3e5d5';
    $display->content['new-0ab70d89-7490-4b98-b941-a5dba6e3e5d5'] = $pane;
    $display->panels['middle'][0] = 'new-0ab70d89-7490-4b98-b941-a5dba6e3e5d5';
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
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member Node View Template 2',
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
            'ca_adv_staff_node_template' => 'ca_adv_staff_node_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-node ca-adv-staff-member-node-2',
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
    $pane->pid = 'new-99175e9f-77c3-412a-8669-71f8caba942d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_member_node-ca_staff_node_2';
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
    $pane->uuid = '99175e9f-77c3-412a-8669-71f8caba942d';
    $display->content['new-99175e9f-77c3-412a-8669-71f8caba942d'] = $pane;
    $display->panels['middle'][0] = 'new-99175e9f-77c3-412a-8669-71f8caba942d';
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
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member List Flex View Template 1',
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
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-flex ca-adv-staff-member-flex-1',
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
    $pane->pid = 'new-f4917cd7-2fb7-41dd-8055-4049e66d0738';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_staff_list-staff_member_flex_1';
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
    $pane->uuid = 'f4917cd7-2fb7-41dd-8055-4049e66d0738';
    $display->content['new-f4917cd7-2fb7-41dd-8055-4049e66d0738'] = $pane;
    $display->panels['middle'][0] = 'new-f4917cd7-2fb7-41dd-8055-4049e66d0738';
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
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Member List Flex View Template 2',
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
            'ca_adv_staff_m_list_template' => 'ca_adv_staff_m_list_template_two_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-member-flex ca-adv-staff-member-flex-2',
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
    $pane->pid = 'new-eb6c5930-0a31-4269-a470-6fb2306326b7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_staff_list-staff_member_flex_2';
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
    $pane->uuid = 'eb6c5930-0a31-4269-a470-6fb2306326b7';
    $display->content['new-eb6c5930-0a31-4269-a470-6fb2306326b7'] = $pane;
    $display->panels['middle'][0] = 'new-eb6c5930-0a31-4269-a470-6fb2306326b7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_staff_n_node_view_panel_context_4'] = $handler;

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
  $handler->name = 'page_ca_adv_staff_list_view_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Category List Grid Template 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-1',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_one',
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
    $pane->pid = 'new-f88ea0f0-896a-4720-9fcd-5ee491707f8e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_list_1';
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
    $pane->uuid = 'f88ea0f0-896a-4720-9fcd-5ee491707f8e';
    $display->content['new-f88ea0f0-896a-4720-9fcd-5ee491707f8e'] = $pane;
    $display->panels['middle'][0] = 'new-f88ea0f0-896a-4720-9fcd-5ee491707f8e';
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
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Category List Grid Template 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-2',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_two',
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
    $pane->pid = 'new-d91dc383-3a55-4135-b2fc-734a6a7f2cc1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_list_2';
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
    $pane->uuid = 'd91dc383-3a55-4135-b2fc-734a6a7f2cc1';
    $display->content['new-d91dc383-3a55-4135-b2fc-734a6a7f2cc1'] = $pane;
    $display->panels['middle'][0] = 'new-d91dc383-3a55-4135-b2fc-734a6a7f2cc1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => ' CA Adv Staff: Category List Template 3',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-3',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_three',
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
  $display->uuid = '56b7ab55-1ea6-4b54-ac81-5395065674a7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-54663d99-c348-4b68-964b-4e83247d2f06';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_list_3';
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
    $pane->uuid = '54663d99-c348-4b68-964b-4e83247d2f06';
    $display->content['new-54663d99-c348-4b68-964b-4e83247d2f06'] = $pane;
    $display->panels['middle'][0] = 'new-54663d99-c348-4b68-964b-4e83247d2f06';
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
    'title' => 'CA Adv Staff: Grouped Member List Grid View Template 4',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-4',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_four',
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
    $pane->pid = 'new-c236d8e1-ce28-449b-abf2-22499d5e60f1';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_staff_list-staff_grouped_member_list_1';
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
    $pane->uuid = 'c236d8e1-ce28-449b-abf2-22499d5e60f1';
    $display->content['new-c236d8e1-ce28-449b-abf2-22499d5e60f1'] = $pane;
    $display->panels['center'][0] = 'new-c236d8e1-ce28-449b-abf2-22499d5e60f1';
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
  $display->title_pane = 'new-c236d8e1-ce28-449b-abf2-22499d5e60f1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view_panel_context_5';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Category List Flex Template 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-flex-1',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_one_flex',
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
    $pane->pid = 'new-7c274de2-3cf3-414f-b56d-520f020190c7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_flex_1';
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
    $pane->uuid = '7c274de2-3cf3-414f-b56d-520f020190c7';
    $display->content['new-7c274de2-3cf3-414f-b56d-520f020190c7'] = $pane;
    $display->panels['middle'][0] = 'new-7c274de2-3cf3-414f-b56d-520f020190c7';
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
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Category List Flex Template 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-flex-2',
    'access' => array(
      'plugins' => array(
        0 => array(
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
    $pane->pid = 'new-f6f127d8-8d37-4829-86b2-84765323b859';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_flex_2';
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
    $pane->uuid = 'f6f127d8-8d37-4829-86b2-84765323b859';
    $display->content['new-f6f127d8-8d37-4829-86b2-84765323b859'] = $pane;
    $display->panels['middle'][0] = 'new-f6f127d8-8d37-4829-86b2-84765323b859';
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
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'CA Adv Staff: Grouped Member List Flex View Template 4',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-flex-4',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_four_flex',
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
        'width' => 99.999999999999986,
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
    $pane->pid = 'new-fc67b5fd-0eb6-4e0d-a7ac-936935bd9e43';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_staff_list-staff_grouped_member_flex_1';
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
    $pane->uuid = 'fc67b5fd-0eb6-4e0d-a7ac-936935bd9e43';
    $display->content['new-fc67b5fd-0eb6-4e0d-a7ac-936935bd9e43'] = $pane;
    $display->panels['center'][0] = 'new-fc67b5fd-0eb6-4e0d-a7ac-936935bd9e43';
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
  $handler->name = 'page_ca_adv_staff_list_view__panel_context_955edb80-aaf1-45ff-8fa1-1d5ece5e496f';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff: Category List Grid Template 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-1',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '017234b5-4620-45f4-94db-6533ee1c66bf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f88ea0f0-896a-4720-9fcd-5ee491707f8e';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_list_1';
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
    $pane->uuid = 'f88ea0f0-896a-4720-9fcd-5ee491707f8e';
    $display->content['new-f88ea0f0-896a-4720-9fcd-5ee491707f8e'] = $pane;
    $display->panels['first-first'][0] = 'new-f88ea0f0-896a-4720-9fcd-5ee491707f8e';
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
    'title' => 'Aurora Adv Staff: Category List Grid Template 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-2',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2f758ffa-fb52-4b35-a9d3-66f3a7dabc72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d91dc383-3a55-4135-b2fc-734a6a7f2cc1';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_list_2';
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
    $pane->uuid = 'd91dc383-3a55-4135-b2fc-734a6a7f2cc1';
    $display->content['new-d91dc383-3a55-4135-b2fc-734a6a7f2cc1'] = $pane;
    $display->panels['first-first'][0] = 'new-d91dc383-3a55-4135-b2fc-734a6a7f2cc1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_staff_list_view__panel_context_43bd1a3a-7069-4a08-887c-65949f99aef9';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_staff_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff: Category List Grid Template 3',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-3',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_three',
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
  $display->uuid = '56b7ab55-1ea6-4b54-ac81-5395065674a7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-54663d99-c348-4b68-964b-4e83247d2f06';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_list_3';
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
    $pane->uuid = '54663d99-c348-4b68-964b-4e83247d2f06';
    $display->content['new-54663d99-c348-4b68-964b-4e83247d2f06'] = $pane;
    $display->panels['middle'][0] = 'new-54663d99-c348-4b68-964b-4e83247d2f06';
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
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Aurora Adv Staff: Category Grid View Template 4',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-list ca-adv-staff-category-list-4',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_four',
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
    $pane->pid = 'new-c236d8e1-ce28-449b-abf2-22499d5e60f1';
    $pane->panel = 'first-second';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_staff_list-staff_grouped_member_list_1';
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
    $pane->uuid = 'c236d8e1-ce28-449b-abf2-22499d5e60f1';
    $display->content['new-c236d8e1-ce28-449b-abf2-22499d5e60f1'] = $pane;
    $display->panels['first-second'][0] = 'new-c236d8e1-ce28-449b-abf2-22499d5e60f1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c236d8e1-ce28-449b-abf2-22499d5e60f1';
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
    'title' => 'Aurora Adv Staff: Category List Flex Template 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-flex-1',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '017234b5-4620-45f4-94db-6533ee1c66bf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7c274de2-3cf3-414f-b56d-520f020190c7';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_flex_1';
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
    $pane->uuid = '7c274de2-3cf3-414f-b56d-520f020190c7';
    $display->content['new-7c274de2-3cf3-414f-b56d-520f020190c7'] = $pane;
    $display->panels['first-first'][0] = 'new-7c274de2-3cf3-414f-b56d-520f020190c7';
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
    'title' => 'Aurora Adv Staff: Category List Flex Template 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-flex-2',
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2f758ffa-fb52-4b35-a9d3-66f3a7dabc72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f6f127d8-8d37-4829-86b2-84765323b859';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_category_list-ca_adv_staff_cat_flex_2';
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
    $pane->uuid = 'f6f127d8-8d37-4829-86b2-84765323b859';
    $display->content['new-f6f127d8-8d37-4829-86b2-84765323b859'] = $pane;
    $display->panels['first-first'][0] = 'new-f6f127d8-8d37-4829-86b2-84765323b859';
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
    'title' => 'Aurora Adv Staff: Grouped Member List Flex View Template 4',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-staff-category-flex ca-adv-staff-category-flex-4',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_staff_c_list_template',
          'settings' => array(
            'ca_adv_staff_c_list_template' => 'ca_adv_staff_c_list_template_four_flex',
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
        'width' => 99.999999999999986,
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
    $pane->pid = 'new-fc67b5fd-0eb6-4e0d-a7ac-936935bd9e43';
    $pane->panel = 'first-second';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_staff_staff_list-staff_grouped_member_flex_1';
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
    $pane->uuid = 'fc67b5fd-0eb6-4e0d-a7ac-936935bd9e43';
    $display->content['new-fc67b5fd-0eb6-4e0d-a7ac-936935bd9e43'] = $pane;
    $display->panels['first-second'][0] = 'new-fc67b5fd-0eb6-4e0d-a7ac-936935bd9e43';
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
