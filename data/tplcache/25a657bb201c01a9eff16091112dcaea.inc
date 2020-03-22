<li {dede:field name=typeid runphp="yes"} 
      global $dsql; $sql = "SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";$row = $dsql->GetOne($sql); 
      @me=is_array($row)?'class="item-has-children"':'class=""';{/dede:field}><a class='{dede:field.currentstyle/}'  href='{dede:field name='typeurl'/}'>{dede:field name='typename'/}</a>
      <ul class='sub-menu'>
        {dede:channel type='son' noself='yes'}
        <li><a id="lsed"  href='[field:typeurl/]' title="[field:typename/]">[field:typename/]</a></li>
        {/dede:channel}
      </ul>
    </li>