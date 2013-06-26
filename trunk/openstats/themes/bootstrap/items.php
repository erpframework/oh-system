<?php
if (!isset($website) ) { header('HTTP/1.1 404 Not Found'); die; }

  if ( !isset($search_items) ) $search_items=$lang["search_items"] ;
?>

<div class="clr"></div>
 <div class="ct-wrapper">
  <div class="outer-wrapper">
   <div class="content section">
    <div class="widget Blog">
     <div class="blog-posts hfeed">
  
<div style="margin-bottom: 12px;">
  <form action="" method="get">
  <input type="hidden" name="items" />
   <input 
   type="text" 
   value="<?=$search_items?>" 
   style="height: 26px;" 
   onblur= "if (this.value == '')  {this.value = '<?=$search_items?>';}"
   onfocus="if (this.value == '<?=$search_items?>') {this.value = '';}" 
   name="search_items"
   />
   <input type="submit" value="Search" class="menuButtons" />
   </form>
</div>
  
  <table class="table table-condensed table-bordered">
    <tr>
	 <th width="72"  class="padLeft"><?=$lang["item"] ?></th>
	 <th></th>
	</tr>
<?php foreach ( $ItemsData as $Item ) { ?>
    <tr>
	 <td width="72"  class="padLeft font13">
	   <a href="<?=OS_HOME?>?item=<?=$Item["itemid"]?>"><img width="64" height="64" src="<?=OS_HOME?>img/items/<?=$Item["icon"]?>" alt="<?=$Item["name"]?>" /></a>
	 </td>
	 <td class="font13">
	    <a onclick="showhide('item<?=$Item["itemid"]?>')" href="javascript:;">[+]</a> <a href="<?=OS_HOME?>?item=<?=$Item["itemid"]?>"><?=$Item["name"]?></a>
		<div id="item<?=$Item["itemid"]?>" style="display: none;"><?=str_replace("\n", "<br />", $Item["item_info"])?></div>
     </td>
	</tr>
<?php } ?>
  </table>
  
<?php
include('inc/pagination.php');
?>  
     </div>
    </div>
   </div>
  </div>
</div>