#include "Squad.hpp"
#include <iostream>

Squad::Squad():units(NULL),unitsLen(0)
{

}

Squad::Squad(Squad const &other)
{
	*this = other;
}

Squad::~Squad()
{
	for (int i = 0; i < this->unitsLen; i++)
	{
		delete units[i];
	}
	delete units;
}

Squad &Squad::operator=(Squad const &other)
{
	delete[] units;
	units = NULL;
	this->unitsLen = 0;
	for (int i = 0; i < other.getCount(); i++)
	{
		push(other.getUnit(i)->clone());
	}
	return (*this);
}

int Squad::getCount() const
{
	return (this->unitsLen);
}

ISpaceMarine* Squad::getUnit(int id) const
{
	if (this->unitsLen == 0)
		return (NULL);
	if (id < 0 || this->unitsLen <= id)
		return (NULL);
	return (units[id]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (unit == NULL)
		return (this->unitsLen);
	for (int i = 0; i < this->unitsLen; i++)
		if (units[i] == unit)
			return (this->unitsLen);
	if (this->unitsLen == 0)
	{
		this->unitsLen = 1;
		units = new ISpaceMarine*[1];
		units[0] = unit;
	}
	else
	{
		this->unitsLen++;
		ISpaceMarine **pushed_units = new ISpaceMarine*[this->unitsLen];
		for (int i = 0; i < this->unitsLen; i++)
		{
			if (i + 1 == this->unitsLen)
				pushed_units[i] = unit;
			else
				pushed_units[i] = units[i];
		}
		delete[] units;
		units = pushed_units;
	}
	return (this->unitsLen);
}