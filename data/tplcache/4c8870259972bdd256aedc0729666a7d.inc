<div id="about">
  <div class="container">
    <div class="home_top wow fadeInUp">
      <h3>{dede:field name='typename'/}</h3>
      <span>{dede:field name='description'/}</span></div>
    <div class="about_con wow fadeInUp">
      <div class="about_img"><img src='/skin/img/201895122714753.jpg' width='0' height='0' alt=''></div>
      <div class="about_des">{dede:field.content  function='cn_substr(html2text(@me),1100)'/}</div>
      <a href="{dede:field name='typeurl'/}" class="about_more">查看更多>></a> </div>
  </div>
</div>