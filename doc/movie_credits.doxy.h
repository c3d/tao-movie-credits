/**
 * @taomoduledescription{MovieCredits, Movie Credits}
 *
 * Movie-style rolling credits
 *
 * MovieCredits is a collection of ready-to-use movie-style rolling credits.
 *
 * The module provides ready-to-use animation effects such as
 * @ref mc_star_wars_crawl. You can choose several credit styles,
 * text color and font styles to override the defaults.
 *
 * Here is an example (<a href="examples/movie_credits.ddd">movie_credits.ddd</a>):
 * @include movie_credits.ddd
 *
 * Here is a screen capture of this document:
 * @image html "movie_credits.png" "Output from movie_credits.ddd"
 *
 * @endtaomoduledescription{MovieCredits}
 * @{
 */


//
// Variables
//

/**
 * Name of the texture to use for the starry background in Star Wars crawl
 */
text mc_swc_background_texture;

/**
 * Name of the texture to use for the planet in Star Wars crawl
 */
text mc_swc_planet_texture;

/**
 * Name of the texture to use for the planet clouds in Star Wars crawl
 */
text mc_swc_clouds_texture;


//
// Forms
//


/**
 * Draw a Star Wars style opening crawl
 * The duration of the crawl is approximately @a Duration seconds,
 * after which the camera pans downwards to reveal a planet
 * (see @ref mc_swc_planet_texture).
 * The text to display is given in @a Body. It may contain any standard
 * text formatting primitive such as @ref align,  @ref font or @ref color,
 * but suitable initial values are provided if none is specified.
 */
mc_star_wars_crawl(real Duration, tree Body);

/**
 * Draw a ship designed to integrate in a Star Wars crawl.
 * The ship appears after @a Delay seconds, moves at a speed of @a Speed
 * units per second towards the background. The rendering of the ship
 * is made by @a Body, and can use any rendering primitive (e.g. @ref object).
 */
mc_star_wars_crawl_ship(real Delay, real Speed, tree Body);


/**
 * Draw end credits that last @a Duration seconds and scroll at @a Speed
 * pixels per second. The @a Body tree contains the description of the
 * body of the credits. This body should primarily use @ref mc_credit
 * to display a single credit and @ref mc_credits_section to display
 * a section (e.g. "CAST").
 */
mc_credits(real Duration, real Speed, tree Body);

/**
 * Draw the credits for a single individual in the cast.
 * @a Role is displayed on the left, right-aligned.
 * @a Name is displayed on the right, left-aligned.
 */

mc_credit(text Role, text Name);


/**
 * Draw a section, for example to announce the cast.
 * @a Height specifies the height of the box in which the section is shown.
 * @a Body specifies the contents of the section. It may include text
 * or graphics. The @a Body executes in a @ref text_box.
 */
mc_credits_section(real Height, tree Body);

/**
 * @}
 */
