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

      // tracks usage of back to top feature
      $('.cd-top').each(function () {
        $(this).click(function () {
          ga('send', 'event', 'Back to Top', 'click', window.location.pathname);
        });
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
            return '<h2><a href="' + href_staff + '" title="See all library staff results."><i class="icon-phone-book"></i>Library Staff</a></h2>';
        });
      } else {
      }
      //site search
      var l_site = $('#general_site_keyword_search-panel_pane_1 .item-list li').length;
      if(l_site > 2) {
        $('.page-find-all-results #general_site_keyword_search-panel_pane_1 h2').replaceWith(function() {
            return '<h2><a href="' + href_website + '" title="See all library website results."><i class="icon-windows"></i>Library Website</a></h2>';
        });
      } else {
      }
      // databases search
      var l_db = $('#databases_keyword_search-panel_pane_2 .item-list li').length;
      if(l_db > 2) {
        $('.page-find-all-results #databases_keyword_search-panel_pane_2 h2').replaceWith(function() {
          return '<h2><a href="' + href_databases + '" title="See all database results."><i class="icon-databases"></i>Databases</a></h2>';
      });
      } else {
      }

    }
  };

  Drupal.behaviors.pulSearchLocalTabBehavior = {
    attach: function (context) {
      var staff_preview = $("a[href='#general_site_user_search-panel_pane_1']");
      var staff_query_total = $("span[data-search-service='general_site_user_search-panel_pane_1']").attr('data-hit-count');
      if(staff_query_total > 0) {
        $(staff_preview).append(" ("+staff_query_total+")");
        $(staff_preview).attr("data-label", "Library Staff");
      } else {
        $(staff_preview).parent().hide();
      }
      var db_preview = $("a[href='#databases_keyword_search-panel_pane_2']");
      var db_query_total = $("span[data-search-service='databases_keyword_search-panel_pane_2']").attr('data-hit-count');
      if(db_query_total > 0) {
        $(db_preview).append(" ("+db_query_total+")");
        $(db_preview).attr("data-label", "Library Staff");
      } else {
        $(db_preview).parent().hide();
      }
      var web_preview = $("a[href='#general_site_keyword_search-panel_pane_1']");
      var web_query_total = $("span[data-search-service='general_site_keyword_search-panel_pane_1']").attr('data-hit-count');
      if(web_query_total > 0) {
        $(web_preview).append(" ("+web_query_total+")");
        $(web_preview).attr("data-label", "Library Staff");
      } else {
        $(web_preview).parent().hide();
      }

      var preview = $(".result-section-menu a")
      $(preview).click(function() {
        ga('send', 'event', 'All Search', 'Skip to Section', $(this).attr("data-label"));
      });
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
        // var submenu = $('.submenu');
        var submenuToggle = $('.submenu-toggle');
        $(menuToggle).click(function (e) {
          e.preventDefault();
          menu.toggleClass('expanded');
        });

        $(submenuToggle).click(function (e) {
          e.preventDefault();
          $(this).siblings(".submenu").toggleClass("expanded");
        });

        // track main menu usage with Google Analytics
        $('.centered-navigation-menu ul.menu a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Main Menu', 'click', $(this).text());
          });
        });
      });
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

  Drupal.behaviors.pulTrackFooterMenuUsage = {
    attach: function (context) {
      $('.l-footer', context).once('pul', function () {
        $('.l-region--footer a').each(function () {
          $(this).addClass('footer-link');
          $(this).click(function () {
            ga('send', 'event', 'Footer Menu', 'click', $(this).text());
          });
        });

        $('.footer--icons a').each(function () {
          $(this).addClass('footer-link');
          $(this).click(function () {
            ga('send', 'event', 'Footer Menu', 'click', $(this).attr('title'));
          });
        });

        $('.pu--accessibility a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Footer Menu', 'click', $(this).text());
          });
        });

        $('.pu--logo a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Footer Menu', 'click', $(this).attr('title'));
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackNewsletterSubscriptionUsage = {
    attach: function (context) {
      $('.l-page', context).once('pul', function () {
        $('.pul_base_nine_three-region--second .newsletter-signup input').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Newsletter Subscription', 'Sidebar', $(this).attr('type'));
          });
        });
        $('.l-footer .newsletter-signup input').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Newsletter Subscription', 'Footer', $(this).attr('type'));
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackVideoEmbedUsage = {
    attach: function (context) {
      $('.section-news', context).once('pul', function () {
        $('.video-wrapper iframe').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Library News', 'Video Embed', $(this).attr('src'));
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
        $('.view-library-news .news__featured a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).addClass('library-news-link');
          $(this).click(function () {
            ga('send', 'event', 'Library News', 'Homepage', $(this).text() + ' Position ' + result_position);
          });
        });
        $('.view-library-news .field--name-body a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).addClass('library-news-link');
          $(this).click(function () {
            ga('send', 'event', 'Library News', 'Article', $(this).text());
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackNewsSidebarUsage = {
    attach: function (context) {
      $('.section-news', context).once('pul', function () {
        $('.view-news-and-events-categories a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Library News', 'Sidebar - Categories', $(this).attr('href'));
          });
        });
        $('.pane-menu-menu-library-news-and-events a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Library News', 'Sidebar - News and Events', $(this).attr('href'));
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackEventsUsage = {
    attach: function (context) {
      $('.landingpage-region', context).once('pul', function () {
        $('.events--homepage h3 a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'Library Events', 'click', $(this).text() + ' Position ' + result_position);
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackHomepageMoreLink = {
    attach: function (context) {
      $('.landingpage-region', context).once('pul', function () {
        $('.views-more-link').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'More Links', 'Homepage', $(this).text());
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
      $('.view-library-hours', context).once('pul', function () {
        $('.view-display-id-block_3 a').each(function (index, value) {
          $(this).addClass('library-hours-link');
          $(this).click(function () {
            ga('send', 'event', 'Library Hours', 'Homepage', $(this).find("h3").text());
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackAllHoursUsage = {
    attach: function (context) {
      $('.view-library-hours', context).once('pul', function () {
        $('.view-display-id-panel_pane_2 a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Library Hours', 'All Hours', $(this).text());
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackStaffDirectoryUsage = {
    attach: function (context) {
      $('.section-staff', context).once('pul', function () {
        $('.view-staff-list-browse a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Directory', 'Starts With', $(this).text());
          });
        });

        $('.view-staff-department-list a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Directory', 'Departments', $(this).text());
          });
        });

        $('.view-filters input').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Directory', 'Search', $(this).attr('type'));
          });
        });

        $('.views-table thead a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Directory', 'List', 'Sort by Name');
          });
        });

        $('.views-table tbody a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Directory', 'List', 'Clicked Name');
          });
        });

        $('.pager a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Directory', 'Pagination', $(this).text());
          });
        });

        // Individual staff page
        $('.user--email a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Directory', 'Staff Page', 'Email');
          });
        });

        $('.button--appointment a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Directory', 'Staff Page', 'Appointment');
          });
        });

        $('.view-specialist-finder a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Directory', 'Staff Page', 'Subjects');
          });
        });

        $('.pane-user-contact input[type="submit"]').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Directory', 'Staff Page', 'Contact Form');
          });
        });

        // specialists
        $('select option').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Specialist', 'Select a Subject', $(this).text());
          });
        });

        $('.views-field-name-1 a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Staff Specialist', 'Subject', $(this).text());
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackTabLinkUsage = {
    attach: function (context) {
      // all search tab
      $('#quicktabs-tabpage-homepage_search_tabs-0', context).once('pul', function () {
        $('#quicktabs-tabpage-homepage_search_tabs-0 input').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Search Box - Homepage', 'click', 'All Search');
          });
        });

        $('#quicktabs-tabpage-homepage_search_tabs-0 .homepage-tab-form-message a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Search Box - Homepage', 'click', $(this).text());
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackSectionPageUsage = {
    attach: function (context) {
      $('.pane-featured-pul-link-group-panel-pane-1', context).once('pul', function () {
        $('.view-featured-pul-link-group h3 a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Section Page', window.location.pathname, $(this).text());
          });
        });

        $('.view-featured-pul-link-group p a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Section Page', window.location.pathname, 'Link in Description');
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackLibrariesPageUsage = {
    attach: function (context) {
      $('.page-libraries', context).once('pul', function () {
        $('h2 a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Section Page', 'Libraries', $(this).text());
          });
        });

        $('.library-info a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Section Page', 'Libraries', $(this).closest('.views-row').find('h2').text() + ' - ' + $(this).text());
          });
        });

        $('.pul_base_nine_three-region--second a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Section Page', 'Libraries', 'Collections - ' + $(this).text());
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackAccountsPageUsage = {
    attach: function (context) {
      $('.section-accounts', context).once('pul', function () {
        $('.service-connect-btn a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Accounts', 'Access Button', $(this).text());
          });
        });

        $('.panel-pane li a').each(function () {
          console.log($(this).text())
          $(this).click(function () {
            ga('send', 'event', 'Accounts', 'More', 'Find out more about ' + $(this).text());
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackAllSearchUsage = {
    attach: function (context) {

      $('.page-find-all-results', context).once('pul', function () {

        // track best bets
        $('.view-all-search-best-bet .best-bet a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Best Bet', $(this).text());
          });
        });

        // track libraries and collections - click on library name
        $('.view-search-libraries-and-collections h3 a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Libraries and Collections', $(this).text());
          });
        });

        // track libraries and collections - click on homepage url
        $('.view-search-libraries-and-collections .views-field-field-library-homepage-url a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Libraries and Collections', 'Library Homepage');
          });
        });

        // track libraries and collections - click on telephone number
        $('.view-search-libraries-and-collections .views-field-field-phone a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Libraries and Collections', 'Phone Number');
          });
        });

        // track libraries and collections - click on email
        $('.view-search-libraries-and-collections .views-field-field-e-mail-address a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Libraries and Collections', 'Email');
          });
        });

        // track libraries and collections - click on collection homepage
        $('.view-search-libraries-and-collections .views-field-field-collection-url-url a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Libraries and Collections', 'Collection Homepage');
          });
        });

        // track libraries and collections - click on collection homepage
        $('.view-search-libraries-and-collections .views-field-field-digital-project-url a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Libraries and Collections', 'Project Website');
          });
        });

        // track database search for more results - top
        $('.pane-databases-keyword-search-panel-pane-2 h2 a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Databases', 'Refine Top');
          });
        });

        // track database search for more results - bottom
        $('.view-databases-keyword-search .more-link a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Databases', 'Refine Bottom');
          });
        });

        // track position of database search
        $('.view-databases-keyword-search .item-list .database-title').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Databases', 'Position ' + result_position);
          });
        });

        // track database related subjects search for more results - bottom
        $('.view-databases-subject-search .more-link a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Databases - Related Subjects', 'Refine Bottom');
          });
        });

        // track position of database related subjects
        $('.view-database-subject-search .item-list a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Databases - Related Subjects', 'Position ' + result_position);
          });
        });

        // track site search for more results - top
        $('.pane-general-site-keyword-search-panel-pane-1 h2 a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Library Website', 'Refine Top');
          });
        });

        // track site search for more results - bottom
        $('.view-general-site-keyword-search .more-link a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Library Website', 'Refine Bottom');
          });
        });
        
        // track position of site search
        $('.view-general-site-keyword-search .item-list .database-titles a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Library Website', 'Position ' + result_position);
          });
        });

        // track staff search for more results - top
        $('.pane-general-site-user-search-panel-pane-1 h2 a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Library Staff', 'Refine Top');
          });
        });

        // track staff search for more results - bottom
        $('.view-general-site-user-search .more-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Library Staff', 'Refine Bottom');
          });
        });

        // track position of staff search
        $('.view-general-site-user-search .item-list .user-link').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Library Staff', 'Position ' + result_position);
          });
        });

        // track staff search - email
        $('.view-general-site-user-search .item-list .user-link').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Library Staff', 'Email');
          });
        });

        // track staff search - phone
        $('.view-general-site-user-search .item-list .user-link').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Library Staff', 'Phone');
          });
        });

      });
    }
  };

  Drupal.behaviors.pulTrackDatabaseSectionUsage = {
    attach: function (context) {
      $('.section-databases', context).once('pul', function () {
        $('#tier_one_resources-panel_pane_1 .view-content a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Subject', 'Core Resources');
          });
        });

        $('#tier_one_resources-panel_pane_1 .view-footer a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Subject', 'Core Resources - RSS Feed');
          });
        });

        $('#tier_one_resources-panel_pane_2 .view-content a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Subject', 'Supplementary Resources');
          });
        });

        $('#tier_one_resources-panel_pane_2 .view-footer a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Subject', 'Supplementary Resources - RSS Feed');
          });
        });

        $('#tier_one_resources-panel_pane_3 .user--picture a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Subject', 'Librarian Photo');
          });
        });

        $('#tier_one_resources-panel_pane_3 .user--email a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Subject', 'Librarian Email');
          });
        });

        $('#tier_one_resources-lib_guides_pane a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Subject', 'Library Guide');
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackDatabaseResourceUsage = {
    attach: function (context) {
      $('.section-resource', context).once('pul', function () {
        $('.group-db-copyright-access a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Resource', 'Access Resource');
          });
        });

        $('.node--override-db-title a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Resource', 'Alternative Title');
          });
        });

        $('.group-db-desc-group a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Resource', 'Link in Description');
          });
        });

        $('.view-database-access-credentials a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Resource', 'Related Subjects');
          });
        });

        $('#dbsearch_block-dbsearch_search input').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Resource', 'Database Search Block');
          });
        });

        $('#summon_block-summon_search input').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Resource', 'Articles Search Block');
          });
        });

        $('.breadcrumb a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'Resource', $(this).text());
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackDatabaseListingUsage = {
    attach: function (context) {
      $('.section-research', context).once('pul', function () {
        $('#dbsearch-block-form input').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'List', 'Database Search Block');
          });
        });

        $('#databases_by_subject select').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'List', 'Choose Subject Dropdown');
          });
        });

        $('#databases_by_subject a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'List', 'See All Subjects');
          });
        });

        $('.view-clone-of-glossary .view-summary a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'List', 'Starts With');
          });
        });

        $('.view-clone-of-glossary table a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'List', $(this).text());
          });
        });

        $('.pane-specialist-finder select').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database', 'List', 'Find a Subject Librarian');
          });
        });

        $('.pane-clone-of-glossary-panel-pane-3 a').each(function (index, value) {
          $(this).click(function () {
            ga('send', 'event', 'Database ', 'List', 'New Databases');
          });
        });
      });
    }
  };

  Drupal.behaviors.pulTrackBranchUsage = {
    attach: function (context) {
      $('.branch-libraries', context).once('pul', function () {

        // branch main menus
        $('.branch-libraries .menu--secondary ul.menu a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Branch Menu', 'click', $(this).text());
          });
        });

        // branch quick links
        $('.branch-libraries .pane-node-field-branch-quick-link a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Branch Quick Links', 'click', $(this).text());
          });
        });

        // stokes links to catalog, databases, newspapers, on landing page
        $('.branch-libraries.libraries-stokes a.button--external-link').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Branch Quick Links', 'click', $(this).text());
          });
        });

        // branch external links
        $('.branch-libraries .pane-node-field-branch-external-links a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Branch External Links', 'click', $(this).text());
          });
        });

        // mendel external links
        $('.branch-libraries .pane-branch-features-panel-pane-1 a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Branch External Links', 'click', $(this).text());
          });
        });

        // branch featured resources
        $('.branch-libraries .pane-node-field-branch-featured-resources a').each(function () {
          $(this).click(function () {
            ga('send', 'event', 'Branch Featured Resources', 'click', $(this).text());
          });
        });

      });
    }
  };

})(jQuery);
