(function($) {
  Drupal.behaviors.politeAlert = {
    attach: function(context, settings) {
      var _polite = {
        alertBlock: function() {
          // Check for cookie to verify display.
          var alertClosed = $.cookie("polite-alert");
          if (!alertClosed) {
            $(".block--polite-alert").addClass("polite-alert-visible");
          } else {
            $(".block--polite-alert").hide();
          }

          // Close and set cookie when user closes alert.
          $(".block--polite-alert .polite-alert-action").click(function() {
            $.cookie("polite-alert", "1", { path: "/" });
            $(".block--polite-alert").removeClass("polite-alert-visible");
            $(".block--polite-alert").addClass("polite-alert-dismissed");
          });
        },

        init: function() {
          this.alertBlock();
        }
      }; // end _polite{}

      _polite.init();
    }
  };
})(jQuery);
