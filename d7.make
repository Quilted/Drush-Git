; ----------------
; Based on generated makefile from http://drushmake.me
; ----------------
  
; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
  
core = 7.x
  
; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.
  
api = 2
  
; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.
  
; Drupal 7.x. Requires the `core` property to be set to 7.x.
projects[drupal][version] = 7


; Modules: Development
; --------
projects[devel][type] = "module"
projects[diff][type] = "module"
projects[coder][type] = "module"
;projects[block_class][type] = "module"
projects[menu_attributes][type] = "module"
projects[masquerade][type] = "module"


; Modules: Helpers
; --------
projects[date][type] = "module"
projects[ctools][type] = "module"
projects[token][type] = "module"
projects[entity][type] = "module"
projects[strongarm][type] = "module"
projects[features][type] = "module"
projects[advanced_help][type] = "module"


; Modules: Views and Panels
; --------
projects[panels][type] = "module"
projects[panels][patch][] = "http://drupal.org/files/issues/panels_custom_content_pane_css_class.patch"
projects[views][type] = "module"
projects[views_bulk_operations][type] = "module"


; Modules: SEO
; --------
projects[pathauto][type] = "module"
projects[xmlsitemap][type] = "module"


; Modules: WYSIWYG
; --------
projects[wysiwyg][type] = "module"
projects[imce][type] = "module"
projects[imce_wysiwyg][type] = "module"
projects[title][type] = "module"


; Themes
; --------
projects[zen][type] = "theme"

  
; Libraries
; ---------
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.3.1/ckeditor_3.3.1.tar.gz"
libraries[ckeditor][destination] = "libraries"
