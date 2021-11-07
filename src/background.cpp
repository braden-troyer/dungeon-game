#include "background.hpp"
#include "macros.hpp"
#include <random>

Background::Background(SpriteSheet sheet) {
    sf::Sprite sprite;

    sprite.setPosition(sf::Vector2f(0.f, 0.f));

    
    
    for (int i = 0; i < ROWS; i++) {
        vct.push_back(std::vector<sf::Sprite>());
        for (int j = 0; j < COLUMNS; j++) {
            vct[i].push_back(sprite);
            sprite.move(sf::Vector2f(32, 0));
        }
        sprite.setPosition(sf::Vector2f(0.f, 0.f));
        sprite.move(0, 32 * i);
    }
}

void Background::setBackground(std::vector<std::vector<sf::Sprite>> tmp) {
    vct = tmp;
}

void Background::drawBackground(sf::RenderWindow *window) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            window->draw(vct[i][j]);
        }
    }
}