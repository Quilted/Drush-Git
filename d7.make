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

projects[drupal][patch][] = https://www.drupal.org/files/text-plain-1152216-24.patch


; Modules: Development
; --------
projects[] = devel
projects[] = diff
projects[] = maillog
projects[] = masquerade
projects[] = shield
projects[] = styleguide


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
projects[features][patch][] = https://drupal.org/files/766264-25-alter-override.patch
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
projects[variable][patch][] = https://drupal.org/files/group-variables-in-fieldsets-1897462-1.patch
projects[] = views
projects[] = views_bulk_operations
projects[] = xmlsitemap


; Media Suite
; --------
projects[] = hires_images
projects[] = image_dimensions
projects[] = wysiwyg_filter
projects[] = fitvids

projects[breakpoints] = 1.1
projects[file_entity] = 2.0-alpha3
projects[flexslider] = 2.0-alpha3
projects[media_soundcloud] = 1.0
projects[media_youtube] = 2.0-rc4

projects[media][download][revision] = 042f84f
projects[media][download][branch] = 7.x-2.x
projects[media][patch][] = https://drupal.org/files/issues/media-wysiwyg-images-lose-ckeditor-styles-2148641-1.patch
projects[picture][download][revision] = 18b94b9
projects[picture][download][branch] = 7.x-1.x
projects[wysiwyg][download][revision] = ee64524
projects[wysiwyg][download][branch] = 7.x-2.x


; Themes
; --------
projects[] = omega


; Libraries
; ---------
projects[] = libraries
libraries[ckeditor][download][type] = get
; libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.1.2/ckeditor_4.1.2_full.zip"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3/ckeditor_4.3_full.zip"
libraries[ckeditor][destination] = libraries

libraries[fitvids][download][type] = git
libraries[fitvids][download][url] = https://github.com/davatron5000/FitVids.js
libraries[fitvids][destination] = libraries

libraries[flexslider][download][type] = git
libraries[flexslider][download][url] = https://github.com/woothemes/FlexSlider.git
libraries[flexslider][destination] = libraries
