#include "Game.hpp"

Game::Game()
{
    // Création de la fenêtre
    this->window.create(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Window"); 


    
}

void Game::start()
{
    while (this->window.isOpen()) 
    {
        // Events
        eventHandler();

        // Update
        update(); 

        // Display
        display();
    }
}

void Game::eventHandler()
{
    Event event;
    while (this->window.pollEvent(event)) 
    {
        if (event.type == Event::Closed) 
            this->window.close(); 
    }
}

void Game::update()
{

}

void Game::display()
{
    // Met à jour le rendu
    this->window.clear(); 

    for (int i = 0; i < 1; i++) 
    {
        this->window.draw(this->entityList[i]->image.sprite);
    }

    this->window.display(); 
}

int Game::imageCreation(string name) 
{
	this->entityList = &this->player;

	if (&this->images[name])
    {
		cout << "ball loaded" << endl;
        return 0;
    }
	
    string path = "img/" + name + ".png";

	if (!this->playerImage.texture.loadFromFile(path)) 
		return 1; // Erreur lors du chargement de l'image 

	// Création du sprite et affectation de la texture 
	this->playerImage.sprite.setTexture(this->playerImage.texture);
	this->images["ball"] = this->playerImage;
    cout << "ball created" << endl; 
    return 0;
}