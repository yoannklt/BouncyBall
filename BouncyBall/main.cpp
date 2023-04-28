#include "SFML/Graphics.hpp"

#define WINDOW_SIZE 640

int main()
{
    // Cr�ation de la fen�tre
    sf::RenderWindow window(sf::VideoMode(WINDOW_SIZE, WINDOW_SIZE), "Bouncy Ball");

    // Boucle de jeu
    while (window.isOpen())
    {
        // Gestion des �v�nements
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // Mise � jour et rendu
        window.clear();
        // Dessin de la sc�ne ici
        window.display();
    }

    return 0;
}