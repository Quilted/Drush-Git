api = 2
core = 7.x

;projects[] = drupal

; CVS checkout of Drupal 7.x. Requires the `core` property to be set to 7.x.
projects[drupal][type] = "core"
projects[drupal][download][type] = "cvs"
projects[drupal][download][root] = ":pserver:anonymous:anonymous@cvs.drupal.org:/cvs/drupal"
projects[drupal][download][revision] = "HEAD"
projects[drupal][download][module] = "drupal"

projects[] = devel
projects[] = jquery_ui
projects[] = logintoboggan
projects[] = views
projects[] = zen
projects[] = panels
projects[] = features
projects[] = ctools
projects[] = strongarm
projects[] = views_bulk_operations
projects[] = diff
projects[] = pathauto
projects[] = token