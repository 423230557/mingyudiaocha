<div id="service">
  <div class="container">
    <div class="home_top wow fadeInUp">
      <h3>{dede:field name='typename'/}</h3>
      <span>{dede:field name='description'/}</span></div>
    <div class="service_con">
      <div class="service_con_row"> {dede:channel type='son' row='6'}
        <div class='service_item wow fadeInUp' data-wow-delay=".2s"><a href='[field:typeurl/]'>
          <div class='service_item_img' style='background:url(/skin/img/z[field:global.autoindex/].jpg) no-repeat center;'></div>
          <div class='service_item_title'>
            <div>[field:typename/]</div>
          </div>
          </a></div>
        {/dede:channel} </div>
    </div>
  </div>
</div>