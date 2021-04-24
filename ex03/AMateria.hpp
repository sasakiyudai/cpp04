#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria;

#include <string>
#include "ICharacter.hpp"
class AMateria
{
	protected:
		std::string type;
		unsigned int _xp;
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const &other);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &other);

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
