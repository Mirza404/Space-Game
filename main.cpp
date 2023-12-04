#include <SFML/Graphics.hpp>
#include "MainMenu.hpp"

int main()
{

    // Create the main window
    sf::RenderWindow *app = new sf::RenderWindow(sf::VideoMode(1280, 720), "SFML window");

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("gfx/title.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    sf::Font* mainFont = new sf::Font();
    if(!mainFont->loadFromFile("gfx/CascadiaCode.ttf"))
        return EXIT_FAILURE;

    MainMenu* m = new MainMenu(mainFont, app);
	// Start the game loop
    while (app->isOpen())
    {
        // Process events
        sf::Event event;
        while (app->pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app->close();
            else if (event.type == sf::Event::KeyPressed){
                m->event(event);
            }
        }

        // Clear screen
        app->clear(sf::Color(222,222,222,255));

        // Draw the sprite
        m->draw();
        app->draw(sprite);



        // Update the window
        app->display();
    }

    return EXIT_SUCCESS;
}
