#include "engine.h"

void Engine::Start()
{
    if (this->init())
    {
        while (this->_window->isOpen())
        {
            this->handleInput();
            this->update();
            this->draw();
        }
    }
    else
    {
        // throw exception
    }
}

bool Engine::init()
{
    this->_window = std::unique_ptr<sf::RenderWindow>(new sf::RenderWindow(sf::VideoMode(1024, 768), "Seafloor Terminal"));
    
    return true;
}

void Engine::handleInput()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        Input::KeyEscapePressed = true;
    else
        Input::KeyEscapePressed = false;
}

void Engine::update()
{
    if (Input::KeyEscapePressed)
        this->_window->close();
}

void Engine::draw()
{
}
