(function ($) {
  $(document).ready(function() {
    $('#allsearch-block-form input').focus(function() {
     	$(this).val('');
     }); 
  });
}(jQuery));