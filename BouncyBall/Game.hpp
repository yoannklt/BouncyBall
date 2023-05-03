#pragma once

#include <cstdio>
#include "SFML/Graphics.hpp"
#include "Player.hpp"

#define WINDOW_WIDTH 1080
#define WINDOW_HEIGHT 720

using namespace sf;

class Game
{
public:
    Game();

    RenderWindow window;
    
    void start();


    Entity* entityList[1];
    Player player;
    void eventHandler();
    void update();
    void display();
private:

};