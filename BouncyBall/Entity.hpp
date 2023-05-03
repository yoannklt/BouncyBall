#pragma once

#include "SFML/Graphics.hpp"

using namespace sf;

class Entity
{
public:
	Entity();
	virtual void draw(RenderWindow window) = 0; // Méthode virtuelle pure

private:

};

