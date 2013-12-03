## Active Patches

### Features
- features-alter-hooks-always-overridden-766264-23.patch
  - Last checked Dec 1, 2013.
  - See issue [#766264: Alter hooks causing status to always be overridden](https://drupal.org/node/766264).
  - **Problem:** Most recent versions of file_entity and media_youtube implement hook_file_default_displays_alter(). The defaults appear as always overridden.
  - **Patch:** Only shows feature components as overridden if they are explicitly declared and ignores alters.

### Fitvids
- fitvids-conflicts-with-ckeditor-2078821-4.patch
  - Last checked Dec 1, 2013.
  - See issue [#2078821: Ckeditor does not show in explorer](https://drupal.org/node/2078821).
  - **Problem:** fitvids.js conflicts with ckeditor.js causing all ckeditor-enabled textareas to be hidden and not visible.
  - **Patch:** Workaround solution renders fitvids.js when ckeditor.js is not expected to be rendered. Not a final solution!

### Variable
- group-variables-in-fieldsets-1897462-1.patch!
  - Last checked Dec 1, 2013.
  - See issue [#1897462: Group variables inside fieldsets](https://drupal.org/node/1897462).
  - **Problem:** Variable groups don't display as fieldsets.
  - **Patch:** Allows variables organized as groups to be displayed as fieldsets.

### Media
- media-wysiwyg-images-lose-ckeditor-styles-2148641-1.patch
  - Last checked Dec 3, 2013.
  - See issue [#2148641: WYSIWYG-inserted images lose ckeditor styles](https://drupal.org/node/2148641).
  - **Problem:** Attributes added to WYSIWYG-inserted images using the ckeditor image editor, such as alignment, don't get saved.
  - **Patch:** Fixes this.
