#ifndef SPRITESHEET_HPP_
#define SPRITESHEET_HPP_

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include "macros.hpp"

class SpriteSheet {
public:
    sf::Texture sheet;
    sf::IntRect rectSprite;
    std::vector<std::vector<sf::Sprite>> sprite_list;

    SpriteSheet(std::string s);
};

#endif