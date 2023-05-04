#pragma once

#include "SFML/Graphics.hpp"

using namespace sf;

class Entity
{
public:
	Entity();
	Sprite getSprite();

	struct objImage {
		Texture texture;
		Sprite sprite;
	};
	objImage image;

private:
};

