#include "AddLife.h"

AddLife::AddLife(sf::Texture Texture, sf::Vector2f Position) : StaticObject(Texture, Position)
{
	m_sprite.setTexture(Resources::instance().getTexture(Resources::t_lifeGift));
	m_char = 'L';
}

AddLife::~AddLife()
{
}

void AddLife::HandleCollision(Mouse& mouse)
{
	m_isColiide = true;
	mouse.HandleCollision(*this);
}

