#include "Slime.hpp"
#include <iostream>

Slime::Slime():Enemy(30, "Slime")
{
	std::cout << "I'm slime, very weak enemy!" << std::endl;
}

Slime::Slime(Slime const &other):Enemy(other)
{
	std::cout << "I'm slime, very weak enemy!" << std::endl;
}

Slime::~Slime()
{
	std::cout << "See you!" << std::endl;
}

Slime &Slime::operator=(Slime const &other)
{
	this->type = other.type;
	this->hp = other.hp;
	return (*this);
}

void Slime::takeDamage(int damagePoints)
{
	Enemy::takeDamage(damagePoints);
}