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
projects[masquerade][type] = "module"
projects[shield][type] = "module"


; Modules: Helpers
; --------
projects[boxes][type] = "module"
projects[better_formats][type] = "module"
projects[better_exposed_filters][type] = "module"
projects[date][type] = "module"
projects[ctools][type] = "module"
projects[token][type] = "module"
projects[entity][type] = "module"
projects[strongarm][type] = "module"
projects[features][type] = "module"
projects[advanced_help][type] = "module"
projects[navigation404][type] = "module"
projects[backup_migrate][type] = "module"
projects[modernizr][type] = "module"


; Modules: Views and Panels
; --------
projects[views][type] = "module"
projects[views_bulk_operations][type] = "module"
projects[context][type] = "module"


; Modules: SEO
; --------
projects[pathauto][type] = "module"
projects[redirect][type] = "module"
projects[globalredirect][type] = "module"
projects[xmlsitemap][type] = "module"
projects[google_analytics][type] = "module"


; Modules: WYSIWYG
; --------
projects[title][type] = "module"
projects[wysiwyg][type] = "module"
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = 9cbb01fb250edf6afcfe2eb5c84842a80d0cd3eb
projects[wysiwyg][download][branch] = 7.x-2.x
projects[wysiwyg_filter][type] = "module"
projects[media][type] = "module"
projects[media_youtube][type] = "module"
projects[media_soundcloud][type] = "module"


; Themes
; --------
projects[omega][type] = "theme"
projects[delta][type] = "module"
projects[ds][type] = "module"

  
; Libraries
; ---------
projects[libraries][type] = "module"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.1/ckeditor_4.1_full.zip"
libraries[ckeditor][destination] = "libraries"
