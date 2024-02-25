#pragma once

#include "Menu.h"

Menu::Menu(int width, int height)
	:m_WINDOW_WIDTH(width), m_WINDOW_HEIGHT(height)
{
	
	//define the arrays:
	for (int button = PLAY; button <= BACK; button++)
	{
		m_Buttons[button].setTexture(Resources::instance().GetButton((Button)button));
	}

	for (int title = TITLE; title <= TITLE/*בכוונה נתתי לו לרוץ פעם אחת וגם במנוע המרכזי שיניתי ככה*/; title++)
	{
		m_TitleObjects[title].setTexture(Resources::instance().GetTitle((Title)title));
	}

	SetPosition();



	

	/*for (int instruction = SHIR; instruction <= GAME_RULES; instruction++)
	{
		m_Instructions_Page[instruction].setTexture(Resources::instance().GetInstruction((Instructions)instruction));
	}*/

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

void Menu::SetPosition()
{
	//resize:
	//Buttons:
	m_Buttons[PLAY].scale(sf::Vector2f(m_WINDOW_WIDTH * 0.195 / m_Buttons[PLAY].getTextureRect().width,
		m_WINDOW_WIDTH * 0.195 / m_Buttons[PLAY].getTextureRect().width));

	m_Buttons[HELP].scale(sf::Vector2f(m_WINDOW_WIDTH * 0.195 / m_Buttons[HELP].getTextureRect().width,
		m_WINDOW_WIDTH * 0.195 / m_Buttons[HELP].getTextureRect().width));

	m_Buttons[EXIT].scale(sf::Vector2f(m_WINDOW_WIDTH * 0.195 / m_Buttons[EXIT].getTextureRect().width,
		m_WINDOW_WIDTH * 0.195 / m_Buttons[EXIT].getTextureRect().width));

	m_Buttons[BACK].scale(sf::Vector2f(m_WINDOW_WIDTH * 0.12 / m_Buttons[BACK].getTextureRect().width,
		m_WINDOW_WIDTH * 0.12 / m_Buttons[BACK].getTextureRect().width));

	m_Buttons[VIDEO_PLAY].scale(sf::Vector2f(m_WINDOW_WIDTH * 0.05 / m_Buttons[VIDEO_PLAY].getTextureRect().width,
		m_WINDOW_WIDTH * 0.05 / m_Buttons[VIDEO_PLAY].getTextureRect().width));

	//Title:
	m_TitleObjects[TITLE].scale(sf::Vector2f(m_WINDOW_WIDTH * 0.5 / m_TitleObjects[TITLE].getTextureRect().width,
		m_WINDOW_WIDTH * 0.5 / m_TitleObjects[TITLE].getTextureRect().width));





	//locate: //כל מה שכאן צריך להיות קשור למיקום
//Buttons
	m_Buttons[PLAY].setPosition(sf::Vector2f((m_WINDOW_WIDTH - m_Buttons[PLAY].getTextureRect().width) * 0.5,
		m_WINDOW_HEIGHT - m_Buttons[PLAY].getTextureRect().height * 1.5 * 3));

	m_Buttons[HELP].setPosition(sf::Vector2f((m_WINDOW_WIDTH - m_Buttons[HELP].getTextureRect().width) * 0.5,
		m_WINDOW_HEIGHT - m_Buttons[HELP].getTextureRect().height * 1.5 * 2));

	m_Buttons[EXIT].setPosition(sf::Vector2f((m_WINDOW_WIDTH - m_Buttons[EXIT].getTextureRect().width) * 0.5,
		m_WINDOW_HEIGHT - m_Buttons[EXIT].getTextureRect().height * 1.5 * 1));

	m_Buttons[VIDEO_PLAY].setPosition(sf::Vector2f(m_WINDOW_WIDTH * 0.88, m_WINDOW_HEIGHT * 0.73));

	m_Buttons[BACK].setPosition(sf::Vector2f(m_WINDOW_WIDTH * 0.85, m_WINDOW_HEIGHT * 0.85));

	//Title
	m_TitleObjects[TITLE].setPosition(sf::Vector2f(m_WINDOW_WIDTH * 0.25, m_WINDOW_HEIGHT * 0.1));

}


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

//void Menu::PlaySound(const Sound sound)
//{
//	m_Sound[sound].play();
//}