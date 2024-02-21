#pragma once

#include <SFML/Graphics.hpp>
#include "Resources.h"


//class Mouse;
//class Cat;
class Wall;
class StaticObject;
class movingObject;
//class Door;
//class Key;
//class Cheese;
//class AddTime;
//class ADDLife;
//class Freese;

class GameObject
{
public:
	GameObject (sf::Texture Texture, sf::Vector2f Position);
		//sf::Texture getTexture();
	void drawObject(sf::RenderWindow& m_window);
	void satScale(sf::Vector2f scale);
	const sf::Vector2f  getPosition();
	const char getChar();
	sf::FloatRect getBounds();

    void handleCollison(GameObject& obj);
	virtual void handleCollison(Wall& obj) {};

	/*virtual void handleCollison(Mouse& obj);
	virtual void handleCollison(GamCateObject& obj);
	
	virtual void handleCollison(Door& obj);
	virtual void handleCollison(Cheese& obj);
	virtual void handleCollison(AddTime& obj);
	virtual void handleCollison(Key& obj);
	virtual void handleCollison(ADDLife& obj);
	virtual void handleCollison(Freese& obj);
	*/
	

protected:
	sf::Sprite m_sprite;
	char m_char;
	//sf::Vector2f 


};