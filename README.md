Grid Field Formatter
======================

Grid Field Formatter provides a simple way to display multi-value fields for a 
node in a grid/table with a specified number of columns. Great for images, but 
works with most other fields too.

Requirements
------------

This module has no prerequisite modules except field_formatter_settings, which 
is already in Backdrop core (merged into the Field module.)

Installation
------------

- Install this module using the official Backdrop CMS instructions at
https://backdropcms.org/guide/modules.

- Visit the configuration page under Administration > Configuration > 
Content Authoring > and select the field types for which the Grid Field 
Formatter should be made available.

- Then, browse to the "Manage Display" settings page, for an entity (Node 
content type, for example) with one of the fields of the type that was 
selected above, to configure the formatter. 
-- For example: for page content type: Home » Admin » Structure » Content 
Types » Page » Displays » Manage Display » Manage Fields » [Your Image 
Field] » Configure.
- - Check the box to “Enable multi-value field display with a grid layout".
- - Specify the number of columns desired.
- - Click on “Update” to save the settings.
- - Save the Display settings.

Documentation
-------------

Additional documentation is located in the Wiki:
https://github.com/backdrop-contrib/grid_field_formatter/wiki/Documentation.

Issues
------

Bugs and Feature requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/grid_field_formatter/issues.

Current Maintainers
-------------------

-	[Rick Etsell] (https://github.com/Retsell)
-	[Tim Erickson] (https://github.com/stpaultim)
-	Seeking additional maintainers.

Credits
-------

- Ported to Backdrop CMS by [Rick Etsell]( https://github.com/Retsell).
- Originally written for Drupal by [David Suissa(DYdave)] 
(https://www.drupal.org/user/467284) 
- Drupal project sponsored by [DAVYIN Internet Solutions]
(http://www.davyin.com/global/)

License
-------

This project is GPL v2 software. 
See the LICENSE.txt file in this directory for complete text.

