(function ($) {

  /**
   * The recommended way for producing HTML markup through JavaScript is to write
   * theming functions. These are similiar to the theming functions that you might
   * know from 'phptemplate' (the default PHP templating engine used by most
   * Drupal themes including Omega). JavaScript theme functions accept arguments
   * and can be overriden by sub-themes.
   *
   * In most cases, there is no good reason to NOT wrap your markup producing
   * JavaScript in a theme function.
   */
  Drupal.theme.prototype.pulBaseExampleButton = function (path, title) {
    // Create an anchor element with jQuery.
    return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');
  };

  /**
   * Behaviors are Drupal's way of applying JavaScript to a page. In short, the
   * advantage of Behaviors over a simple 'document.ready()' lies in how it
   * interacts with content loaded through Ajax. Opposed to the
   * 'document.ready()' event which is only fired once when the page is
   * initially loaded, behaviors get re-executed whenever something is added to
   * the page through Ajax.
   *
   * You can attach as many behaviors as you wish. In fact, instead of overloading
   * a single behavior with multiple, completely unrelated tasks you should create
   * a separate behavior for every separate task.
   *
   * In most cases, there is no good reason to NOT wrap your JavaScript code in a
   * behavior.
   *
   * @param context
   *   The context for which the behavior is being executed. This is either the
   *   full page or a piece of HTML that was just added through Ajax.
   * @param settings
   *   An array of settings (added through drupal_add_js()). Instead of accessing
   *   Drupal.settings directly you should use this because of potential
   *   modifications made by the Ajax callback that also produced 'context'.
   */
  //Drupal.behaviors.pulBaseExampleBehavior = {
    //attach: function (context, settings) {
      // By using the 'context' variable we make sure that our code only runs on
      // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
      // we don't run the same piece of code for an HTML snippet that we already
      // processed previously. By using .once('foo') all processed elements will
      // get tagged with a 'foo-processed' class, causing all future invocations
      // of this behavior to ignore them.
      // $('.social-media', context).once('pul', function () {
      //   // Now, we are invoking the previously declared theme function using two
      //   // settings as arguments.
      //   console.log(settings);
      //   var $anchor = Drupal.theme('pulBaseExampleButton', settings.pul_base_theme.myExampleLinkPath, settings.pul_base_theme.myExampleLinkTitle);

      //   // The anchor is then appended to the current element.
      //   $anchor.appendTo(this);
      // });
    //}
  //};


  Drupal.behaviors.pulMainMenuBehavior = {
    attach: function (context, settings) {
      // By using the 'context' variable we make sure that our code only runs on
      // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
      // we don't run the same piece of code for an HTML snippet that we already
      // processed previously. By using .once('foo') all processed elements will
      // get tagged with a 'foo-processed' class, causing all future invocations
      // of This behavior to ignore them.
      console.log(context);
      console.log(settings);
      $('#block-system-main-menu').click(function () {
        var menu = $('.centered-navigation-menu');
        var menuToggle = $('.centered-navigation-menu-button');

        $(menuToggle).on('click', function (e) {
          e.preventDefault();
          menu.slideToggle(function () {
            if (menu.is(':hidden')) {
              menu.removeAttr('style');
            }
          });
        });

      });
      // Example Usage
      // $('#block-system-main-menu', context).once('pul', function () {
      //   // Now, we are invoking the previously declared theme function using two
      //   // settings as arguments.
      //   console.log(settings);
      //   var $anchor = Drupal.theme('pulBaseExampleButton', 'cats', 'cats');

      //   // The anchor is then appended to the current element.
      //   $anchor.appendTo(this);
      // });

    }
  };


  Drupal.behaviors.pulResourceButtonBehavior = {
    attach: function (context, settings) {
      $('.field--name-field-db-access-url', context).once('pul', function () {
        $('.field--name-field-db-access-url a, .field--name-field-db-access-url a').each(function () {
          var viewOnlineLink = $(this).attr('href');
          var undecodeViewOnline = viewOnlineLink.replace(/\&amp%3B|&amp;/g, '&');
          //console.log(undecodeViewOnline);
          var resolvePrefix = settings.pul_base_theme.resolvePrefix;
          $(this).attr('href', resolvePrefix + undecodeViewOnline);
          $(this).attr('target', '_blank');
        });
      });



    }
  };


})(jQuery);
