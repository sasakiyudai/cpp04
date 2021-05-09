#include "Victim.hpp"
#include <iostream>

Victim::Victim()
{
	
}

Victim::Victim(std::string name):name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!"  << std::endl;
}

Victim::Victim(Victim const &other):name(other.name)
{
	*this = other;
	std::cout << "Some random victim called " << this->name << " just appeared!"  << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(Victim const &other)
{
	name = other.name;
	return (*this);
}

std::string Victim::nameGetter() const
{
	return (this->name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &ref)
{
	out << "I'm " << ref.nameGetter() << " and I like otters!" << std::endl;
	return (out);
}
