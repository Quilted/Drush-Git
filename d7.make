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
projects[] = xmlsitemap


; Media Suite
; --------
projects[breakpoints] = 1.1
projects[file_entity] = 2.0-alpha2
projects[fitvids] = 1.14
projects[flexslider] = 2.0-alpha3
projects[media][download][revision] = e2625ed
projects[media][download][branch] = 7.x-2.x
projects[media_responsive] = 1.0-alpha1
projects[media_soundcloud] = 1.0
projects[media_youtube][download][revision] = 5faa00c1
projects[media_youtube][download][branch] = 7.x-2.x
projects[retina_images] = 1.0-beta4
projects[picture][download][revision] = 3d9fe6c
projects[picture][download][branch] = 7.x-1.x
projects[wysiwyg][download][revision] = 31840cbf
projects[wysiwyg][download][branch] = 7.x-2.x
projects[] = wysiwyg_filter


; Themes
; --------
projects[] = omega

  
; Libraries
; ---------
projects[] = libraries
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.1.2/ckeditor_4.1.2_full.zip"
libraries[ckeditor][destination] = "libraries"
