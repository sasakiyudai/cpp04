#include "MateriaSource.hpp"

MateriaSource::MateriaSource():materialsLen(0)
{

}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < materialsLen; i++)
		delete materials[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < this->materialsLen; i++)
		delete materials[i];
	this->materialsLen = 0;
	for (int i = 0; i < other.materialsLen; i++)
		learnMateria(other.materials[i]->clone());
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		return ;
	if (0 <= materialsLen && materialsLen <= 3)
	{
		materials[materialsLen] = m;
		materialsLen++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < materialsLen; i++)
		if (materials[i]->getType() == type)
			return (materials[i]->clone());
	return (NULL);
}