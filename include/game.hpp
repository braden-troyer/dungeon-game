#ifndef GAME_HPP_
#define GAME_HPP_

#include <SFML/Graphics.hpp>
#include <vector>
#include "enemies.hpp"
#include "spritesheet.hpp"
#include "macros.hpp"
#include "background.hpp"

enum {
    north, east, south, west
};

class Game {
public:
    Game();
    void run();

private:
    void processEvents();
    void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
    void update();
    void render();

    sf::RenderWindow mWindow;
    sf::Sprite mPlayer;

    SpriteSheet spritesheetb;
    Background background;

    std::vector<bool> isMoving  = {false, false, false, false};

    std::vector<Entity> vct;
    Slime player;
};

#endif