#ifndef RAD_SCORPION_HPP
#define RAD_SCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const &other);
		virtual ~RadScorpion();
		RadScorpion &operator=(RadScorpion const &other);
		void takeDamage(int damagePoints);
};

#endif
