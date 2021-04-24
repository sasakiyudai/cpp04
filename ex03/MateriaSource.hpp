#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *materials[4];
		int materialsLen;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		virtual ~MateriaSource();
		MateriaSource &operator=(MateriaSource const &other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
