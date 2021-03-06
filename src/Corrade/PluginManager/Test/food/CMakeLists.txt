#
#   This file is part of Corrade.
#
#   Copyright © 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015
#             Vladimír Vondruš <mosra@centrum.cz>
#
#   Permission is hereby granted, free of charge, to any person obtaining a
#   copy of this software and associated documentation files (the "Software"),
#   to deal in the Software without restriction, including without limitation
#   the rights to use, copy, modify, merge, publish, distribute, sublicense,
#   and/or sell copies of the Software, and to permit persons to whom the
#   Software is furnished to do so, subject to the following conditions:
#
#   The above copyright notice and this permission notice shall be included
#   in all copies or substantial portions of the Software.
#
#   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
#   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
#   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
#   DEALINGS IN THE SOFTWARE.
#

corrade_add_plugin(HotDog ${CMAKE_CURRENT_BINARY_DIR} "" HotDog.conf HotDog.cpp)
corrade_add_plugin(HotDogWithSnail ${CMAKE_CURRENT_BINARY_DIR} "" HotDogWithSnail.conf HotDog.cpp)
corrade_add_plugin(OldBread ${CMAKE_CURRENT_BINARY_DIR} "" OldBread.conf OldBread.cpp)
corrade_add_plugin(RottenTomato ${CMAKE_CURRENT_BINARY_DIR} "" RottenTomato.conf RottenTomato.cpp)

if(CORRADE_TARGET_WINDOWS)
    target_link_libraries(HotDog CorradePluginManagerTestLib Dog)
    target_link_libraries(HotDogWithSnail CorradePluginManagerTestLib HotDog)
    target_link_libraries(OldBread CorradePluginManagerTestLib)
    target_link_libraries(RottenTomato CorradePluginManagerTestLib)
endif()
