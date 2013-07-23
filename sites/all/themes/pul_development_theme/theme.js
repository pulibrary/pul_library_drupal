(function ($) {
  $(document).ready(function() {

	$( "a", ".field-name-field-db-access-url" ).button();
        $( "a", ".service-connect-btn" ).button();
        
        $('.main-menu-item-title').replaceWith('<a href="/libraries">Libraries and Collections</a>');
        $('.view-display-id-block_1 .item-list:eq(1) ul').append("<li class='last leaf more'><a href='/collections' title='See All Collections'>More Collections</a></li>");
        $('.view-libraries-and-collections-combined .item-list:eq(1) ul').append("<li class='last leaf more'><a href='/collections' title='See All Collections'>More Collections</a></li>");

        //FIXME hack should be repaced by a module that allows viewOnlineLink to be set a drupal conf variable
	$('.node-type-database .field-name-field-db-access-url a, .node-type-alternative-database-title .field-name-field-db-access-url a').each(function(index){
		var viewOnlineLink = $(this).attr('href');
		undecodeViewOnline = viewOnlineLink.replace( /\&amp%3B|&amp;/g, '&' );
		console.log(undecodeViewOnline);
                var resolvePrefix = "http://libwebprod.princeton.edu/resolve/lookup?url=";
		$(this).attr('href', resolvePrefix+undecodeViewOnline);
		$(this).attr('target', '_blank');
	});
	

	/* toggle events for A to Z list */
        $(".find-databases-show-desc").each(function(index) {
		var id = $(this).attr('data-desc-id');
		$('#open'+id).click( function () {
			$('#desc'+id).toggle( function() {
				//$('#close'+id).show();
				//$('#close'+id).click(function () {
			        $('#open'+id+' i').replaceWith('<i class="icon-minus-sign"></i>');		
				//$('#open'+id).hide();
			});
		});
	});
	// empty descriptions
	//$(".page-find-databases .databases-find-description ").each(function(index) {
		
	//});
	$(".page-research-databases .resource-title a, .subject-landing-page .resource-title a, .page-research-databases-search a.database-title, .page-find-all-results a.database-title").each(function(index) {
		var data_access = $(this).find('span').attr('data-ezproxy-access');
		var access_url = $(this).find('span').attr('data-access-url');
		if(data_access === "0" || data_access == "No") {
			$(this).attr('href', access_url);
			$(this).attr('target', '_blank');
		}
		//var data_override_access = $(this).find('span').attr('data-override-proxy-access');
                //var override_access_url = $(this).find('span').attr('data-override-access-url');
                //if(data_override_access == "No") {
                //        $(this).attr('href', override_access_url);
                //        $(this).attr('target', '_blank');
                //}

	});


    // ADD GA Tracking Code to Internal All Search Block Pages
    //
    $('.page-find-all .view-databases-keyword-search .item-list .database-title').each(function(index,value) {
            result_position = parseInt(index) + 1;
            $(this).click( function() {
                _gaq.push(["_trackEvent", "All Search", "Database Title", 'Position'+result_position]);
            });
        }
    );

    // for subjects block
    $('.page-find-all .view-database-subject-search .item-list a').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "All Search", 'Database Subject', 'Position'+result_position]);
              });
          }
      );

    //general keyword search view
      $('.page-find-all .view-general-site-keyword-search .item-list .database-titles a').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "All Search", "Website Search", 'Position'+result_position]);
              });
          }
      );

    //people search
      $('.page-find-all .view-general-site-user-search .item-list .user-link').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "All Search", "People Search", 'Position'+result_position]);
              });
          }
      );

      // Add tracking codes to expand links on all search
      // refine-link = top class more-link - bottom
      $('.page-find-all .view-databases-keyword-search .refine-link a').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "Expand All Search", "Database", 'Top']);
              });
          }
      );

      // website search
      $('.page-find-all .view-general-site-keyword-search .refine-link a').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "Expand All Search", "Website Search", 'Top']);
              });
          }
      );


      $('.page-find-all .view-databases-keyword-search .more-link a').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "Expand All Search", "Database", 'Bottom']);
              });
          }
      );

      $('.page-find-all .view-databases-subject-search .more-link a').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "Expand All Search", "Subject Browse", 'Bottom']);
              });
          }
      );

      $('.page-find-all .view-general-site-user-search .more-link a').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "Expand All Search", "People Search", 'Bottom']);
              });
          }
      );

      $('.page-find-all .view-general-site-keyword-search .more-link a').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "Expand All Search", "Website Search", 'Bottom']);
              });
          }
      );
      // libraries and collections
      $('.page-find-all .view-search-libraries-and-collections h3 a').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "Expand All Search", "Libraries and Collections", 'Title']);
              });
          }
      );
      
      $('.page-find-all .view-search-libraries-and-collections .views-field-field-library-homepage-url a').each(function(index,value) {
              result_position = parseInt(index) + 1;
              $(this).click( function() {
                  _gaq.push(["_trackEvent", "Expand All Search", "Libraries and Collections", 'Homepage URL']);
              });
          }
      );
      
      
      
      // homepage news
      $('.front .block-library-news-block .views-more-link').each(function(index,value) {
            $(this).click( function() {
                _gaq.push(["_trackEvent", "Homepage", "More", 'News']);
            });
      });

      //.flexslider
      $('.front .flex-slider h3 a').each(function(index,value) {
          result_position = parseInt(index) + 1;
          $(this).click( function() {
              _gaq.push(["_trackEvent", "Homepage", "News Headline", 'Placement'+result_position]);
          });
      });

      //user portals .block-menu-menu-user-group-portals
      $('.front .block-menu-menu-user-group-portals li a').each(function(index,value) {
          $(this).click( function() {
              _gaq.push(["_trackEvent", "Homepage", "Portal Link", $(this).text()]);
          });
      });

      // hours
      $('.front .view-library-hours .views-more-link').each(function(index,value) {
          $(this).click( function() {
              _gaq.push(["_trackEvent", "Homepage", "More", 'Hours']);
          });
      });

      // each news item
      $('.front .view-library-hours table td a').each(function(index,value) {
          $(this).click( function() {
              _gaq.push(["_trackEvent", "Homepage", "Hours", $(this).text()]);
          });
      });
//	
//	 $(".find-databases-close-desc").each(function(index) {
//		var id = $(this).attr('data-desc-id');
//		 $('close'+id).click( function () {
//                        $('#open'+id).show();
//			$('#desc'+id).hide();
//			$(this).hide();
//                });
//	});
  });
}(jQuery));
