// *****************************************************************************
// movie_credits.doxy.h                                            Tao3D project
// *****************************************************************************
//
// File description:
//
//
//
//
//
//
//
//
// *****************************************************************************
// This software is licensed under the GNU General Public License v3
// (C) 2011-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
// (C) 2011-2013, Catherine Burvelle <catherine@taodyne.com>
// (C) 2011-2014,2019, Christophe de Dinechin <christophe@dinechin.org>
// (C) 2011-2013, Jérôme Forissier <jerome@taodyne.com>
// (C) 2011-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
// *****************************************************************************
// This file is part of Tao3D
//
// Tao3D is free software: you can r redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Tao3D is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Tao3D, in a file named COPYING.
// If not, see <https://www.gnu.org/licenses/>.
// *****************************************************************************
/**
 * @~english
 * @taomoduledescription{MovieCredits, Movie Credits}
 * <tt>import MovieCredits</tt> - Movie-style rolling credits.@n
 *
 * MovieCredits is a collection of ready-to-use movie-style rolling credits.
 *
 * The module provides ready-to-use animation effects such as
 * @ref mc_star_wars_crawl. You can choose several credit styles,
 * text color and font styles to override the defaults.
 *
 * Here is an example:
 * @include movie_credits.ddd
 *
 * Here is a screen capture of this document:
 * @image html "movie_credits.png" "Movie credits"
 *
 * @endtaomoduledescription{MovieCredits}
 *
 * @~french
 * @taomoduledescription{MovieCredits, Génériques de films}
 * <tt>import MovieCredits</tt> - Affichage de textes à la manière de génériques de films.@n
 *
 * Le module MovieCredits propose des commandes telles que
 * @ref mc_star_wars_crawl, qui permettent de créer des animations avec du
 * texte et des images. Vous pouvez choisir parmi plusieurs styles de
 * génériques, et vous pouvez également choisir librement les couleurs et les
 * polices de caractères.
 *
 * Voici un exemple :
 * @include movie_credits.ddd
 *
 * @image html "movie_credits.png" "Exemple de générique"
 *
 * @endtaomoduledescription{MovieCredits}
 *
 * @~
 * @{
 */


//
// Variables
//

/**
 * @~english
 * Name of the texture to use for the starry background in Star Wars crawl.
 * @~french
 * Le fichier de texture à utiliser comme image de fond pour le générique Star Wars.
 */
text mc_swc_background_texture;

/**
 * @~english
 * Name of the texture to use for the planet in Star Wars crawl
 * @~french
 * Le fichier de texture à utiliser pour la planète dans le générique Star Wars.
 */
text mc_swc_planet_texture;

/**
 * @~english
 * Name of the texture to use for the planet clouds in Star Wars crawl
 * @~french
 * Le fichier de texture à utiliser pour les nuages dans le générique Star Wars.
 */
text mc_swc_clouds_texture;


//
// Forms
//


/**
 * @~english
 * Draw a Star Wars style opening crawl.
 * The duration of the crawl is approximately @p Duration seconds,
 * after which the camera pans downwards to reveal a planet
 * (see @ref mc_swc_planet_texture).
 * The text to display is given in @p Body. It may contain any standard
 * text formatting primitive such as @p align,  @p font or @p color,
 * but suitable initial values are provided if none is specified.
 * @~french
 * Affiche un texte défilant dans le style du générique d'ouverture de Star Wars.
 * La durée de défilement est d'environ @p Duration secondes,
 * après quoi la caméra s'incline vers le bas pour révéler une planète
 * (cf. @ref mc_swc_planet_texture).
 * Le texte à afficher est donné dans @p Body. Il peut contenir n'importe
 * quelle primitive de formattage de texte, par exemple @p align,  @p font
 * ou @p color. Les valeurs par défaut sont adaptées au style Star Wars.
 */
mc_star_wars_crawl(real Duration, tree Body);

/**
 * @~english
 * Draw a ship designed to integrate in a Star Wars crawl.
 * The ship appears after @p Delay seconds, moves at a speed of @p Speed
 * units per second towards the background. The rendering of the ship
 * is made by @p Body, and can use any rendering primitive (e.g. @p object).
 * @~french
 * Affiche un vaisseau spatial sur l'écran Star Wars.
 * Le vaisseau apparaît après @p Delay secondes, se déplace à une vitesse de
 * @p Speed unités par seconde vers le fond de l'écran. L'affichage du vaisseau
 * est fait par @p Body, et peut utiliser n'importe quelle primitive (par
 * exemple, @p object du module ObjectLoader).
 */
mc_star_wars_crawl_ship(real Delay, real Speed, tree Body);


/**
 * @~english
 * Draw end credits that last @p Duration seconds and scroll at @p Speed.
 * pixels per second. The @p Body tree contains the description of the
 * body of the credits. This body should primarily use @ref mc_credit
 * to display a single credit and @ref mc_credits_section to display
 * a section (e.g. "CAST").
 * @~french
 * Affiche un générique déroulant vertical.
 * @param Duration La durée d'affichage du générique en secondes.
 * @param Speed La vitesse en pixels par seconde.
 * @param Body Contient la description de ce qui doit être affiché.
 * Il est recommandé d'utiliser
 * @ref mc_credit pour afficher un seul élément et @ref mc_credits_section
 * pour créér un nouveau bloc (par exemple, "RÉALISATION").
 */
mc_credits(real Duration, real Speed, tree Body);

/**
 * @~english
 * Draw the credits for a single individual in the cast.
 * @param Role is displayed on the left, right-aligned.
 * @param Name is displayed on the right, left-aligned.
 * @~french
 * Affiche une ligne dans le générique déroulant.
 * @param Role est affiché dans la moitié gauche, aligné à droite.
 * @param Name est affiché dans la moitié droite, aligné à gauche.
 */
mc_credit(text Role, text Name);


/**
 * @~english
 * Draw a section, for example to announce the cast.
 * @param Height specifies the height of the box in which the section is shown.
 * @param Body specifies the contents of the section. It may include text
 * or graphics. The @p Body executes in a @p text_box.
 * @~french
 * Affiche un nouveau bloc dans le générique déroulant.
 * @param Height est la hauteur du bloc.
 * @param Body est le contenu du bloc. Il peut s'agir de texte et/ou d'éléments
 * graphiques. La paramètre @p Body s'exécute dans une @p text_box.
 */
mc_credits_section(real Height, tree Body);

/**
 * @}
 */
