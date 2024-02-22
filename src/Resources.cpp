#pragma once

#include "Resources.h"

Resources::Resources()
{
	loadTextures();

}

//loading all images
void Resources::loadTextures()
{
	m_textureVec.resize(TextureObject::t_Total);
	m_textureVec[TextureObject::t_wall].loadFromFile("wall.png");
	m_textureVec[TextureObject::t_door].loadFromFile("door.png");
	//m_textureVec[TextureObject::t_cat].loadFromFile("cat.png");
	//m_textureVec[TextureObject::t_mouse].loadFromFile("mouse.png");
	m_textureVec[TextureObject::t_cheese].loadFromFile("cheese.png");
	m_textureVec[TextureObject::t_present].loadFromFile("present.png");
	m_textureVec[TextureObject::t_key].loadFromFile("key.png");
	//m_textureVec[TextureObject::t_save].loadFromFile("save.png");
	//m_textureVec[TextureObject::t_reset].loadFromFile("reset.png");
}

Resources::~Resources()
{
}

Resources& Resources::instance()
{
	static Resources Resource;
	return Resource;
}

const sf::Texture& Resources::getTexture(TextureObject texObj) const
{
	return m_textureVec[texObj];
}

sf::SoundBuffer& Resources::GetSound(Sound sound)
{
	return m_Sounds[sound];
}