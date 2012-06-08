About
=====

* Creates a new Drupal project 
* Uses the dgb (see http://github.com/scor/dgb) file structure
* Downloads Drupal core and contributed modules based on a drush makefile
* Creates a .gitignore file
* Creates development and production features
* Creates an initial Quilted subtheme
* Installs Drupal based on an install profile
* Creates general feature with all permissions and basic variables included
* Initializes a new git repo

Requirements
===========

* Ruby
* Git
* [Rubygems](http://rubygems.org/pages/download)
* [Bundler](http://gembundler.com/)
* [Drush 5 (latest version!)](http://drupal.org/project/drush)
* [Drush DGB](github.com/scor/dgb)


Installation
============

After cloning this git repository, be sure to run from inside the drush-git repo:

    git submodule init
    git submodule update

Run
====

Run from the parent directory of the new Drupal project.

    ruby [path/to/this/repo/]/drupal setup [project_name]
    
Run with sudo if you are encountering gem or drush download errors:

    sudo ruby [path/to/this/repo/]/drupal setup [project_name]

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
* Set up [Masquerade](http://drupal.org/project/masquerade) user and move Masquerade links from Navigation menu to Management menu



Troubleshooting
=================

...'gem_original_require': no such file to load -- bundler/setup (LoadError)
____________________________________________________

You don't have bundler installed. Try running:
    gem install bundler


=======

TODO
=================

* Add more graceful endings if a requirement such as drush or git isn't available
