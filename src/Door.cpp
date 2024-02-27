#include "Door.h"

Door::Door(sf::Texture Texture, sf::Vector2f Position) : StaticObject(Texture, Position)
{
	m_sprite.setTexture(Resources::instance().getTexture(Resources::t_door));
	m_char = 'D';
}

Door::~Door()
{
}

void Door::HandleCollision(Mouse& mouse)
{
	if (m_key.thereIsKey())
	{
		m_isCollide = true; //בשביל המחיקה בבורד ..לבדוק האם צריך לשנות אותו ללא נכון בשביל המחיקה
	}
	mouse.HandleCollision(*this);
}
