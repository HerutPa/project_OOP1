#include "Freeze.h"

Freeze::Freeze(sf::Texture Texture, sf::Vector2f Position) : StaticObject(Texture, Position)
{
	m_sprite.setTexture(Resources::instance().getTexture(Resources::t_FreezeGift));
	m_char = 'Z';
}

Freeze::~Freeze()
{
}

void Freeze::HandleCollision(Mouse& mouse)
{
	m_isColiide = true;
	mouse.HandleCollision(*this);
}

