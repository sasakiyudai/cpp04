#include "Character.hpp"
#include <iostream>

Character::Character()
{
	
}

Character::Character(std::string const & name):name(name),ap(40),weapon(NULL)
{

}

Character::Character(Character const &other)
{
	*this = other;
}

Character::~Character()
{

}

Character &Character::operator=(Character const &other)
{
	name = other.name;
	ap = other.ap;
	weapon = other.weapon;
	return (*this);
}

void Character::recoverAP()
{
	if ((ap += 10) > 40)
		ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (!enemy || !weapon || ap < weapon->getAp())
		return ;
	if (ap < this->weapon->getAp())
		return ;
	std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
	weapon->attack();
	ap -= this->weapon->getAp();
	enemy->takeDamage(weapon->getDamagePoints());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::string const &Character::getName() const
{
	return (this->name);
}

int Character::getAP() const
{
	return (this->ap);
}

AWeapon *Character::getWeapon() const
{
	return (this->weapon);
}

std::ostream &operator<<(std::ostream &out, Character const &character)
{
	out << character.getName() << " has " << character.getAP() << " AP and ";
	if (character.getWeapon())
		out << "wields a " << character.getWeapon()->getName() << std::endl;
	else
		out << "is unarmed" << std::endl;
	return (out);
}