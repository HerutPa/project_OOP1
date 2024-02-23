#include "Mouse.h"

constexpr auto MouseSize = 400.f;
constexpr auto MouseSpeed = MouseSize * 1;

Mouse::Mouse(sf::Texture Texture, sf::Vector2f Position) : movingObject(Texture, Position) 
{
	m_sprite.setTexture(Resources::instance().getTexture(Resources::t_mouse));
	m_char = '%';
	/*: m_keyBoard({ sf::Keyboard::Up, sf::Keyboard::Right, sf::Keyboard::Down, sf::Keyboard::Left })*/
	m_keyBoard.push_back(sf::Keyboard::Up);
	m_keyBoard.push_back(sf::Keyboard::Down);
	m_keyBoard.push_back(sf::Keyboard::Left);
	m_keyBoard.push_back(sf::Keyboard::Right);
}



Mouse::~Mouse()
{

}

void Mouse::moveObject(sf::Time clock)
{
	sf::Vector2f direction = directionToVector(getKeyPress());
	m_stapSize = MouseSpeed * direction * clock.asSeconds();
	m_sprite.move(m_stapSize);
}

sf::Keyboard::Key Mouse::getKeyPress() const
{
	for (int i = 0; i < m_keyBoard.size(); i++) //checking which arrow key is pressed and returning it
	{
		if (sf::Keyboard::isKeyPressed(m_keyBoard[i]))
			return m_keyBoard[i];
	}

	return sf::Keyboard::Key();
	
}


void Mouse::updateMovement(sf::Vector2f, int)
{
}

void Mouse::checkCollition()
{
}

void Mouse::UpdateDirection(sf::Vector2f)
{
}