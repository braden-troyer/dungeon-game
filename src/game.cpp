#include "game.hpp"
#include "enemies.hpp"

Game::Game() : 
    mWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Dungeon-Game"), 
    mPlayer(), 
    player(), 
    spritesheetb("resources/Wall_Floor_Spritesheet.png"),   
    background(spritesheetb.sprite_list[1][1]) 
{
    
}

void Game::run() {
    sf::Clock clock;
    sf::Time t1, t2;
    clock.restart();
    t1 = clock.getElapsedTime();
    t2 = t1 + sf::milliseconds(10);
    while (mWindow.isOpen()) {
        t1 = clock.getElapsedTime();
        if (t1 > t2)
        {
            processEvents();
            update();
            render();
            clock.restart();
        }
    }
}

void Game::processEvents() {
    sf::Event event;
    while (mWindow.pollEvent(event)) {
        switch (event.type) {
            case sf::Event::KeyPressed:
                handlePlayerInput(event.key.code, true);
                break;
            case sf::Event::KeyReleased:
                handlePlayerInput(event.key.code, false);
                break;
            case sf::Event::Closed:
                mWindow.close();
                break;
        }
    }
}

void Game::handlePlayerInput(sf::Keyboard::Key key, bool isPressed) {
    switch (key) {
        case sf::Keyboard::W:
            isMoving[north] = isPressed;
            break;
        case sf::Keyboard::D:
            isMoving[east] = isPressed;
            break;
        case sf::Keyboard::S:
            isMoving[south] = isPressed;
            break;
        case sf::Keyboard::A:
            isMoving[west] = isPressed;
    }
}

void Game::update() {
    sf::Vector2f velocity(0.f, 0.f);

    if (isMoving[north])
        velocity.y -= 1;
    if (isMoving[east])
        velocity.x += 1;
    if (isMoving[south])
        velocity.y += 1;
    if (isMoving[west])
        velocity.x -= 1;

    player.sprite.move(velocity);
}

void Game::render() {
    mWindow.clear();
    background.drawBackground(&mWindow);
    mWindow.draw(player.sprite);
    mWindow.display();
}
