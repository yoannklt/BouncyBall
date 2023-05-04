#pragma once

#include <iostream>
#include <unordered_map>
#include "SFML/Graphics.hpp"
#include "Player.hpp"

#define WINDOW_WIDTH 1080
#define WINDOW_HEIGHT 720

using namespace sf;
using namespace std;



class Game
{
public:
    

    Game();

    RenderWindow window;

    
    
    objImage playerImage[1];
    Entity* entityList;
    Player player;
    std::unordered_map<std::string, objImage> images;

    void start();
    void eventHandler();
    void update();
    void display();
    int imageCreation(string name);
	
private:

};