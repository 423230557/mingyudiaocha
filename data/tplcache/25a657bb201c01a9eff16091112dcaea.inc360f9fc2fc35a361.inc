<?php
$z[0]=Array("field"," \r\n      global \$dsql; \$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\$row = \$dsql->GetOne(\$sql); \r\n      @me=is_array(\$row)?'class=\"item-has-children\"':'class=\"\"';",4,278);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("field","",289,315);
$z[1][4]=array();
$z[1][4]['name']="currentstyle";
$z[2]=Array("field","",324,352);
$z[2][4]=array();
$z[2][4]['name']="typeurl";
$z[3]=Array("field","",354,383);
$z[3][4]=array();
$z[3][4]['name']="typename";
$z[4]=Array("channel","\r\n        <li><a id=\"lsed\"  href='[field:typeurl/]' title=\"[field:typename/]\">[field:typename/]</a></li>\r\n        ",426,593);
$z[4][4]=array();
$z[4][4]['type']="son";
$z[4][4]['noself']="yes";

?>