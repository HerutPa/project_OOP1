#pragma once

#include "MovingObject.h"
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
    virtual void checkCollition() ;
    virtual void UpdateDirection(sf::Vector2f) ;




    /*virtual void HandleCollision(GameObject&)override;
    virtual void HandleCollision(Pacman&)override;
    virtual void HandleCollision(Deamon&)override;
    virtual void HandleCollision(Wall&)override;
    virtual void HandleCollision(Door&)override;
    virtual void HandleCollision(Key&)override;
    virtual void HandleCollision(SuperPresent&)override;
    virtual void HandleCollision(AddTime&)override;
    virtual void HandleCollision(Freeze&)override;
    virtual void HandleCollision(AddLife&)override;
    virtual void HandleCollision(Cookie&)override;*/

    //void SetCollide();

private:

    sf::Keyboard::Key getKeyMouse();
    std::vector<sf::Keyboard::Key> m_keyBoard;
    sf::Keyboard::Key getKeyPress() const;
    //Direction m_direction = Stay;
};