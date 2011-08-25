About
=====

* Creates a new Drupal project 
* Uses the dgb (see http://github.com/scor/dgb) file structure
* Downloads Drupal core and contributed modules based on a drush makefile
* Creates a .gitignore file
* Creates development and production features
* Installs Drupal based on an install profile
* Initializes a new git repo

Requirements
===========

* Ruby
* Git
* [Rubygems](http://rubygems.org/pages/download)
* [Bundler](http://gembundler.com/)
* [Drush](http://drupal.org/project/drush)
* [Drush Make](http://drupal.org/project/drush_make)
* [Drush DGB](github.com/scor/dgb)


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


Optional Follow Up
=================

* Create a github.com repo
* Add collaborators
* Set remote git repo to github.com and push


TODO
=================

* Add more graceful endings if a requirement such as drush or git isn't available
* Create a Zen subtheme
* Test zenophile for creating Zen subtheme as in https://github.com/amitaibu/zen_ninesixty/tree/7.x-1.x-dev
* Add a directory for patches
* Switch to using best practice of keeping custom modules in sites/default/modules and contributed modules in sites/all/modules rather than in sites/all/modules/custom and sites/all/modules/contrib, respectively
* Add block_class as an auto install and configure
* Add menu_attributes as an auto install and configure
* Add masquerade as an auto install and configure
