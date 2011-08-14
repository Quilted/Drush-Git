About
=====

* Creates a new Drupal project 
* Uses the dgb (see http://github.com/scor/dgb) file structure
* Downloads Drupal core and contributed modules based on a drush makefile
* Creates a .gitignore file
* Creates development and production features
* Installs Drupal based on an install profile
* Initializes a new git repo

Run
====

Run from the parent directory of the new Drupal project.

    ruby [path/to/this/repo/]drupal setup [project_name]

Example
-------

  ruby drush-git/drupal setup new_website
  

Optional Flags
==============

* makefile: Defaults to Drupal 7 with selected contributed modules
* gitignore: Defaults to cached files and settings.php, but does not ignore user generated files
* install_profile: Defaults to custom Quilted install profile
* db_name: Defaults to project_name