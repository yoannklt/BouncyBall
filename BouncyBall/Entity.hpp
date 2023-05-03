#pragma once

#include "SFML/Graphics.hpp"

using namespace sf;

class Entity
{
public:
	Entity();
	Sprite getSprite();

private:
	Sprite sprite;

};

