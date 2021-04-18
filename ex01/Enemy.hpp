#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
	protected:
		int hp;
		std::string type;
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &other);
		virtual ~Enemy();
		Enemy &operator=(Enemy const &other);
		std::string const &getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif