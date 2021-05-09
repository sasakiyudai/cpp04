#include "Character.hpp"

Character::Character()
{
	
}

Character::Character(std::string name):name(name),materialsLen(0)
{

}

Character::Character(Character const &other)
{
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < this->materialsLen; i++)
		delete materials[i];
}

Character &Character::operator=(Character const &other)
{
	name = other.name;
	for (int i = 0; i < this->materialsLen; i++)
		delete materials[i];
	this->materialsLen = 0;
	for (int i = 0; i < other.materialsLen; i++)
		equip(other.materials[i]->clone());
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	if (0 <= materialsLen && materialsLen <= 3)
	{
		for (int i = 0; i < materialsLen; i++)
			if (materials[i] == m)
				return ;
		materials[materialsLen] = m;
		materialsLen++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || materialsLen <= idx)
		return ;
	if (idx == 3)
		materials[idx] = NULL;
	else
	{
		for (int i = idx; i < 3; i++)
		{
			materials[i] = materials[i + 1];
			materials[i + 1] = NULL;
		}
	}
	materialsLen--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || materialsLen <= idx)
		return ;
	materials[idx]->use(target);
}