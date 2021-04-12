#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title):name(name),title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	*this = other;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	name = other.name;
	title = other.title;
	return (*this);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::string Sorcerer::nameGetter() const
{
	return (this->name);
}

std::string Sorcerer::titleGetter() const
{
	return (this->title);
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &ref)
{
	out << "I am " << ref.nameGetter() << ", " << ref.titleGetter() << ", and I like ponies!" << std::endl;
	return (out);
}