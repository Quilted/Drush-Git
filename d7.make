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

projects[] = drupal


; Modules: Development
; --------
projects[] = devel
projects[] = diff
projects[] = masquerade
projects[] = shield
projects[] = maillog


; Modules: Production
; --------
projects[] = google_analytics


; Modules: Both
; --------
projects[] = advanced_help
projects[] = backup_migrate
projects[] = better_exposed_filters
projects[] = better_formats
projects[] = boxes
projects[] = context
projects[] = context_error
projects[] = ctools
projects[] = custom_search
projects[] = date
projects[] = delta
projects[] = draggableviews
projects[] = ds
projects[] = email
projects[] = entity
projects[] = entityreference
projects[] = features
projects[] = field_group
projects[] = globalredirect
projects[] = jquery_update
projects[] = link
projects[] = media
projects[] = media_soundcloud
projects[] = media_vimeo
projects[] = media_youtube
projects[] = modernizr
projects[] = navigation404
projects[] = pathauto
projects[] = redirect
projects[] = strongarm
projects[] = textformatter
projects[] = title
projects[] = token
projects[] = transliteration
projects[] = variable
projects[] = views
projects[] = views_bulk_operations
projects[] = wysiwyg_filter
projects[] = xmlsitemap
projects[wysiwyg][download][revision] = 9cbb01fb250edf6afcfe2eb5c84842a80d0cd3eb
projects[wysiwyg][download][branch] = 7.x-2.x


; Themes
; --------
projects[] = omega

  
; Libraries
; ---------
projects[] = libraries
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.1.2/ckeditor_4.1.2_full.zip"
libraries[ckeditor][destination] = "libraries"
