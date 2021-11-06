#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include <SFML/Graphics.hpp>

class Entity {
public:
    int hp;
    int attack;
    sf::Vector2f velocity;
    sf::Texture texture;
    sf::Sprite sprite;
    sf::RectangleShape hitbox;

    bool isMovingUp, isMovingDown, isMovingLeft, isMovingRight;

    Entity();

    Entity(sf::Sprite sp, sf::Vector2f lc, sf::RectangleShape hb);

    bool isColliding(Entity tmp);
};

#endif