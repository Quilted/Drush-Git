## Active Patches

### Better Exposed Filters
- better_exposed_filters-links-ajax-1268150-102.patch
  - Last checked Sept 16, 2014.
  - See issue [#1268150: Ajax doesnt work with BEF Links](https://drupal.org/node/1268150)
  - **Problem:** Better exposed filters does not handle displaying exposed filters as links (one of BEF's options) when "use AJAX" is on. We need "use AJAX" to show exposed filters on blocks.
  - **Patch:** Adds js handling for radio buttons as links in exposed filters and code for showing exposed sort by without requiring an exposed sort order as well.

### Core
- plain-text-newlines-1152216-24.patch
  - Last checked Sept 15, 2014.
  - See issue [#1152216: (Long) text field (textarea) with "Default" formatter does not retain newlines](https://drupal.org/node/1152216)
  - **Problem:** Textarea field types using the plain text text formatter do not retain newlines. This caused long user content to run together despite returns being entered.
  - **Patch:** Runs nl2br() on plain text.

### Features
- features-alter-hooks-always-overridden-766264-23.patch
  - Last checked Sept 3, 2014.
  - See issue [#766264: Alter hooks causing status to always be overridden](https://drupal.org/node/766264).
  - **Problem:** Most recent versions of file_entity and media_youtube implement hook_file_default_displays_alter(). The defaults appear as always overridden.
  - **Patch:** Only shows feature components as overridden if they are explicitly declared and ignores alters.

### Media
- media-wysiwyg-images-lose-ckeditor-styles-2148641-1.patch
  - Last checked Sept 15, 2014.
  - See issue [#2148641: WYSIWYG-inserted images lose ckeditor styles](https://drupal.org/node/2148641).
  - **Problem:** Attributes added to WYSIWYG-inserted images using the ckeditor image editor, such as alignment, don't get saved.
  - **Patch:** Fixes this.

### Picture
- picture-addlistener-polyfill-in-matchmedia-is-broken-2333175-1.patch
  - Last checked Sept 16, 2014.
  - See issue [2333175#: The addListener() polyfill in matchmedia.js is broken](https://www.drupal.org/node/2333175).
  - **Problem:** The addListener() polyfill in matchmedia.js accidentally backported a Drupal 8 function, Drupal.debounce.
  - **Patch:** Removes the debounce function call.

### Variable
- group-variables-in-fieldsets-1897462-1.patch!
  - Last checked Sept 15, 2014.
  - See issue [#1897462: Group variables inside fieldsets](https://drupal.org/node/1897462).
  - **Problem:** Variable groups don't display as fieldsets.
  - **Patch:** Allows variables organized as groups to be displayed as fieldsets.

### Views
- views-expose_filters_in_blocks.patch
  - Last checked Sept 16, 2014.
  - Didn't look in issues. Check later.
  - **Problem:** By default, views doesn't allow exposed filters for block displays.
  - **Patch:** Fixes this.

### Views Bulk Operations
- views-bulk-operations-2192775-1_0.patch
  - Last checkd Sept 16, 2014.
  - This is fixed in commit [2821a8a7](http://drupalcode.org/project/views_bulk_operations.git/commit/2821a8a7419f50d6e4c7a9dd714fbcac3318ed9b), which should be released as part of 7.x-3.3
  - See issue [#2192775: views_bulk_operations_load_action_includes() uses relative path in include_once](https://drupal.org/node/2192775).
  - **Problem:** The latest version of VBO was throwing errors because the include_once() was using relative paths. This was showing up unexpectedly.
  - **Patch:** Fixes this by switching to using module_load_inc().
