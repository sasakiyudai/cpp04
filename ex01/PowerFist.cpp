#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const &other):AWeapon(other)
{
	*this = other;
}

PowerFist::~PowerFist()
{

}

PowerFist &PowerFist::operator=(PowerFist const &other)
{
	name = other.name;
	damagePoints = other.damagePoints;
	ap = other.ap;
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}