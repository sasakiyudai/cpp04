#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion():Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &other):Enemy(other)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &other)
{
	this->type = other.type;
	this->hp = other.hp;
	return (*this);
}

void RadScorpion::takeDamage(int damagePoints)
{
	Enemy::takeDamage(damagePoints);
}