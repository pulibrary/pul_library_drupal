(function ($) {

  Drupal.behaviors.rbscExhibitionDisplay = {
    attach: function (context) {
      function exhibitionDisplay(endDate){

          var text = "Previously ";

          var day = endDate.split("T");
          var daySplit = day[0].split("-");
          var dUTC = Date.UTC(daySplit[0],daySplit[1],daySplit[2]);
          var now = new Date();
          if (dUTC > now){
            text = "Now ";
          }
          return text;
        }

        endDate = jQuery( ".date-display-end" ).attr( 'content' );
        if (endDate){
          jQuery( ".view-exhibition-view .views-label-title" ).prepend( exhibitionDisplay(endDate) );
        }

    }
  };

  // Drupal.behaviors.rbscMobileMenu = {
  //   attach: function (context, settings) {
  //     // By using the 'context' variable we make sure that our code only runs on
  //     // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
  //     // we don't run the same piece of code for an HTML snippet that we already
  //     // processed previously. By using .once('foo') all processed elements will
  //     // get tagged with a 'foo-processed' class, causing all future invocations
  //     // of this behavior to ignore them.

  //     var subMenuToggle = $('.bigdrop').unbind();
  //     $('.bigdrop ~ .menu').removeClass("show");

  //     subMenuToggle.on('click', function (e) {
  //       e.preventDefault();
  //       var target = $( e.target );
  //       target.siblings().slideToggle();
  //     });

  //   }
  // };

  Drupal.behaviors.rbscHours = {
    attach: function (context, settings) {
      $('.hours--library-status').once('rbsc', function() {
        var hours_base = "/utils/hours/rbsc";
        $.ajax({
          url: hours_base,
          async: true,
          type: 'GET',
          dataType: 'json',
          success: function(data) {
            $('.hours--library-status').replaceWith("<span class='hours--library-status'>" + "Today: " + data['mudd-hours'] + "</span>");
          },
          error: function(data) {
            $('.hours--library-status').replaceWith("<span class='hours--library-status'>Hours Not Available</span>");
          },
          timeout: 5000
        });
      });
    }
  };

  Drupal.behaviors.rbscTabs = {
    attach: function (context, settings) {
      $(document).ready(function () {
          var url_parts = document.referrer.replace(/\/\s*$/,'').split('/');
          var divisionString = url_parts[url_parts.length-1].toString().toLowerCase().trim()
                .replace(/\s+/g, '-')           // Replace spaces with -
                .replace(/&/g, '-and-')         // Replace & with 'and'
                .replace(/[^\w\-]+/g, '')       // Remove all non-word chars
                .replace(/\-\-+/g, '-');        // Replace multiple - with single -

          var parentString = url_parts[url_parts.length-2];
          var refClassName = '.-divisions-' + divisionString;

          $('.accordion-tabs').each(function(index) {
            if ($(refClassName).length && parentString === 'divisions') {
              $(refClassName).addClass('is-active').next().addClass('is-open').show();
            } else {
              $(this).children('li').first().children('h2').addClass('is-active').next().addClass('is-open').show();
            }
          });

          $('.accordion-tabs').on('click', 'li > h2.tab-link', function(event) {
            event.preventDefault();
            if (!$(this).hasClass('is-active')) {
              var accordionTabs = $(this).closest('.accordion-tabs');
              accordionTabs.find('.is-open').removeClass('is-open').hide();

              $(this).next().toggleClass('is-open').toggle();
              accordionTabs.find('.is-active').removeClass('is-active');
              $(this).addClass('is-active');
            }

          });
        });
    }
  }

  Drupal.behaviors.rbscSearchLocalTabBehavior = {
    attach: function (context) {
      var basic_preview = $("a[href='#rbsc_basic_node_search-panel_pane_1']");
      var basic_query_total = $("span[data-search-service='rbsc_basic_node_search-panel_pane_1']").attr('data-hit-count');
      if(basic_query_total > 0) {
        $(basic_preview).append(" ("+basic_query_total+")");
      } else {
        $(basic_preview).parent().hide();
      }
      var blog_preview = $("a[href='#blog_search-panel_pane_2']");
      var blog_query_total = $("span[data-search-service='blog_search-panel_pane_2']").attr('data-hit-count');
      if(blog_query_total > 0) {
        $(blog_preview).append(" ("+blog_query_total+")");
      } else {
        $(blog_preview).parent().hide();
      }
    }
  };


 Drupal.behaviors.rbscTrackFooterMenuUsage = {
   attach: function (context) {
     $('.l-region--footer', context).once('rbsc', function () {
       $('.l-region--footer .block a').each(function () {
         $(this).addClass('footer-link');
         $(this).click(function () {
           console.log('Footer fired!');
           ga('send', 'event', 'Footer Menu', 'click', $(this).text(),
             {'page': window.location.pathname});
         });
       });
     });
   }
 };

 Drupal.behaviors.rbscTrackTopicUsage = {
   attach: function (context) {
     $('.view-topics', context).once('rbsc', function () {
       $('.view-topics li a').each(function () {
         $(this).addClass('topic-link');
         $(this).click(function () {
           ga('send', 'event', 'Topic Link', 'click', $(this).text(),
             {'page': window.location.pathname});
         });
       });
     });
   }
 };

 Drupal.behaviors.rbscTrackGridMenusUsage = {
   attach: function (context) {
     $('.menu-grid', context).once('rbsc', function () {
       $('.menu-grid .pane-node a').each(function () {
         $(this).addClass('menu-grid-link');
         $(this).click(function () {
           ga('send', 'event', 'Grid Menu Link', 'click', $(this).attr('href'),
             {'page': window.location.pathname});
         });
       });
     });
   }
 };

 Drupal.behaviors.rbscTrackMainMenuUsage = {
   attach: function (context) {
     $('.l-region--navigation', context).once('rbsc', function () {
       $('.l-region--navigation .menu a').each(function () {
         $(this).addClass('main-menu-link');
         $(this).click(function () {
           ga('send', 'event', 'Main Menu Link', 'click', $(this).attr('href'),
             {'page': window.location.pathname});
         });
       });
     });
   }
 };

 Drupal.behaviors.rbscTrackAllSearchUsage = {
    attach: function (context) {

      $('.page-find-all').once('rbsc', function () {

        // for website content block
        $('#rbsc_basic_node_search-panel_pane_1 .item-list .rbsc-local-content-title').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Website Search', 'Position ' + result_position);
          });
        });

        // for blogs block
        $('#pane-blog-search-panel-pane-2 .item-list .field-content').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Blog Search', 'Position ' + result_position);
          });
        });


        $('#rbsc_basic_node_search-panel_pane_1 .more-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Website Search', 'Bottom');
            });
        });

        $('#pane-blog-search-panel-pane-2 .more-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Blog Search', 'Bottom');
            });
        });


      });
    }
  };


})(jQuery);
