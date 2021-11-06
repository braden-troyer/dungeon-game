#include "enemies.hpp"
#include <iostream>

Slime::Slime() {
    
    if (!texture.loadFromFile("resources/Slime_Sprite.png"))
        std::cout << "File Loading Failed" << std::endl;
    sprite.setTexture(texture);

    sprite.setPosition(100.f, 100.f);

    hp = 2;
    attack = 1;
}