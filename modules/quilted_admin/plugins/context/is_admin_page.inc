<?php

/**
 * Expose themes as a context condition.
 */
class is_admin_page extends context_condition {
  /**
   * Override of condition_values().
   */
  function condition_values() {
    return array(
      'admin' => t('Only admin pages'),
      'not admin' => t('Only non-admin pages'),
    );
  }

  /**
   * Override of condition_form().
   */
  function condition_form($context) {
    $form = parent::condition_form($context);
    $form['#type'] = 'radios';
    $form['#default_value'] = empty($form['#default_value']) ? 'admin' : current($form['#default_value']);
    return $form;
  }

  /**
   * Override of condition_form_submit().
   */
  function condition_form_submit($values) {
    return array_filter(array($values => $values));
  }

  /**
   * Override of execute().
   */
  function execute() {
    if ($this->condition_used()) {
      $is_admin_page = path_is_admin(current_path());
      foreach ($this->get_contexts() as $context) {
        $values = $this->fetch_from_context($context, 'values');
        switch (current($values)) {
          case 'admin':
            if ($is_admin_page) {
              $this->condition_met($context);
            }
            break;

          case 'not admin':
            if (!$is_admin_page) {
              $this->condition_met($context);
            }
            break;
        }
      }
    }
  }
}
