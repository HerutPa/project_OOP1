#pragma once

#include "StaticObjects.h"
#include "MovingObject.h"
#include "Mouse.h"
#include <SFML/Graphics.hpp>



class Wall : public StaticObject
{
public:
	Wall(sf::Texture Texture, sf::Vector2f Position);
	virtual void HandleCollision(Wall& wall) {};
	~Wall();
	virtual void HandleCollision(Mouse& mouse);







	/*virtual void handleCollison(Mouse& obj);
	virtual void handleCollison(GamCateObject& obj);
	virtual void handleCollison(Wall& obj);
	virtual void handleCollison(Door& obj);
	virtual void handleCollison(Cheese& obj);
	virtual void handleCollison(AddTime& obj);
	virtual void handleCollison(Key& obj);
	virtual void handleCollison(ADDLife& obj);
	virtual void handleCollison(Freese& obj);*/

};