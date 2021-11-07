#include "enemies.hpp"
#include <iostream>

Slime::Slime(sf::Vector2f position) {
    
    if (!texture.loadFromFile("resources/Slime_Sprite.png"))
        std::cout << "File Loading Failed" << std::endl;
    sprite.setTexture(texture);

    sprite.setPosition(position);

    hp = 2;
    attack = 1;
}