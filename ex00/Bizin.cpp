#include "Bizin.hpp"
#include <iostream>

Bizin::Bizin(std::string name):Victim(name)
{
	std::cout << "I'm not beautiful." << std::endl;
}

Bizin::Bizin(Bizin const &other):Victim(other.name)
{
	*this = other;
	std::cout << "I'm not beautiful." << std::endl;
}

Bizin::~Bizin()
{
	std::cout << "I'm actually beautiful." << std::endl;
}

Bizin &Bizin::operator=(Bizin const &other)
{
	name = other.name;
	return (*this);
}

std::string Bizin::nameGetter() const
{
	return (this->name);
}

void Bizin::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pig!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Bizin const &ref)
{
	out << "I'm " << ref.nameGetter() << " and I love evryone!" << std::endl;
	return (out);
}
