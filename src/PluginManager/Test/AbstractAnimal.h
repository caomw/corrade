#ifndef Corrade_PluginManager_Test_AbstractAnimal_h
#define Corrade_PluginManager_Test_AbstractAnimal_h
/*
    Copyright © 2007, 2008, 2009, 2010, 2011, 2012
              Vladimír Vondruš <mosra@centrum.cz>

    This file is part of Corrade.

    Corrade is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License version 3
    only, as published by the Free Software Foundation.

    Corrade is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License version 3 for more details.
*/

#include "PluginManager/AbstractPlugin.h"

namespace Corrade { namespace PluginManager { namespace Test {

class AbstractAnimal: public AbstractPlugin {
    PLUGIN_INTERFACE("cz.mosra.Corrade.PluginManager.Test.AbstractAnimal/1.0")

    public:
        explicit AbstractAnimal() = default;
        explicit AbstractAnimal(AbstractPluginManager* manager, std::string plugin): AbstractPlugin(manager, std::move(plugin)) {}

        virtual std::string name() = 0;
        virtual int legCount() = 0;
        virtual bool hasTail() = 0;
};

}}}

#endif
