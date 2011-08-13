<?php
/**
 * Implementation of hook_profile_tasks().
 */
function quilted_profile_tasks(&$task, $url) {
  // Set default WYSIWYG settings
  // db_query('INSERT INTO {wysiwyg} VALUES (1,\'\',NULL),(2,\'ckeditor\',\'a:20:{s:7:"default";i:1;s:11:"user_choose";i:0;s:11:"show_toggle";i:1;s:5:"theme";s:8:"advanced";s:8:"language";s:2:"en";s:7:"buttons";a:2:{s:7:"default";a:2:{s:4:"Bold";i:1;s:5:"Image";i:1;}s:4:"imce";a:1:{s:4:"imce";i:1;}}s:11:"toolbar_loc";s:3:"top";s:13:"toolbar_align";s:4:"left";s:8:"path_loc";s:6:"bottom";s:8:"resizing";i:1;s:11:"verify_html";i:1;s:12:"preformatted";i:0;s:22:"convert_fonts_to_spans";i:1;s:17:"remove_linebreaks";i:1;s:23:"apply_source_formatting";i:0;s:27:"paste_auto_cleanup_on_paste";i:0;s:13:"block_formats";s:32:"p,address,pre,h2,h3,h4,h5,h6,div";s:11:"css_setting";s:5:"theme";s:8:"css_path";s:0:"";s:11:"css_classes";s:0:"";}\')');
 
 
  // Set default input format to Filtered HTML
  variable_set('filter_default_format', '1');
 
  // Pathauto default path
  variable_set('pathauto_node_pattern', '[title-raw]');
 
}
?>