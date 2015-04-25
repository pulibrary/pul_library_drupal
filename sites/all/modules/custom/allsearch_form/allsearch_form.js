(function ($) {
  $(document).ready(function() {
    $('#allsearch-form-form input').focus(function() {
      if ($(this).val() == Drupal.settings.allsearch_form.all_search_form_hint) { 
        $(this).val('');
      }
     });
     
     $('#allsearch-form-form').submit(function() {
      if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.allsearch_form.all_search_form_hint) {
        if($('#allsearch-error').length == 0) {
          $("<div id='allsearch-error' class='alert--message'><h2 class='element-invisible'>Error message</h2><h3><i class='icon-alert'></i> "+Drupal.settings.allsearch_form.all_search_form_error+"</h3></div>").insertBefore('.l-content');
        }
        
        return false;
      }
      
      return true;
    }); 
  });
}(jQuery));