#pragma once
#include <iostream>
#include "GameControll.h"

GameControll::GameControll()
    :m_window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Mouse&Cat"),
        m_menu(WINDOW_WIDTH, WINDOW_HEIGHT),
    m_board()
{
    /*m_window.setFramerateLimit(60);
    m_Sound[0].setBuffer(m_resource.GetSound(SONG));
    m_Sound[1].setBuffer(m_resource.GetSound(GAME_OVER));*/
}

void GameControll::run()
{
    while (m_window.isOpen())
    {
        m_window.clear(sf::Color::Color(0, 0, 0));
        //DrawMenu();
        m_window.display();
        StartGame();
       /* if (auto event = sf::Event{}; m_window.waitEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                m_window.close();
                break;

            case sf::Event::MouseButtonReleased:
            {
                auto location = m_window.mapPixelToCoords(
                    { event.mouseButton.x, event.mouseButton.y });
                handleClick(location);
                break;
            }

            case sf::Event::MouseMoved:
            {
                auto location = m_window.mapPixelToCoords(sf::Mouse::getPosition(m_window));
                handleMouseMoved(location, PLAY, EXIT);
            }

            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            m_window.close();
        }*/
    }
}


//void GameControll::handleMouseMoved(const sf::Vector2f location, const Button first, const Button last)
//{
//    for (int button = first; button <= last; button++)
//    {
//        if ((m_menu.GetButton((Button)button).getGlobalBounds().contains(location)))
//        {
//            m_menu.ButtonPress((Button)button);
//        }
//        else
//        {
//            m_menu.ButtonRelease((Button)button);
//        }
//    }
//}
//
//
//void GameControll::DrawMenu()
//{
//    for (int object = TITLE; object <= TITLE_DEAMONS; ++object)
//    {
//        m_window.draw(m_menu.GetTitle((Title)object));
//    }
//
//    for (int button = PLAY; button <= EXIT; ++button)
//    {
//        m_window.draw(m_menu.GetButton((Button)button));
//    }
//}
//
//void GameControll::handleClick(const sf::Vector2f& location)
//{
//    if (m_menu.GetButton(PLAY).getGlobalBounds().contains(location))
//    {
//       // m_menu.PlaySound(CLICK);
//        //m_Sound[0].play();
//        //PlayVideo();
//        StartGame();
//    }
//    else if (m_menu.GetButton(HELP).getGlobalBounds().contains(location))
//    {
//       // m_menu.PlaySound(CLICK);
//        InstructionsLoop();
//    }
//    else if (m_menu.GetButton(EXIT).getGlobalBounds().contains(location))
//    {
//        //m_menu.PlaySound(CLICK);
//        m_window.close();
//    }
//}
//
//void GameControll::InstructionsLoop()
//{
//    /*bool exit = false;
//    while (!exit)
//    {
//        m_window.clear(sf::Color::Color(0, 0, 0));
//        DrawInstructions();
//        m_window.display();
//
//        if (auto event = sf::Event{}; m_window.waitEvent(event))
//        {
//            switch (event.type)
//            {
//            case sf::Event::Closed:
//                exit = true;
//                m_window.close();
//                break;
//
//            case sf::Event::MouseButtonReleased:
//            {
//                auto location = m_window.mapPixelToCoords(
//                    { event.mouseButton.x, event.mouseButton.y });
//                handleNextClick(location, exit);
//                break;
//            }
//
//            case sf::Event::MouseMoved:
//            {
//                auto location = m_window.mapPixelToCoords(sf::Mouse::getPosition(m_window));
//                handleMouseMoved(location, VIDEO_PLAY, BACK);
//            }
//
//            }
//        }
//    }*/
//}

void GameControll::StartGame()
{
    m_board.readboard();

    while (m_window.isOpen())
    {
        m_window.clear(sf::Color::Color(0, 102, 102));
        m_board.drawBoard(m_window);
        m_window.display();

        /*for (auto event = sf::Event{}; m_window.pollEvent(event); )
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                m_window.close();
                break;
            }
        }*/
        auto delta_Time = m_MoveClock.restart();
        m_board.updateGame(delta_Time); //update moving directions
        //m_board.UpdateMoving(m_AddedTime); // update moving objects below the situation





    }
 






}
