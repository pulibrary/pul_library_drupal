(function ($) {

Drupal.behaviors.combobox = {
  attach: function(context) {
    $('select.combobox:visible').each(function(i, el) {
      var w = $(el).width();
      var $c = $(el).combobox().next('.combobox-element')
      $c.find('input').width(w).addClass('form-text');
      $c.find('.ui-icon-triangle-1-s').css('background-color', '#eee');
    });
  }
}

})(jQuery);
