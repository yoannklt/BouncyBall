#include "Entity.hpp"

Entity::Entity()
{
	Texture texture;
	if (!texture.loadFromFile("img/ball.png"))
		return; // Erreur lors du chargement de l'image 

	// Création du sprite et affectation de la texture 
	this->sprite.setTexture(texture);
}


Sprite Entity::getSprite()
{
	return this->sprite;
}