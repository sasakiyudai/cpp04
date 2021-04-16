#include "AWeapon.hpp"
#include <iostream>

AWeapon::AWeapon(std::string const & name, int apcost, int damage):name(name),ap(apcost),damagePoints(damage)
{

}

AWeapon::AWeapon(AWeapon const &other)
{
	*this = other;
}

AWeapon::~AWeapon()
{

}

AWeapon &AWeapon::operator=(AWeapon const &other)
{
	name = other.name;
	damagePoints = other.damagePoints;
	ap = other.ap;
	return (*this);
}

std::string const &AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getDamagePoints() const
{
	return (this->damagePoints);
}

int AWeapon::getAp() const
{
	return (this->ap);
}

void AWeapon::attack() const
{
	std::cout << "(certain sounds)" << std::endl;
}