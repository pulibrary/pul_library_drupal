(function ($) {
  Drupal.behaviors.entityconnect = {
    'attach': function(context) {
      ref_field_buttons = {};
      $(".entityconnect-add.single-value", context).each(function() {
        $(this).insertAfter($(this).next().find("label"));
      });
      $(".entityconnect-edit.single-value", context).each(function() {
        $(this).insertAfter($(this).next().find("label"));
      });

      $(".entityconnect-edit input").click(function() {

        var wrapper = $(this).parents(".entityconnect-edit");

        text = $(wrapper).siblings("[type='text']");

        if(text.length == 0) {
          text = $(wrapper).siblings().find("[type='text']");
        }

        if($.trim($(text).val()) == '') {
          return false;
        }
        return true;
      });
    }
  };
})(jQuery);
