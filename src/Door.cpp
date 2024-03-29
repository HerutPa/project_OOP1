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
	if (mouse.thereIsKey())
	{
		m_isColiide = true;
	}
	mouse.HandleCollision(*this);
}
