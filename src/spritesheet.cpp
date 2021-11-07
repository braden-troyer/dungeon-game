#include "spritesheet.hpp"

SpriteSheet::SpriteSheet(std::string s) {
    sheet.loadFromFile(s);

    sf::Vector2f sheet_size(sheet.getSize());
    int rows = sheet_size.y / SPRITE_HEIGHT;
    int columns = sheet_size.x / SPRITE_WIDTH;

    rectSprite = sf::IntRect(0, 0, SPRITE_WIDTH, SPRITE_HEIGHT);

    sf::Sprite tmp(sheet, rectSprite);

    for (int i = 0; i < rows; i++) {
        sprite_list.push_back(std::vector<sf::Sprite>());
        for (int j = 0; j < columns; j++) {
            sprite_list[i].push_back(tmp);
            rectSprite.left += SPRITE_WIDTH;
            tmp.setTextureRect(rectSprite);
        }
        rectSprite.left = 0;
        rectSprite.top += SPRITE_HEIGHT;
        tmp.setTextureRect(rectSprite);
    }
}