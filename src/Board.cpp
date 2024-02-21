#pragma once

#include "Board.h"
#include <Present.h>



//Board::Board()
//	:m_matrix(), m_row(m_matrix.GetRow()), m_col(m_matrix.GetCol())
//{
//	CreateReactangles();
//	InitVector();
//}

Board::Board() : m_ifile("Board.txt")
{

	m_StaticObject.clear();
	m_MovingObject.clear();

	if (!m_ifile.is_open())
	{
		std::cerr << "could'nt open board text file\n";
		exit(EXIT_FAILURE);
	}

	m_ifile.close();

}


void Board::readboard()
{

	//m_ifile.get(); // for \n
	// Read the two integers from the file
	m_ifile.open("Board.txt");
	if (!m_ifile.eof())
	{
		m_ifile >> m_row >> m_col;
		m_ifile.get();

		m_matrixVector.clear();
		m_matrixVector.resize(m_row);
	}	
	for (int row = 0; row < m_row; ++row)
	{
		std::string row_string;
		std::getline(m_ifile, row_string);
		m_matrixVector.push_back(row_string);
	}
	//create object board
	sf::Vector2f location;
	sf::Vector2f scaleFactor = CalculateFactor();

	for (int row = 0; row < m_matrixVector.size(); ++row)
	{
		for (int col = 0; col < m_matrixVector[row].size(); ++col)
		{
			location = sf::Vector2(col * SPRITE_SIZE, row * SPRITE_SIZE-4000);
			location *= scaleFactor.x;
			switch (m_matrixVector[row][col])
			{
			case '#':
			{
				m_StaticObject.push_back(std::make_unique<Wall>( Resources::instance().getTexture(Resources::t_wall), location));
				m_StaticObject.back()->satScale(scaleFactor);
				break;
					
			}
			case 'D':
			{
				m_StaticObject.push_back(std::make_unique<Door>( Resources::instance().getTexture(Resources::t_door), location));
				m_StaticObject.back()->satScale(scaleFactor);
				break;
			}
			case 'F':
			{
				m_StaticObject.push_back(std::make_unique<Key>(Resources::instance().getTexture(Resources::t_key), location));
				m_StaticObject.back()->satScale(scaleFactor);
				break;
			}
			case '*':
			{
				m_StaticObject.push_back(std::make_unique<Cheese>(Resources::instance().getTexture(Resources::t_cheese), location));
				m_StaticObject.back()->satScale(scaleFactor);
				break;
			}
			case '$':
			{
				m_StaticObject.push_back(std::make_unique<Present>(Resources::instance().getTexture(Resources::t_present), location));
				m_StaticObject.back()->satScale(scaleFactor);
				break;
			}





			//case 'F':
			//{
			//	m_MovingObject.push_back(std::make_unique<mouse>(location, Resources::instance().getTexture(Resources::t_mouse)));

			//}
			/*case '#':
			case '#':
			case '#':
			case '#':
			case '#':*/

			default:
				break;
			}

		}
	}



}
void Board::drawBoard(sf::RenderWindow& m_window)
{
	for (auto& staticc : m_StaticObject)
	{
		staticc->drawObject(m_window);
	}
}

sf::Vector2f Board::CalculateFactor()
{

	sf::Vector2f scaleFactor;

	float heigt = (WINDOW_HEIGHT - 280);
	float width = WINDOW_WIDTH;
	scaleFactor.x = std::min(heigt / (m_row * SPRITE_SIZE), width / (m_col * SPRITE_SIZE));
	scaleFactor.y = scaleFactor.x;

	//scaleFactor.x *= 0.f;

	return scaleFactor;
}