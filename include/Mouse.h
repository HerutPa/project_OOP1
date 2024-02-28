#pragma once

#include "MovingObject.h"
#include "StaticObjects.h"
#include <SFML/Graphics.hpp>
#include "Key.h"
#include <GameControll.h>


class Mouse :public movingObject
{
public:

    Mouse(sf::Texture Texture, sf::Vector2f Position);
    ~Mouse();
    virtual void moveObject(sf::Time clock/*לשלוח שני וקטורים*/);
    virtual void updateMovement(sf::Vector2f, int) ;
    virtual void UpdateDirection(sf::Vector2f) ;

    virtual void checkCollition(std::vector<std::unique_ptr<movingObject>>& m_MovingObject,
                                std::vector<std::unique_ptr<StaticObject>>& m_StaticObject) ;

    virtual void HandleCollision(Mouse& mouse) {};
    virtual void HandleCollision(Wall& wall) ;
    virtual void HandleCollision(Cheese& cheese);
    virtual void HandleCollision(Cat& cat) {};
    virtual void HandleCollision(Door& door) ;
    virtual void HandleCollision(Key& key);
    virtual void HandleCollision(AddLife& addLife);
    virtual void HandleCollision(AddTime& addTime);
    virtual void HandleCollision(Freeze& freeze);

    bool thereIsKey();



    //void SetCollide();

private:

    //sf::Keyboard::Key getKeyMouse();
    std::vector<sf::Keyboard::Key> m_keyBoard;
    sf::Keyboard::Key getKeyPress() const;
    //Direction m_direction = Stay;
    int m_counterKey = 0;
    int m_counterLife = 3;
};