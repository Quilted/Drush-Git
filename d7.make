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
projects[drupal][download][type] = "git"


; Modules
; --------
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[devel][download][type] = "git"

projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][download][type] = "git"

projects[jquery_ui][type] = "module"
projects[jquery_ui][subdir] = "contrib"
projects[jquery_ui][download][type] = "git"

projects[views][type] = "module"
projects[views][subdir] = "contrib"
projects[views][download][type] = "git"

projects[panels][type] = "module"
projects[panels][subdir] = "contrib"
projects[panels][download][type] = "git"

projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[ctools][download][type] = "git"
  
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"
projects[strongarm][download][type] = "git"
  
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][download][type] = "git"
  
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"
projects[diff][download][type] = "git"
  
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"
projects[pathauto][download][type] = "git"
  
projects[token][type] = "module"
projects[token][subdir] = "contrib"
projects[token][download][type] = "git"

projects[entity][type] = "module"
projects[entity][subdir] = "contrib"
projects[entity][download][type] = "git"


; Themes
; --------
projects[zen][type] = "theme"
projects[zen][download][type] = "git"

  
; Libraries
; ---------
libraries[jqueryui][download][type] = "file"
libraries[jqueryui][download][url] = "https://ajax.googleapis.com/ajax/libs/jqueryui/1.8.12/jquery-ui.min.js"
