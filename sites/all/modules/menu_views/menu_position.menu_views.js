(function ($) {

/**
 * Provide the summary information for the lolspeak plugin's vertical tab.
 */
Drupal.behaviors.menuPositionMenuViewsSettingsSummary = {
  attach: function (context) {
    $('fieldset#edit-menu-views', context).drupalSetSummary(function (context) {
      var vals = [];
      $('input[type="checkbox"]:checked', context).each(function () {
        vals.push(Drupal.t('Enabled'));
      });
      if (!vals.length) {
        vals.push(Drupal.t('Not Enabled'));
      }
      return vals.join(', ');
    });
  }
};

})(jQuery);
