#include "SFML/Graphics.hpp"

#define WINDOW_SIZE 640

int main()
{
    // Création de la fenêtre
    sf::RenderWindow window(sf::VideoMode(WINDOW_SIZE, WINDOW_SIZE), "Bouncy Ball");

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
        }

        // Mise à jour et rendu
        window.clear();
        // Dessin de la scène ici
        window.display();
    }

    return 0;
}