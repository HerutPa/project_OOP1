#include "Key.h"

Key::Key(sf::Texture Texture, sf::Vector2f Position) : StaticObject(Texture, Position)
{
	m_sprite.setTexture(Resources::instance().getTexture(Resources::t_key));
	m_char = 'F';
}

Key::Key()
{
}


Key::~Key()
{
}

bool Key::thereIsKey()
{
	if (m_counterKey > 0)
	{
		m_counterKey--;
		return true;
	}
	return false;

}

void Key::HandleCollision(Mouse& mouse)
{
	m_counterKey++;
	mouse.HandleCollision(*this);


}
