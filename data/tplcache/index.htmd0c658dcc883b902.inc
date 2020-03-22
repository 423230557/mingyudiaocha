<?php
$z[0]=Array("global","",200,228);
$z[0][4]=array();
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("global","",241,267);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("global","",311,341);
$z[2][4]=array();
$z[2][4]['name']="cfg_description";
$z[3]=Array("global","",378,405);
$z[3][4]=array();
$z[3][4]['name']="cfg_keywords";
$z[4]=Array("include","",1302,1337);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("arclist","\r\n        <li><a href=\"[field:arcurl/]\" title=\"[field:title/]\">\r\n          <div class='flash_img' style='background:url([field:litpic/]) no-repeat center;'></div>\r\n          </a></li>\r\n        ",1497,1731);
$z[5][4]=array();
$z[5][4]['typeid']="34";
$z[6]=Array("arclist","\r\n        <li><a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" /></a></li>\r\n        ",2041,2193);
$z[6][4]=array();
$z[6][4]['typeid']="34";
$z[7]=Array("channelartlist","\r\n<div id=\"service\">\r\n  <div class=\"container\">\r\n    <div class=\"home_top wow fadeInUp\">\r\n      <h3>{dede:field name='typename'/}</h3>\r\n      <span>{dede:field name='description'/}</span></div>\r\n    <div class=\"service_con\">\r\n      <div class=\"service_con_row\"> {dede:channel type='son' row='6'}\r\n        <div class='service_item wow fadeInUp' data-wow-delay=\".2s\"><a href='[field:typeurl/]'>\r\n          <div class='service_item_img' style='background:url(/skin/img/z[field:global.autoindex/].jpg) no-repeat center;'></div>\r\n          <div class='service_item_title'>\r\n            <div>[field:typename/]</div>\r\n          </div>\r\n          </a></div>\r\n        {/dede:channel} </div>\r\n    </div>\r\n  </div>\r\n</div>\r\n",2327,3096);
$z[7][4]=array();
$z[7][4]['typeid']="3,3";
$z[8]=Array("channelartlist","\r\n<div id=\"about\">\r\n  <div class=\"container\">\r\n    <div class=\"home_top wow fadeInUp\">\r\n      <h3>{dede:field name='typename'/}</h3>\r\n      <span>{dede:field name='description'/}</span></div>\r\n    <div class=\"about_con wow fadeInUp\">\r\n      <div class=\"about_img\"><img src='/skin/img/201895122714753.jpg' width='0' height='0' alt=''></div>\r\n      <div class=\"about_des\">{dede:field.content  function='cn_substr(html2text(@me),1100)'/}</div>\r\n      <a href=\"{dede:field name='typeurl'/}\" class=\"about_more\">查看更多>></a> </div>\r\n  </div>\r\n</div>\r\n",3185,3792);
$z[8][4]=array();
$z[8][4]['typeid']="1,1";
$z[9]=Array("channelartlist","\r\n<div id=\"news\">\r\n  <div class=\"container\">\r\n    <div class=\"home_top wow fadeInUp\">\r\n      <h3>{dede:field name='typename'/}</h3>\r\n      <span>{dede:field name='description'/}</span></div>\r\n    <div class=\"news_con\">\r\n      <div class=\"row\"> {dede:arclist  titlelen=42 row='16'}\r\n        <div class='news_item wow fadeInUp'>\r\n          <div class='news_item_box'>\r\n            <div class='news_item_time'><span class='a'>[field:pubdate function=\"MyDate('d',@me)\"/]</span><span class='b'>[field:pubdate function=\"MyDate('Y-m',@me)\"/]</span></div>\r\n            <div class='news_item_right'>\r\n              <div class='news_item_title'><a href='[field:arcurl/]'>[field:title /]</a></div>\r\n              <div class='news_item_des'>[field:description/]</div>\r\n            </div>\r\n          </div>\r\n        </div>\r\n        {/dede:arclist} </div>\r\n    </div>\r\n  </div>\r\n</div>\r\n",3879,4808);
$z[9][4]=array();
$z[9][4]['typeid']="2,2";
$z[10]=Array("include","",4912,4949);
$z[10][4]=array();
$z[10][4]['filename']="footer.htm";

?>