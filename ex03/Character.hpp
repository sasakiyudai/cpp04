#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string name;
		AMateria *materials[4];
		int materialsLen;
	public:
		Character(std::string name);
		Character(Character const &other);
		virtual ~Character();
		Character &operator=(Character const &other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
