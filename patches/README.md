## Active Patches

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

### Variable
- group-variables-in-fieldsets-1897462-1.patch!
  - Last checked Sept 15, 2014.
  - See issue [#1897462: Group variables inside fieldsets](https://drupal.org/node/1897462).
  - **Problem:** Variable groups don't display as fieldsets.
  - **Patch:** Allows variables organized as groups to be displayed as fieldsets.

### Media
- media-wysiwyg-images-lose-ckeditor-styles-2148641-1.patch
  - Last checked Sept 15, 2014.
  - See issue [#2148641: WYSIWYG-inserted images lose ckeditor styles](https://drupal.org/node/2148641).
  - **Problem:** Attributes added to WYSIWYG-inserted images using the ckeditor image editor, such as alignment, don't get saved.
  - **Patch:** Fixes this.
