#include "MovingObject.h"

movingObject::movingObject(sf::Texture Texture, sf::Vector2f Position)
    :GameObject(Texture,Position)
{}

movingObject::~movingObject()
{
}

void movingObject::setOriginalPos(sf::Vector2f Position)
{
    m_originalPos = Position;
}

const sf::Vector2f movingObject::getOriginalPos()
{
    return m_originalPos;
}

sf::Vector2f movingObject::directionToVector(Direction dir)
{
    switch (dir)
    {
    case Direction::Up:
        return { 0, -1 };
    case Direction::Down:
        return { 0, 1 };
    case Direction::Right:
        return { 1, 0 };
    case Direction::Left:
        return { -1, 0 };
    case Direction::Stay:
        return { 0, 0 };
    default:
        return { 0, 0 };
    }
}