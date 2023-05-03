#pragma once

#include <cstdio>
#include "SFML/Graphics.hpp"
#include "ball.hpp"

#define WINDOW_WIDTH 1080
#define WINDOW_HEIGHT 720

using namespace sf;

class Game
{
public:

    RenderWindow window;
    Event event;
    
    void start();

private:

    void eventHandler();
    void update();
    void display();

};