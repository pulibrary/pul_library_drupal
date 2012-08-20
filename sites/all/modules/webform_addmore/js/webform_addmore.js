// $Id$

(function ($) {

Drupal.behaviors.webform_addmore = {
  attach: function(context) {  
    function fieldsetRepeater(container, fieldsetSelecter, addBtnTxt, numberFirstShown) {
      var addBtn = $('<input type="button" class="add-more" />').val(addBtnTxt).click(function() {
        var hiddenFieldsets = fieldsets.not(':visible');

        hiddenFieldsets.filter(':first').fadeIn();
        if(hiddenFieldsets.size() < 2) {
          addBtn.hide();
        }
      });

      var fieldsets = container.find(fieldsetSelecter)
      .not(container.find(fieldsetSelecter + ' ' + fieldsetSelecter))
      .hide();

      fieldsets.filter(':last').after($('<div/>').append(addBtn))

      for( var i = 0; i < numberFirstShown; i++ ) {
        addBtn.click();
      }
    }
    
    $.each(
      Drupal.settings.webform_addmore.fieldsets,
      function(i, fieldset) {
        $('#' + fieldset).addClass('webform-addmore');
      }
    );

    fieldsetRepeater($('.webform-client-form'), '.webform-addmore', Drupal.settings.webform_addmore.label, 1);
  }
};

})(jQuery);