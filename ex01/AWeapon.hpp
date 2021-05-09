#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon
{
	protected:
		AWeapon();
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &other);
		virtual ~AWeapon();

		AWeapon &operator=(AWeapon const &other);
		std::string const &getName() const;
		int getDamagePoints() const;
		int getAp() const;
		virtual void attack() const;
	protected:
		std::string name;
		int ap;
		int damagePoints;
};

#endif
