#pragma once

#include <SFML/Graphics.hpp>
#include "Resources.h"


class Menu
{
public:
	//Menu(int, int);
	//void DrawMenu(sf::RenderWindow& m_window);

	Menu();

	sf::Sprite GetButton(const Button) const;










private:
	//arrays
	sf::Sprite m_Buttons[BUTTONS];
	sf::Sprite m_TitleObjects[TITLE_OBJECTS];
	sf::Sprite m_Instructions_Page[INSTRUCTIONS];
	//sf::Sound m_Sound[SOUNDS];

};
