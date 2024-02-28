#pragma once

#include <SFML/Graphics.hpp>
#include "Resources.h"


class Mouse;
class Cat;
class Wall;
class StaticObject;
class movingObject;
class Door;
class Key;
class Cheese;
//class AddTime;
class AddLife;
//class Freese;

class GameObject
{
public:
	GameObject();
	GameObject (sf::Texture Texture, sf::Vector2f Position);
		//sf::Texture getTexture();
	void drawObject(sf::RenderWindow& m_window);
	void satScale(sf::Vector2f scale);
	const sf::Vector2f  getPosition();
	const char getChar();
	sf::FloatRect getBounds();
	sf::Sprite& GetSprite();
	const bool getIsCollide()const;

    void HandleCollision(GameObject& obj);

	virtual void HandleCollision(Wall& wall) {};
	virtual void HandleCollision(Mouse& mouse) {};
	virtual void HandleCollision(Cheese& cheese) {};
	virtual void HandleCollision(Cat& cat) {};
	virtual void HandleCollision(Door& door) {};
	virtual void HandleCollision(Key& key) {};
	virtual void HandleCollision(AddLife& addLife) {};
	

protected:
	sf::Sprite m_sprite;
	char m_char;
	//sf::Vector2f 
	bool m_isColiide = false;
	




};