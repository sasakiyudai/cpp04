#include "Cure.hpp"
#include <iostream>

Cure::Cure():AMateria("cure")
{

}

Cure::Cure(Cure const &other):AMateria("cure")
{
	*this = other;
}

Cure::~Cure()
{

}

Cure &Cure::operator=(Cure const &other)
{
	_xp = other._xp;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}