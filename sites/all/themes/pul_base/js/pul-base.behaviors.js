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


  Drupal.theme.prototype.pulChatStatusBlock = function () {
    var chat_js_warning = '<span class="needs-js"></span>';
    var chat_online = '<span class="libraryh3lp" jid="libchatpul-main@chat.libraryh3lp.com" style="display: none;"><a class=" button--libraryh3lp button--libraryh3lp__online" href="http://library.princeton.edu/help/chat"> Online now</a></span>';
    var chat_offline = '<span class="libraryh3lp" style="display: none;"><a class=" button--libraryh3lp button--libraryh3lp__offline" href="http://library.princeton.edu/help/e-mail"> Offline now</a></span>';
    return chat_js_warning + chat_online + chat_offline;
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

  Drupal.behaviors.pulSmoothScroll = {
    attach: function (context) {
    // browser window scroll (in pixels) after which the "back to top" link is shown
    var offset = 300,
      //browser window scroll (in pixels) after which the "back to top" link opacity is reduced
      offset_opacity = 1200,
      //duration of the top scrolling animation (in ms)
      scroll_top_duration = 700,
      //grab the "back to top" link
      $back_to_top = $('.cd-top');

      //hide or show the "back to top" link
      $(window).scroll(function(){
        ( $(this).scrollTop() > offset ) ? $back_to_top.addClass('cd-is-visible') : $back_to_top.removeClass('cd-is-visible cd-fade-out');
        if( $(this).scrollTop() > offset_opacity ) { 
          $back_to_top.addClass('cd-fade-out');
        }
      });

      //smooth scroll
      $('a[href*=#l-page]').click(function() {
        if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
          var target = $(this.hash);
          target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
          if (target.length) {
            $('html,body').animate({
              scrollTop: target.offset().top
            }, 1000);
            return false;
          }
        }
      });
    }
  };

  Drupal.behaviors.pulSearchHeadersLinkBehavior = {
    attach: function (context) {
      var href_staff = $('.page-find-all-results #general_site_user_search-panel_pane_1 .more-link a').attr('href');
      var href_website = $('.page-find-all-results #general_site_keyword_search-panel_pane_1 .more-link a').attr('href');
      var href_databases = $('.page-find-all-results #databases_keyword_search-panel_pane_2 .more-link a').attr('href');
      //staff search
      var l_staff = $('#general_site_user_search-panel_pane_1 .item-list li').length;
      if (l_staff > 2) {
        $('.page-find-all-results #general_site_user_search-panel_pane_1 h2').replaceWith(function() {
            return '<h2><a href="' + href_staff + '" title="See all library staff results."><i class="icon-staff"></i>Library Staff Results</a></h2>';
        });
      } else {
      }
      //site search
      var l_site = $('#general_site_keyword_search-panel_pane_1 .item-list li').length;
      if(l_site > 2) {
        $('.page-find-all-results #general_site_keyword_search-panel_pane_1 h2').replaceWith(function() {
            return '<h2><a href="' + href_website + '" title="See all library website results."><i class="icon-windows"></i>Library Website Results</a></h2>';
        });
      } else {
      }
      // databases search
      var l_db = $('#databases_keyword_search-panel_pane_2 .item-list li').length;
      if(l_db > 2) {
        $('.page-find-all-results #databases_keyword_search-panel_pane_2 h2').replaceWith(function() {
          return '<h2><a href="' + href_databases + '" title="See all database results."><i class="icon-databases"></i>Databases Results</a></h2>';
      });
      } else {
      }
      
    }
  };

  Drupal.behaviors.pulMainMenuBehavior = {
    attach: function (context) {
      // By using the 'context' variable we make sure that our code only runs on
      // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
      // we don't run the same piece of code for an HTML snippet that we already
      // processed previously. By using .once('foo') all processed elements will
      // get tagged with a 'foo-processed' class, causing all future invocations
      // of This behavior to ignore them.
      //console.log(context);
      //console.log(settings);
      $('.centered-navigation-menu', context).once('pul', function () {
        var menu = $('.centered-navigation-menu');
        var menuToggle = $('.centered-navigation-menu-button');
        $(menuToggle).click(function (e) {
          e.preventDefault();
          menu.slideToggle(function () {
            if (menu.is(':hidden')) {
              menu.removeAttr('style');
            }
          });
        });

        // track main menu usage with Google Analytics
        
        $('.centered-navigation-menu ul.menu a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Main Menu', 'click', $(this).text(),
              {'page': window.location.pathname });
          });
        });
      });

      // });
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

  Drupal.behaviors.pulChatWidgetBehavior = {
    attach: function (context) {
      $('.library-three-help', context).once('pul', function () {
        var chat_text_block = Drupal.theme('pulChatStatusBlock');
        $(this).append(chat_text_block);
      });
    }
  };
    
  Drupal.behaviors.pulTrackFooterMenuUsage = {
    attach: function (context) {
      $('.l-region--footer', context).once('pul', function () {
        $('.l-region--footer .block--menu a').each(function () {
          $(this).addClass('footer-link');
          $(this).click(function () {
            ga('send', 'event', 'Footer Menu', 'click', $(this).text(), 
              {'page': window.location.pathname});
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackGetHelpMenuUsage = {
    attach: function (context) {
      $('.pane-menu-menu-get-help-menu', context).once('pul', function () {
        $('.pane-menu-menu-get-help-menu a').each(function () {
          $(this).addClass('get-help-link');
          $(this).click(function () {
            ga('send', 'event', 'Get Help Menu', 'click', $(this).text());
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackNewsUsage = {
    attach: function (context) {
      $('.view-library-news', context).once('pul', function () {
        $('.view-library-news a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).addClass('library-news-link');
          $(this).click(function () {
            ga('send', 'event', 'Library News', 'click', $(this).text() + ' Position ' + result_position);
            console.log('logging ' + $(this).text() + result_position);
          });
        });
      });
    }
  };


  Drupal.behaviors.pulRewriteTempStaff = {
    attach: function (context) {
      $('.view-staff-department-list', context).once('pul', function () {
        $('tbody a').each(function (index, value) {
          var link = $(this).attr('href');
          var update = link.replace(/temp_/, '');
          $(this).attr('href', update);
        });
        $('tbody td.views-field-mail').each(function (index, value) {
          var email = $(this).text();
          var update = email.replace(/(temp_|_test)/, '');
          $(this).text(update);
        });
      });
    }
  };

  Drupal.behaviors.pulTrackHoursUsage = {
    attach: function (context) {
      $('.pane-library-hours', context).once('pul', function () {
        $('.pane-library-hours a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).addClass('library-hours-link');
          $(this).click(function () {
            ga('send', 'event', 'Library Daily Hours', 'click', $(this).text() + ' Position ' + result_position);
            console.log('logging ' + $(this).text() + result_position);
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackTabLinkUsage = {
    attach: function (context) {
      // all search tab
      $('#quicktabs-tabpage-homepage_search_tabs-0 .homepage-tab-form-message', context).once('pul', function () {
        $('#quicktabs-tabpage-homepage_search_tabs-0 .homepage-tab-form-message a').each(function () {
          $(this).click(function () {
            ga('send', 'event', $(this).text(), 'All Tab');
          });
        });
      });
      // books+ tab
      $('#quicktabs-tabpage-homepage_search_tabs-1 .homepage-tab-form-message', context).once('pul', function () {
        $('#quicktabs-tabpage-homepage_search_tabs-1 .homepage-tab-form-message a').each(function () {
          $(this).click(function () {
            ga('send', 'event', $(this).text(), 'Books+ Tab');
          });
        });
      });
      // articles+ tab
      $('#quicktabs-tabpage-homepage_search_tabs-2 .homepage-tab-form-message', context).once('pul', function () {
        $('#quicktabs-tabpage-homepage_search_tabs-2 .homepage-tab-form-message a').each(function () {
          $(this).click(function () {
            ga('send', 'event', $(this).text(), 'Articles+ Tab');
          });
        });
      });
      // databases tab
      $('#quicktabs-tabpage-homepage_search_tabs-3 .homepage-tab-form-message', context).once('pul', function () {
        $('#quicktabs-tabpage-homepage_search_tabs-3 .homepage-tab-form-message a').each(function () {
          $(this).click(function () {
            ga('send', 'event', $(this).text(), 'Databases Tab');
          });
        });
      });
    }
  };
  
  Drupal.behaviors.pulTrackAllSearchUsage = {
    attach: function (context) {

      $('.page-find-all-results .l-main').once('pul', function () {

        $('.view-databases-keyword-search .item-list .database-title').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Database Title', 'Position ' + result_position);
            console.log('db title: ' + result_position);
          });
        });

        // for subjects block
        $(' .view-database-subject-search .item-list a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Database Subject', 'Position ' + result_position);
          });
        });

        //general keyword search view
        $(' .view-general-site-keyword-search .item-list .database-titles a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Website Search', 'Position ' + result_position);
          });
        });

        //people search
        $(' .view-general-site-user-search .item-list .user-link').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'All Search', 'People Search', 'Position ' + result_position);
            });
        });

          // Add tracking codes to expand links on all search
          // refine-link = top class more-link - bottom
        $(' .view-databases-keyword-search .refine-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Database', 'Top');
            });
        });

        // website search
        $(' .view-general-site-keyword-search .refine-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Website Search', 'Top');
            });
        });

        $(' .view-databases-keyword-search .more-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Database', 'Bottom');
            });
        });

        $(' .view-databases-subject-search .more-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Subject Browse', 'Bottom');
            });
        });

        $(' .view-general-site-user-search .more-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'People Search', 'Bottom');
            });
        });

        $(' .view-general-site-keyword-search .more-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Website Search', 'Bottom');
            });
        });
        // libraries and collections
        $(' .view-search-libraries-and-collections h3 a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Libraries and Collections', 'Title');
            });
        });
        
        $(' .view-search-libraries-and-collections .views-field-field-library-homepage-url a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Libraries and Collections', 'Homepage URL');
            });
        });

      });
    }
  };
  
})(jQuery);
