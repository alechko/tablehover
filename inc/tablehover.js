(function($) {
  $(document).ready(function(){
    $("table").each(function(){
      $(this).tableHover({rowClass: 'hoverrow',colClass: 'hover',headRows: true,footRows: true, headCols: true, footCols: true});
    });
    $(".tablehover-click").each(function(){
      $(this).tableHover({rowClass: 'hoverrow',colClass: 'hover', clickClass: 'click'});
    });
  });
})(jQuery);
