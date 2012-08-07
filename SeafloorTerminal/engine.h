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
