#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

void Enemy::BoundaryCheck(sf::Vector2f &movement)
{
	if (getPosition().x <= 0 || getPosition().x >= window->getSize().x - getSize().x)
	{
		movement.x = -movement.x;
	}
	if (getPosition().y <= 0 || getPosition().y >= window->getSize().y - getSize().y)
	{
		movement.y = -movement.y;
	}
}

void Enemy::update(float dt, sf::Vector2f &movement)
{
	BoundaryCheck(movement);
	move(movement * dt);
}