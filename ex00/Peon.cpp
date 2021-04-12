#include "Peon.hpp"
#include <iostream>

Peon::Peon(std::string name):Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other):Victim(other.name)
{
	*this = other;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(Peon const &other)
{
	name = other.name;
	return (*this);
}

std::string Peon::nameGetter() const
{
	return (this->name);
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Peon const &ref)
{
	out << "I'm " << ref.nameGetter() << " and I like otters!" << std::endl;
	return (out);
}
