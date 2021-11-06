#include "entity.hpp"

Entity::Entity()
{
    
}

Entity::Entity(sf::Sprite sp, sf::Vector2f lc, sf::RectangleShape hb) {
    sprite = sp;
    hitbox = hb;
    hitbox.setPosition(lc);
}

bool Entity::isColliding(Entity tmp) {
    return hitbox.getGlobalBounds().intersects(tmp.hitbox.getGlobalBounds());
}