#include "MainMenu.hpp"
#include <iostream>

MainMenu::MainMenu(sf::Font* _f, sf::RenderWindow* _rw)
{
    //ctor
    std::cout << "Main Menu entered!";
    f = _f;
    rw = _rw;

    startLabel.setFont(*f);
    startLabel.setString("> Start Game");
    startLabel.setCharacterSize(24);
    startLabel.setFillColor(sf::Color::White);
    startLabel.setOutlineColor(sf::Color::Black);
    startLabel.setOutlineThickness(1);
    startLabel.setPosition(32, 200);

    exitLabel.setFont(*f);
    exitLabel.setString("  Exit");
    exitLabel.setCharacterSize(24);
    exitLabel.setFillColor(sf::Color::White);
    exitLabel.setOutlineColor(sf::Color::Black);
    exitLabel.setOutlineThickness(1);
    exitLabel.setPosition(32, 228);

}

MainMenu::~MainMenu()
{
    //dtor
}

void MainMenu::draw() {
    rw->draw(startLabel);
    rw->draw(exitLabel);
}

void MainMenu::update(double dt){

}

void MainMenu::event(sf::Event e){

    if (e.key.code == sf::Keyboard::S){
        option = 1;
        startLabel.setString("  Start Game");
        exitLabel.setString("> Exit");
    }
    else if (e.key.code == sf::Keyboard::W){
        option = 0;
        startLabel.setString("> Start Game");
        exitLabel.setString("  Exit");
    }
    else if (e.key.code == sf::Keyboard::Enter){
        (option == 1) ? rw->close() : void();
    }

}
