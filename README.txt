Grid Field Formatter provides a simple way to display multi-value fields for 
a node in a grid/table with a certain number of columns.
[http://drupal.org/node/1826330]

This module has no pretention of implementing any field: it is not a Table
field, such as TableField (http://drupal.org/project/tablefield), or CCK Table
Field (<a href="http://drupal.org/project/cck_table)
It's just a formatter (display) to render multi-value fields with a grid/table
layout instead of a list of items.

The idea behind this is to provide a simple solution, easy to use, setup, with
few dependencies and trying to leverage the formatter hooks provided by
#945524: Field formatter settings hooks in core (http://drupal.org/node/945524)
to extend existing field formatters.


1 - Implementation:

The code is very similar to other modules built on top of Field formatter
settings (http://drupal.org/project/field_formatter_settings), such as Linked
field (http://drupal.org/project/linked_field) or Field formatter class
(http://drupal.org/project/field_formatter_class), and it implements
"hook_field_formatter_settings_form_alter" to add configuration options to
existing formatter settings forms. Module provides its own template file and
also introduces template suggestions to allow overridding in specific cases:
- grid-field-formatter.tpl.php
- grid-field-formatter--[FIELD_TYPE].tpl.php
- grid-field-formatter--[FIELD_NAME].tpl.php
- grid-field-formatter--[FIELD_NAME]--[BUNDLE].tpl.php

It seems this function could also be achieved by using Custom Formatters
(http://drupal.org/project/custom_formatters, See module's tracker page for
more information, or overriding Field theme files and functions, or even with
Views (http://drupal.org/project/views) and fields related modules (for example
View reference - http://drupal.org/project/viewreference).
Another solution would be to use the Mansory(http://drupal.org/project/masonry)
module which seems to allow display of multi-value fields in a Masonry grid
layout, using Javascript.
But since this is a recurring request with such a simple and light
implementation, it could be considered as a standalone module.


2 - Integration:

This module plays well and has been tested with:
Image (http://drupal.org/documentation/modules/image), Lightbox2
(http://drupal.org/documentation/modules/lightbox2), Entity reference
(http://drupal.org/project/entityreference) and Drupal Commerce Product
Reference (http://drupal.org/project/commerce).

A pretty cool and simple setup or application of this module would be, for
example, to build a simple image gallery, with thumbnails, opening in a
lightbox and displayed in a grid/table layout with 5 columns:
Add a Content Type Photo Album, for example, with a multi-value Image field.
Make sure Grid Field Formatter is enabled for the Image field type. Then,
configure the display formatter of the image field in the Photo Album to
display in a lightbox (http://drupal.org/project/lightbox2), with its multi
value thumbnails in a grid layout with 5 columns.

Another example would be to display in a table layout with 4 columns, 'Related
Products" provided by a multi-value Product Reference or Entity Reference
field. By enabling grid field formatter for these fields for the given view
mode, the values (for example, products with an add to cart form) would display
in a table/grid layout.

This module was also tested and has no conflict with Fences
(http://drupal.org/project/fences), and other similar modules for content
display or theme utilities related with the markup of fields.


3 - Installation and configuration:

a. Prerequisite: 
No longer requires Field formatter settings to be installed - it is in Backdrop core.
(http://drupal.org/project/field_formatter_settings)

b. Download the module and simply copy it into your contributed modules folder:
[for example, your_drupal_path/sites/all/modules] and enable it from the
modules administration/management page.
More information at: Installing contributed modules (Drupal 7)
[http://drupal.org/documentation/install/modules-themes/modules-7]

b. Configuration:
- After successful installation, browse to the "Grid Field Formatter" settings
page (under Configuration > Content Authoring), and select the field types for which the
Grid Field Formatter should be made available.

- Then, browse to the "Manage Display" settings page, for an entity (Node
content type, for example) with one of the field of the type that was selected
in 2.a, to configure the formatter (See attached screenshots).
For example: the page content type:
Home » Administration » Structure » Content types » Page » Manage display

In the field formatter settings form, enable Grid Field Formatter and provide
the number of columns (don't forget to save the form).

4 - Contributions are welcome!!

Feel free to follow up in the issue queue for any contributions, bug reports,
feature requests.
Tests, feedback or comments in general are highly appreciated.

6 - Issues
Bugs and Feature requests should be reported in the Issue Queue: https://github.com/backdrop-contrib/module_filter/issues.

7 - Current Maintainers
Rick Etsell.
Seeking additional maintainers.

8 - Credits
This module was sponsored by DAVYIN Internet Solutions [http://www.davyin.com].
Drupal Maintainer: David Suissa (DYdave) https://www.drupal.org/user/467284
Ported to Backdrop CMS by Rick Etsell, https://github.com/Retsell, Jan 2021.

9 - License
This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.
