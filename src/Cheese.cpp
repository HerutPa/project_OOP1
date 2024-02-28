#include "Cheese.h"

Cheese::Cheese(sf::Texture Texture, sf::Vector2f Position) : StaticObject(Texture, Position)
{
	m_sprite.setTexture(Resources::instance().getTexture(Resources::t_cheese));
	m_char = '*';
}

Cheese::~Cheese()
{
}

void Cheese::HandleCollision(Mouse& mouse)
{
	m_isColiide = true;
	mouse.HandleCollision(*this);

}
