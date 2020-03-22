<div id="news">
  <div class="container">
    <div class="home_top wow fadeInUp">
      <h3>{dede:field name='typename'/}</h3>
      <span>{dede:field name='description'/}</span></div>
    <div class="news_con">
      <div class="row"> {dede:arclist  titlelen=42 row='16'}
        <div class='news_item wow fadeInUp'>
          <div class='news_item_box'>
            <div class='news_item_time'><span class='a'>[field:pubdate function="MyDate('d',@me)"/]</span><span class='b'>[field:pubdate function="MyDate('Y-m',@me)"/]</span></div>
            <div class='news_item_right'>
              <div class='news_item_title'><a href='[field:arcurl/]'>[field:title /]</a></div>
              <div class='news_item_des'>[field:description/]</div>
            </div>
          </div>
        </div>
        {/dede:arclist} </div>
    </div>
  </div>
</div>