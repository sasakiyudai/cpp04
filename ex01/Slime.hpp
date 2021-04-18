#ifndef SLIME_HPP
#define SLIME_HPP

#include "Enemy.hpp"

class Slime: public Enemy
{
	public:
		Slime();
		Slime(Slime const &other);
		virtual ~Slime();
		Slime &operator=(Slime const &other);
		void takeDamage(int damagePoints);
};

#endif
