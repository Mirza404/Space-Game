#ifndef MAINMENU_HPP
#define MAINMENU_HPP
#include <SFML/Graphics.hpp>

class MainMenu
{
    public:
        MainMenu(sf::Font* _f, sf::RenderWindow* _rw);
        virtual ~MainMenu();
        void draw();
        void update(double dt);
        void event(sf::Event e);

    protected:

    private:
        sf::Font* f;
        sf::Text startLabel;
        sf::Text exitLabel;
        short int option = 0;
        sf::RenderWindow* rw;
};

#endif // MAINMENU_HPP
