#include "Mouse.h"
#include <GameControll.h>

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

void Mouse::UpdateDirection(sf::Vector2f)
{
}

void Mouse::checkCollition(std::vector<std::unique_ptr<movingObject>> &m_MovingObject, std::vector<std::unique_ptr<StaticObject>> &m_StaticObject)
{
	for (auto& staticc : m_StaticObject)
	{
		if (getBounds().intersects(staticc->getBounds()))
		{
			staticc->HandleCollision(*this);
		}


	}

	//std::erase_if(m_StaticObject, [](const auto& game_object) {
	//	return game_object.GetIsCollide(); // ������ ������ ���� �-0, ����� ��������� �����
	//	});



	/*for (auto& moving : m_MovingObject)
	{
		moving->drawObject(m_window);
	}*/
}


void Mouse::HandleCollision(Wall& wall)
{
	m_sprite.move(-m_stapSize);
}

void Mouse::HandleCollision(Door& door)
{
	if (m_counterKey == 0)
	{
		m_sprite.move(-m_stapSize);
	}
	else
	{
		m_counterKey--;
	}
}

void Mouse::HandleCollision(Key& key)
{
	m_counterKey++;
}

void Mouse::HandleCollision(AddLife& addLife)
{
	m_counterLife++; 
}


void Mouse::HandleCollision(Cheese& obj)
{
}

bool Mouse::thereIsKey()
{
	if (m_counterKey > 0)
		return true;
	return false;
}

