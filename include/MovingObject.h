#pragma once

#include <SFML/Graphics.hpp>
#include "GameObject.h"



//abs class
class movingObject : public GameObject
{
public:
	movingObject(sf::Texture Texture, sf::Vector2f Position);
	virtual ~movingObject();
	//לא ברור למה וירטואל למעלה.
	void setOriginalPos(sf::Vector2f Position);
	const sf::Vector2f getOriginalPos();
    virtual void moveObject(sf::Time clock/*לשלוח שני וקטורים*/) = 0;
	virtual void updateMovement(sf:: Vector2f, int) = 0;
	virtual void checkCollition() = 0;
	virtual void UpdateDirection(sf::Vector2f) = 0;




protected:
	Direction m_dir;
	sf::Vector2f directionToVector(sf::Keyboard::Key key);
	sf::Vector2f m_stapSize;
	sf::Vector2f m_originalPos;

};
