#pragma once

#include "StaticObjects.h"
#include <SFML/Graphics.hpp>
#include "Mouse.h"
//#include "Deamon.h"

class Cheese :public StaticObject
{
public:

    Cheese(sf::Texture Texture, sf::Vector2f Position);
    ~Cheese();


    virtual void HandleCollision(Cheese& obj) {};
    virtual void HandleCollision(Mouse& mouse);



    /*virtual void HandleCollision(GameObject&)override;
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
};