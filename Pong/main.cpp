// Copyright 2022 MrSmiler

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>


int main()
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    sf::RenderWindow window(sf::VideoMode(1280, 768), "Hello Window");
    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Enter)
                {
                    window.create(desktop, "Hello Window",
                                  sf::Style::Fullscreen);
                }
            }
        }

        window.clear();
        window.display();
    }
    return 0;
}
