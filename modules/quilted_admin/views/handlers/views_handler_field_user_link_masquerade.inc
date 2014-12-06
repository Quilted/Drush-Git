<?php
/**
 * Field handler to present a simple link to masquerade as the user.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_user_link_masquerade extends views_handler_field_user_link {
  function render_link($data, $values) {
    // Build a pseudo account object to be able to check the access.
    $account = new stdClass();
    $account->uid = $data;

    global $user;

    if ($data && user_edit_access($account) && module_exists('masquerade') && user_access('masquerade as any user') && $data != $user->uid) {
      $url = 'masquerade/switch/' . $data . '?token=' . drupal_get_token('masquerade/switch/' . $data);
      $this->options['alter']['make_link'] = TRUE;
      $this->options['alter']['path'] = $url;

      $text = !empty($this->options['text']) ? $this->options['text'] : t('masquerade');

      return $text;
    }
  }
}
