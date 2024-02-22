#pragma once

#include "Menu.h"

Menu::Menu(int width, int height)
	:m_WINDOW_WIDTH(width), m_WINDOW_HEIGHT(height)
{
	
	////define the arrays:
	//for (int button = PLAY; button <= BACK; button++)
	//{
	//	m_Buttons[button].setTexture(Resources::instance().GetButton((Button)button));
	//}

	//for (int title = TITLE; title <= TITLE_DEAMONS; title++)
	//{
	//	m_TitleObjects[title].setTexture(Resources::instance().GetTitle((Title)title));
	//}

	//for (int instruction = SHIR; instruction <= GAME_RULES; instruction++)
	//{
	//	m_Instructions_Page[instruction].setTexture(Resources::instance().GetInstruction((Instructions)instruction));
	//}

	//m_Sound[CLICK].setBuffer(Resources::instance().GetSound(CLICK));

	////define the first visibility
	//m_TitleObjects[HELLO].setColor(sf::Color::Color(255, 255, 255, 0));
	//m_TitleObjects[WANNA_PLAY].setColor(sf::Color::Color(255, 255, 255, 0));
	//m_TitleObjects[LETS_GO].setColor(sf::Color::Color(255, 255, 255, 0));
	//m_TitleObjects[TITLE_PACMAN].setColor(sf::Color::Color(255, 255, 255, 0));
	//m_TitleObjects[TITLE_DEAMONS].setColor(sf::Color::Color(255, 255, 255, 0));
	//m_Instructions_Page[SHIR].setColor(sf::Color::Color(255, 255, 255, 0));
	//m_Instructions_Page[EVIATAR2].setColor(sf::Color::Color(255, 255, 255, 0));
	//m_Instructions_Page[SHIR_DROP].setColor(sf::Color::Color(255, 255, 255, 0));
	//m_Instructions_Page[EVIATAR_DROP].setColor(sf::Color::Color(255, 255, 255, 0));
	//m_Instructions_Page[GAME_RULES].setColor(sf::Color::Color(255, 255, 255, 0));
	//SetPosition();
}

//void Menu::DrawMenu(sf::RenderWindow& m_window)
//{
//	for (int object = TITLE; object <= TITLE_DEAMONS; ++object)
//	{
//		m_window.draw(m_TitleObjects[object]);
//	}
//
//	for (int button = PLAY; button <= EXIT; ++button)
//	{
//		m_window.draw(m_Buttons[button]);
//	}
//}

sf::Sprite Menu::GetButton(const Button object) const
{
	return m_Buttons[object];
}

sf::Sprite Menu::GetTitle(const Title object) const
{
	return m_TitleObjects[object];
}
void Menu::ButtonRelease(const Button button)
{
	m_Buttons[button].setColor(sf::Color::Color(255, 255, 255));
}

void Menu::ButtonPress(const Button button)
{
	m_Buttons[button].setColor(sf::Color::Color(255, 255, 255, 150));
}

void Menu::PlaySound(const Sound sound)
{
	m_Sound[sound].play();
}