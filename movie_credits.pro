# ******************************************************************************
#  movie_credits.pro                                                Tao project
# ******************************************************************************
# File Description:
#
#    Qt build file for the MovieCredits module
#
#    MovieCredits is a set of pre-defined animation themes
#
#
#
# ******************************************************************************
# This software is property of Taodyne SAS - Confidential
# Ce logiciel est la propriété de Taodyne SAS - Confidentiel
# (C) 2011 Christophe de Dinechin <christophe@taodyne.com>
# (C) 2011 Taodyne SAS
# ******************************************************************************

MODINSTDIR = movie_credits

include(../modules.pri)

OTHER_FILES = movie_credits.xl \
    movie_credits2.xl \
    doc/movie_credits.png \
    doc/movie_credits.ddd \
    icon.png

PICTURES = \
    images/Planet-Map.jpg \
    images/Planet-Clouds.png \
    images/Movie-Stars-Background.jpg \
    $$NULL

pics.path  = $$MODINSTPATH/images
pics.files = $$PICTURES

BIN_XL_SOURCES = movie_credits2.xl
include(../serialize_xl.pri)

INSTALLS    += thismod_icon pics
INSTALLS    -= thismod_bin

HEADERS += \
    doc/movie_credits.doxy.h

LICENSE_FILES = movie_credits.taokey.notsigned
include(../licenses.pri)
