(function($) {
  $(document).ready(function() {
    var query_url = $("#pudl-search-results").attr("data-source");
    var file_icon = "icon-data-file";
    var audio_icon = "icon-audio";
    var text_icon = "icon-text";
    var book_icon = "icon-book";
    var music_icon = "icon-musical-score";
    var image_icon = "icon-visual-material";
    var manuscript_icon = "icon-manuscript";
    var map_icon = "icon-map";
    var refine_hint = "Explore Digital PUL content.";
    var refine_icon = "";
    var refine_message = "See All Digital PUL Content";
    if (query_url === "" || query_url == undefined) {
      $('<div class="message">Please supply search terms</div>').appendTo(
        "#pudl-search-results"
      );
    } else {
      $.ajax({
        url: query_url,
        async: true,
        type: "GET",
        dataType: "json",
        //contentType: "application/json; charset=utf-8",
        success: function(data) {
          var items = [];
          // add an icon map for format types
          var icon_type;
          if (data.number > 0) {
            $.each(data.records, function(index, result) {
              if (
                result["type"][0] == "Still image" ||
                result["type"][0] == "Prints (visual works)" ||
                result["type"][0] == "Visual material"
              ) {
                var icon_type = image_icon;
              } else if (
                result["type"][0] == "video" ||
                result["type"][0] == "film"
              ) {
                var icon_type = film_icon;
              } else if (result["type"][0] == "Audio") {
                var icon_type = audio_icon;
              } else if (
                result["type"][0] == "Text" ||
                result["type"][0] == "Journal"
              ) {
                var icon_type = text_icon;
              } else if (result["type"][0] == "Book") {
                var icon_type = book_icon;
              } else if (result["type"][0] == "Cartographic") {
                var icon_type = map_icon;
              } else if (
                result["type"][0] == "Text (manuscript)" ||
                result["type"][0] == "Mixed material (manuscript)" ||
                result["type"][0] == "Still image (manuscript)" ||
                result["type"][0] == "Cartographic (manuscript)" ||
                result["type"][0] == "Manuscript"
              ) {
                var icon_type = manuscript_icon;
              } else if (
                result["type"][0] == "Notated music" ||
                result["type"][0] == "Musical score"
              ) {
                var icon_type = music_icon;
              } else {
                var icon_type = null;
              }
              if (index % 2 == 0) {
                var row_class = "odd";
              } else {
                var row_class = "even";
              }
              var result_position = parseInt(index) + 1;
              items.push(
                '<li class="' +
                  row_class +
                  '"><h3><a target="_blank" href="' +
                  result["url"] +
                  '" target="_blank">' +
                  result["title"] +
                  "</a></h3>" +
                  '<div class="all-search-excerpt">Collection: ' +
                  result["collection"] +
                  "</div>" +
                  '<div class="all-format-type"><i class="' +
                  icon_type +
                  '"></i>' +
                  result["type"] +
                  "</div></li>"
              );
            });
            $("#pudl-search-results-spinner").hide();
            $("<ul/>", {
              class: "all-search-results-list",
              html: items.join("")
            }).appendTo("#pudl-search-results");
            // $('<div class="puld-search refine-link">'+refine_icon+'<a target="_blank" title="'+refine_message+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#pudl-search-results');
            $("#catalog_block-catalog_pudl_results h2").replaceWith(function() {
              var url = $.trim($(this).text());
              return (
                '<h2><a title="' +
                refine_hint +
                " " +
                data.number +
                ' total results." href="' +
                data.more +
                '"><i class="icon-digital"></i>Digital PUL</a></h2>'
              );
            });
            if (data.number > 3) {
              $(
                '<div class="puld-search more-link"><a target="_blank" title="' +
                  refine_hint +
                  " " +
                  data.number +
                  ' total results." href="' +
                  data.more +
                  '">See all Digital PUL results</a></div>"'
              ).appendTo("#pudl-search-results");
            }

            // update preview button with hit count
            var preview = $("a[href='#catalog_block-catalog_pudl_results']");
            if (data.number > 0) {
              $(preview).append(" (" + data.number + ")");
            }
            var section_heading = "PUDL"; // Should be in Drupal Settings
            $(preview).click(function() {
                ga('send', 'event', 'All Search', 'Skip to Section',section_heading);
            });

            $("#catalog_block-catalog_pudl_results h2 a").each(function(
              index,
              value
            ) {
              //console.log('processing header');
              //$(this).closest('h2.pane-title').text();
              $(this).click(function() {
                ga(
                  "send",
                  "event",
                  "All Search",
                  section_heading,
                  "Refine Top"
                );
              });
            });

            $(".pudl-search.more-link a").each(function(index, value) {
              //var section_heading = $(this).closest('h2.pane-title').text();
              $(this).click(function() {
                ga(
                  "send",
                  "event",
                  "All Search",
                  section_heading,
                  "Refine Bottom"
                );
              });
            });

            $("#pudl-search-results .all-search-results-list h3 a").each(
              function(index, value) {
                //var section_heading = $(this).closest('h2.pane-title').text();
                var result_position = parseInt(index, 10) + 1;
                $(this).click(function() {
                  ga(
                    "send",
                    "event",
                    "All Search",
                    section_heading,
                    "Position " + result_position
                  );
                });
              }
            );
          } else {
            var preview = $("a[href='#catalog_block-catalog_pudl_results']");
            $(preview)
              .parent()
              .hide();
            $("#pudl-search-results-spinner").hide();
            $(
              '<div class="no-results">No digital library results found. Try searching for another topic.</div>"'
            ).appendTo("#pudl-search-results");
          }
        },
        error: function(data) {
          $("#pudl-search-results-spinner").hide();
          $(
            '<div class="all-fail-to-load-results">Digital PUL  results are not available at this time.</div>"'
          ).appendTo("#pudl-search-results");
        },
        timeout: 5000
      });
    }
  });
})(jQuery);
