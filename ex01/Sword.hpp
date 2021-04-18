#ifndef SWORD_HPP
#define SWORD_HPP

#include "AWeapon.hpp"
#include <string>

class Sword: public AWeapon
{
	public:
		Sword();
		Sword(Sword const &other);
		virtual ~Sword();

		Sword &operator=(Sword const &other);
		void attack() const;
};

#endif
