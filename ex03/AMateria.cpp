#include "AMateria.hpp"

AMateria::AMateria(std::string const &type):type(type),_xp(0)
{

}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(AMateria const &other)
{
	type = other.type;
	_xp = other._xp;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}
void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}