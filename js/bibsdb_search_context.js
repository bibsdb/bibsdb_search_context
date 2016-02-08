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

  $(document).bind("ajaxComplete", function(){
    //$(".pane-search-context a").prop("href", "http://www.jakcms.com");
    var context_name = Drupal.settings.ting_search_context_name;
    var param = "&WT.ac=" + context_name;

    $('.pane-search-context a').each(function(index) {
      var href = $(this).prop("href");
      $(this).prop("href", href + param);  
    });

    console.log($('.pane-search-context').html());

  });

 
})(jQuery);
