#include <cstdio>
#include "SFML/Graphics.hpp"
#include "ball.hpp"

#define WINDOW_WIDTH 1080
#define WINDOW_HEIGHT 720


int main()
{ 
    Ball ball(100, 100);     
    
    // Création de la fenêtre
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Bouncy Ball"); 

    // Mise en mode plein écran
    // window.create(sf::VideoMode::getDesktopMode(), "Ma fenêtre", sf::Style::Fullscreen);

    // Chargement de l'image
    sf::Texture texture;
    if (!texture.loadFromFile("img/ball.png"))
        return -1; // Erreur lors du chargement de l'image

    // Création du sprite et affectation de la texture
    sf::Sprite sprite;
    sprite.setTexture(texture);

    // Redimensionnement du sprite
    sprite.setScale(0.3, 0.3); // Double la taille de l'image 

    // Positionnement du sprite
    sprite.setPosition(ball.getPosition()[0], ball.getPosition()[1]); 


    // Boucle de jeu
    while (window.isOpen())
    {
        // Gestion des événements
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (event.type == sf::Event::KeyPressed)
            {
                ball.Update(); 
            }
        }

        
        sprite.setPosition(ball.getPosition()[0], ball.getPosition()[1]); 
        // Mise à jour et rendu
        window.clear();
        // Dessin de la scène ici
        window.draw(sprite);
        window.display();
    }

    return 0;
}