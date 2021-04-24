#include "Ice.hpp"
#include <iostream>

Ice::Ice():AMateria("ice")
{

}

Ice::Ice(Ice const &other):AMateria("ice")
{
	*this = other;
}

Ice::~Ice()
{

}

Ice &Ice::operator=(Ice const &other)
{
	_xp = other._xp;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}