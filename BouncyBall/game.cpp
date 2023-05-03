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
    while (this->window.pollEvent(this->event)) 
    {
        if (this->event.type == Event::Closed) 
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



    this->window.display();
}

//// Chargement de l'image
//Texture texture;
//if (!texture.loadFromFile("img/ball.png"))
//return -1; // Erreur lors du chargement de l'image 
//
//// Création du sprite et affectation de la texture 
//Sprite sprite;
//sprite.setTexture(texture);
//
//// Redimensionnement du sprite
//sprite.setScale(0.3, 0.3); // Double la taille de l'image  
//
//// Positionnement du sprite
//sprite.setPosition(ball.getPosition()[0], ball.getPosition()[1]);
//
//
//// Boucle de jeu
//while (window.isOpen())
//{
//    // Gestion des événements
//    Event event;
//    while (window.pollEvent(event))
//    {
//        eventHandler(event, window);
//    }
//
//
//    sprite.setPosition(ball.getPosition()[0], ball.getPosition()[1]);
//    // Mise à jour et rendu
//    window.clear();
//    // Dessin de la scène ici
//    window.draw(sprite);
//    window.display();
//}