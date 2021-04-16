#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant():Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other):Enemy(other)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &other)
{
	this->type = other.type;
	this->hp = other.hp;
	return (*this);
}

void SuperMutant::takeDamage(int damagePoints)
{
	Enemy::takeDamage(damagePoints - 3);
}