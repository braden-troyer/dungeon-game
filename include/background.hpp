#ifndef BACKGROUND_HPP_
#define BACKGROUND_HPP_

#include <SFML/Graphics.hpp>
#include <vector>
#include "spritesheet.hpp"

class Background {
public:
    sf::Texture bg;
    int height, width;
    std::vector<std::vector<sf::Sprite>> vct;

    Background(SpriteSheet sheet);
    void setBackground(std::vector<std::vector<sf::Sprite>> tmp);
    void drawBackground(sf::RenderWindow *window);
};



#endif