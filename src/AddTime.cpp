#include "AddTime.h"

AddTime::AddTime(sf::Texture Texture, sf::Vector2f Position) : StaticObject(Texture, Position)
{
	m_sprite.setTexture(Resources::instance().getTexture(Resources::t_TimeGift));
	m_char = 'T';
}

AddTime::~AddTime()
{
}

void AddTime::HandleCollision(Mouse& mouse)
{
	m_isColiide = true;
	mouse.HandleCollision(*this);
}

