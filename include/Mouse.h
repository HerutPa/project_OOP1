#pragma once

#include "MovingObject.h"
#include "StaticObjects.h"
#include <SFML/Graphics.hpp>
//#include "Pacman.h"
//#include "Deamon.h"

class Mouse :public movingObject
{
public:

    Mouse(sf::Texture Texture, sf::Vector2f Position);
    virtual void HandleCollision(Mouse& obj) {};
    ~Mouse();
    virtual void moveObject(sf::Time clock/*לשלוח שני וקטורים*/);
    virtual void updateMovement(sf::Vector2f, int) ;
    virtual void UpdateDirection(sf::Vector2f) ;

    virtual void checkCollition(std::vector<std::unique_ptr<movingObject>>& m_MovingObject,
                                std::vector<std::unique_ptr<StaticObject>>& m_StaticObject) ;

    virtual void HandleCollision(Wall&) ;
    virtual void HandleCollision(Cheese&) {};
    virtual void HandleCollision(Cat&) {};
    virtual void HandleCollision(Door&) {};
    virtual void HandleCollision(Key&) {};



    //void SetCollide();

private:

    sf::Keyboard::Key getKeyMouse();
    std::vector<sf::Keyboard::Key> m_keyBoard;
    sf::Keyboard::Key getKeyPress() const;
    //Direction m_direction = Stay;
};