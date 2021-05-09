#include "Enemy.hpp"

Enemy::Enemy()
{
	
}

Enemy::Enemy(int hp, std::string const & type)
{
	this->type = type;
	this->hp = hp;
}

Enemy::Enemy(Enemy const &other)
{
	*this = other;
}

Enemy::~Enemy()
{

}

Enemy &Enemy::operator=(Enemy const &other)
{
	this->type = other.type;
	this->hp = other.hp;
	return (*this);
}

std::string const &Enemy::getType() const
{
	return (this->type);
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::takeDamage(int damagePoints)
{
	if (damagePoints >= 0)
	{
		if ((this->hp -= damagePoints) < 0)
			this->hp = 0;
	}
}