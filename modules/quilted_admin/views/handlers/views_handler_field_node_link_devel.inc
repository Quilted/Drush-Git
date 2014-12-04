<?php
/**
 * Field handler to present a simple link to run devel on the node.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_node_link_devel extends views_handler_field_node_link {

  /**
   * Renders the link.
   */
  function render_link($node, $values) {
    // Ensure all of the following are true:
    // - devel module is installed and enabled
    // - user has access to devel information
    // - user has access to edit this node
    if (!module_exists('devel') || !node_access('update', $node) || !user_access('access devel information')) {
      return;
    }

    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = "node/$node->nid/devel";

    $text = !empty($this->options['text']) ? $this->options['text'] : t('devel');
    return $text;
  }
}
