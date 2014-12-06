<?php
/**
 * Field handler to present a simple link to run devel on the user.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_user_link_devel extends views_handler_field_user_link {
  function render_link($data, $values) {
    // Build a pseudo account object to be able to check the access.
    $account = new stdClass();
    $account->uid = $data;

    if ($data && user_edit_access($account) && module_exists('devel') && user_access('access devel information')) {
      $this->options['alter']['make_link'] = TRUE;
      $this->options['alter']['path'] = "user/$data/devel";

      $text = !empty($this->options['text']) ? $this->options['text'] : t('devel');
      return $text;
    }
  }
}
