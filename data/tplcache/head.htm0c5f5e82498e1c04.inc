<?php
$z[0]=Array("field","(@me==\"\")? @me=\" class='current' \":@me=\"\";",68,160);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("channelartlist","\r\n    <li {dede:field name=typeid runphp=\"yes\"} \r\n      global \$dsql; \$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\$row = \$dsql->GetOne(\$sql); \r\n      @me=is_array(\$row)?'class=\"item-has-children\"':'class=\"\"';{/dede:field}><a class='{dede:field.currentstyle/}'  href='{dede:field name='typeurl'/}'>{dede:field name='typename'/}</a>\r\n      <ul class='sub-menu'>\r\n        {dede:channel type='son' noself='yes'}\r\n        <li><a id=\"lsed\"  href='[field:typeurl/]' title=\"[field:typename/]\">[field:typename/]</a></li>\r\n        {/dede:channel}\r\n      </ul>\r\n    </li>\r\n    ",197,905);
$z[1][4]=array();
$z[1][4]['typeid']="top";
$z[1][4]['currentstyle']="current";
$z[2]=Array("global","",1073,1094);
$z[2][4]=array();
$z[2][4]['name']="cfg_tb";
$z[3]=Array("global","",1174,1195);
$z[3][4]=array();
$z[3][4]['name']="cfg_dh";
$z[4]=Array("field","(@me==\"\")? @me=\" class='current' \":@me=\"\";",1461,1553);
$z[4][4]=array();
$z[4][4]['name']="typeid";
$z[4][4]['runphp']="yes";
$z[5]=Array("channelartlist","\r\n      <li><a class='{dede:field.currentstyle/}'   href='{dede:field name='typeurl'/}'>{dede:field name='typename'/}</a>\r\n        <ul class='drop_menu'>\r\n          {dede:channel type='son' noself='yes'}\r\n          <li><a id=\"lsed\"  href='[field:typeurl/]' title=\"[field:typename/]\">[field:typename/]</a></li>\r\n          {/dede:channel}\r\n        </ul>\r\n      </li>\r\n      ",1592,2043);
$z[5][4]=array();
$z[5][4]['typeid']="top";
$z[5][4]['currentstyle']="current";

?>