#include "Entity.hpp"

Entity::Entity()
{
	if (!this->texture.loadFromFile("img/ball.png"))
		return; // Erreur lors du chargement de l'image 

	// Création du sprite et affectation de la texture 
	this->sprite.setTexture(this->texture); 
}

Sprite Entity::getSprite()
{
	return this->sprite;
}