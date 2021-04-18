#include "Sword.hpp"
#include <iostream>

Sword::Sword():AWeapon("Sword", 4, 30)
{

}

Sword::Sword(Sword const &other):AWeapon(other)
{
	*this = other;
}

Sword::~Sword()
{

}

Sword &Sword::operator=(Sword const &other)
{
	name = other.name;
	damagePoints = other.damagePoints;
	ap = other.ap;
	return (*this);
}

void Sword::attack() const
{
	std::cout << "* sh! *" << std::endl;
}