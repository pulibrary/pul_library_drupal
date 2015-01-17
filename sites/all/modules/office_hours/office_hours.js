(function ($) {
  Drupal.behaviors.office_hours = {
    attach: function(context,settings) {

      // Hide every item above the max blocks per day.
      $(".oh-hide", context).parent().hide();

      $(".oh-add-more-link", context).each(function (i) {
        $(this).parent().children("div.office-hours-block").hide();
        // If the previous row has an "Add more hours" link, and the office-hours-block is hidden, don't show this line.
        $this_tr = $(this).closest("tr");
        if ($this_tr.prev().find(".oh-add-more-link").length && !$this_tr.prev().find("div.office-hours-block:visible").length) {
          $this_tr.hide();
        }
      })
      .bind('click', show_upon_click);

      fix_striping();

      // Clear the content of this block, when user clicks "Clear/Remove".
      $('.oh-clear-link').bind('click', function(e) {
        $(this).parent().parent().find('.form-select').each(function() {
          $(this).val($("#target option:first").val());
        });
        e.preventDefault();
      });

      // Show an office-hours-block, when user clicks "Add more".
      function show_upon_click(e) {
        $(this).hide();
        $(this).parent().children("div.office-hours-block").fadeIn("slow");
        e.preventDefault();

        // If the next item has an "add more" link, show it.
        $next_tr = $(this).closest("tr").next();
        if ($next_tr.find(".oh-add-more-link").length) {
          $next_tr.show();
        }
        fix_striping();
        return false;
      };

      // Function to traverse visible rows and apply even/odd classes.
      function fix_striping() {
        $('tbody tr:visible', context).each(function (i) {
          if (i % 2 == 0) {
            $(this).removeClass('odd').addClass('even');
          } else {
            $(this).removeClass('even').addClass('odd');
          }
        });
      }
    }
  };
 })(jQuery);
