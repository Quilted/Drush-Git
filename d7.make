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
projects[devel][subdir] = "contrib"
projects[diff][subdir] = "contrib"
;projects[coder][subdir] = "contrib"
;projects[simpletest][subdir] = "contrib"


; Modules: Helpers
; --------
projects[date][subdir] = "contrib"
projects[ctools][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[features][subdir] = "contrib"
projects[advanced_help][subdir] = "contrib"


; Modules: Views and Panels
; --------
projects[panels][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[views_bulk_operations][subdir] = "contrib"


; Modules: SEO
; --------
projects[pathauto][subdir] = "contrib"
projects[xmlsitemap][subdir] = "contrib"

; Modules: WYSIWYG
; --------
projects[wysiwyg][subdir] = "contrib"
projects[imce][subdir] = "contrib"
projects[imce_wysiwyg][subdir] = "contrib"


; Themes
; --------
projects[zen][type] = "theme"

  
; Libraries
; ---------
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.3.1/ckeditor_3.3.1.tar.gz"
libraries[ckeditor][destination] = "libraries"
