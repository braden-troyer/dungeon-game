#include "background.hpp"

Background::Background(sf::Sprite sprite) {
    bg = *(sprite.getTexture());
    sprite.setPosition(sf::Vector2f(0, 0));

    for (int i = 0; i < ROWS; i++) {
        vct.push_back(std::vector<sf::Sprite>());
        for (int j = 0; j < COLUMNS; j++) {
            vct[i].push_back(sprite);
            sprite.move(sf::Vector2f(32, 0));
        }
        sprite.setPosition(sf::Vector2f(0,0));
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