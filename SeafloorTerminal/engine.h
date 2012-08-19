/*
 * Copyright (C) 2012 Tomas Drbota
 *
 * This file is part of Seafloor Terminal.

 * Seafloor Terminal is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Seafloor Terminal is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Seafloor Terminal.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _ENGINE_H_
#define _ENGINE_H_

#include <SFML/Graphics.hpp>
#include <memory>

#include "input.h"

class Engine
{
public:
    void Start();

private:
    bool init();
    void handleInput();
    void update();
    void draw();

    std::unique_ptr<sf::RenderWindow> _window;
};

#endif
