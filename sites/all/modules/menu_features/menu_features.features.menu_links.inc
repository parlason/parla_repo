<?php
/**
 * @file
 * menu_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'The Art of Touch',
    'options' => array(
      'attributes' => array(
        'title' => 'The Art of Touch - context',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Recordings',
    'options' => array(
      'attributes' => array(
        'title' => 'Recordings related to the project',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
  );
  // Exported menu link: main-menu:node/3
  $menu_links['main-menu:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Press',
    'options' => array(
      'attributes' => array(
        'title' => 'Press photos and press texts for download',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
  );
  // Exported menu link: main-menu:node/4
  $menu_links['main-menu:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Participants',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
  );
  // Exported menu link: main-menu:node/42
  $menu_links['main-menu:node/42'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Kunsten at røre',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: main-menu:node/43
  $menu_links['main-menu:node/43'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'Koncerten',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
  );
  // Exported menu link: main-menu:node/46
  $menu_links['main-menu:node/46'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/46',
    'router_path' => 'node/%',
    'link_title' => 'Medvirkende',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
  );
  // Exported menu link: main-menu:node/5
  $menu_links['main-menu:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Video',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
  );
  // Exported menu link: main-menu:node/52
  $menu_links['main-menu:node/52'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/52',
    'router_path' => 'node/%',
    'link_title' => 'Udgivelser',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
  );
  // Exported menu link: main-menu:node/53
  $menu_links['main-menu:node/53'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/53',
    'router_path' => 'node/%',
    'link_title' => 'Video',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
  );
  // Exported menu link: main-menu:node/59
  $menu_links['main-menu:node/59'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
    'link_title' => 'Presse',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Foto og tekst til presse og anden publicity',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
  );
  // Exported menu link: main-menu:node/6
  $menu_links['main-menu:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact information',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 7,
  );
  // Exported menu link: main-menu:node/64
  $menu_links['main-menu:node/64'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Blog',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Forskellige indlæg, videos, etc',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 7,
  );
  // Exported menu link: main-menu:node/65
  $menu_links['main-menu:node/65'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65',
    'router_path' => 'node/%',
    'link_title' => 'Kontakt',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Kontaktoplysninger',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
  );
  // Exported menu link: main-menu:node/7
  $menu_links['main-menu:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'The concert',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
  );
  // Exported menu link: main-menu:node/8
  $menu_links['main-menu:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Blog',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Writings related to the project',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Contact');
  t('Koncerten');
  t('Kontakt');
  t('Kunsten at røre');
  t('Medvirkende');
  t('Participants');
  t('Press');
  t('Presse');
  t('Recordings');
  t('The Art of Touch');
  t('The concert');
  t('Udgivelser');
  t('Video');


  return $menu_links;
}
