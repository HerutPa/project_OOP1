#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <fstream>
#include <vector>
#include <iostream>
#include "GameObject.h"
#include "MovingObject.h"
#include "StaticObjects.h"
#include "Mouse.h"
#include "Cat.h"
#include "Key.h"
#include "Door.h"
#include "Cheese.h"
#include "Wall.h"
#include "Present.h"
#include "AddLife.h"
#include "AddTime.h"
#include "Freeze.h"


class Board
{
public:
    Board();
    void readboard();
    void drawBoard(sf::RenderWindow& m_window);
    void updateGame(const sf::Time delta_Time);
    sf::Vector2f CalculateFactor();
    sf::Sprite GetGameObjectMoving(const int index);

private:
    int m_mouse_idx;
    int m_row = 0;
    int m_col = 0;
    std::vector<std::string> m_matrixVector;
    std::ifstream m_ifile;  //= std::ifstream("Board.txt"); // the board
    std::vector<std::unique_ptr<movingObject>> m_MovingObject;
    std::vector<std::unique_ptr<StaticObject>> m_StaticObject;



};