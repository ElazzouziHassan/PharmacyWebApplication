
$('.hero__categories__all').on('click', function(){
  $('.hero__categories ul').slideToggle(400);
});
/* $(document).ready(function() {
    $(".hero__categories").click(function() {
      $(".dropdown-content").toggle();
    });
  });
 */
  $(document).ready(function() {
    $(".hero__categories").click(function() {
      setTimeout(function() {
        $(".dropdown-content").toggle(500);
      }, 500);
    });
  });