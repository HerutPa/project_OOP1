#pragma once

#include <SFML/Graphics.hpp>
//#include "Matrix.h"
#include "GameObject.h"
#include "Key.h"
#include <memory>
//#include "SuperPresent.h"
//#include "Freeze.h"
//#include "AddLife.h"
//#include "AddTime.h"
#include "Door.h"
#include "Cheese.h"
#include "Wall.h"
#include "Mouse.h"
#include "Cat.h"
#include "Present.h"
#include <fstream>
#include "MovingObject.h"
#include "StaticObjects.h"
#include <vector>
#include <memory>
#include <iostream>



class Board
{
public:
    Board();
    void readboard();

    void drawBoard(sf::RenderWindow& m_window);

    sf::Vector2f CalculateFactor();
    void updateGame(const sf::Time delta_Time);

    sf::Sprite GetGameObjectMoving(const int index);



private:

    int m_mouse_idx;

    std::vector<std::string> m_matrixVector;
    int m_row = 0;
    int m_col = 0;
    std::ifstream m_ifile;  //= std::ifstream("Board.txt"); // the board
    std::vector<std::unique_ptr<movingObject>> m_MovingObject;
    std::vector<std::unique_ptr<StaticObject>> m_StaticObject;



};