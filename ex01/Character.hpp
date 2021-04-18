#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

class Character
{
	private:
		std::string name;
		int ap;
		AWeapon *weapon;
	public:
		Character(std::string const & name);
		Character(Character const &other);
		~Character();
		Character &operator=(Character const &other);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const &getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &out, Character const &character);

#endif
