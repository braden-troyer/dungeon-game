#ifndef ENEMIES_HPP_
#define ENEMIES_HPP_

#include "entity.hpp"

class Slime : public Entity {
public:
    Slime(sf::Vector2f position);
};

#endif