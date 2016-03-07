/**
 * @file
 * Handles the carousels loading of content. The carousel can be loaded in three
 * different locations on the search page. A Drupal.settings variable indicates
 * the desired location.
 * two selectors to change tabs based on breaks points (which is handle by the
 * theme).
 *
 * For large screens the normal tab list (ul -> li) is used while on small
 * screens (mobile/tables) a select dropdown is used.
 *
 */
(function ($) {
  "use strict";

  $(document).bind("ajaxComplete", function() {
    var context_name = Drupal.settings.ting_search_context_name;
    

    // Only on internal links the Webtrends param is added by ting_search_context. 
    // We only append if it's there
    $(".pane-search-context a[href*='searchcontext']").each(function() {

      // Find title - sanitize - and append to param
      var title = $(this).find("h2").text();
      title = $.trim(title);
      title = title.replace(/[^a-z0-9-]/gi, '-').replace(/-+/g, '-').replace(/^-|-$/g, '');
      title = title.toLowerCase();
      var param = "WT.ac=" + context_name;
      param = param + ";" + title;
   
      // Work on href
      var href = $(this).prop("href");
      href = href.replace("WT.ac=searchcontext", param);
      if ($(this).prop("href").indexOf("WT.ac=" + context_name) == -1) {
        $(this).prop("href", href);
      }
    });
  });
 
})(jQuery);
