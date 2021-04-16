#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other):AWeapon(other)
{
	*this = other;
}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &other)
{
	name = other.name;
	damagePoints = other.damagePoints;
	ap = other.ap;
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}