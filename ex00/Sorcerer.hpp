#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer
{
	private:
		Sorcerer();
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &other);
		virtual ~Sorcerer();

		Sorcerer &operator=(Sorcerer const &other);
		void polymorph(Victim const &victim) const;
		std::string nameGetter() const;
		std::string titleGetter() const;
	private:
		std::string name;
		std::string title;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &ref);

#endif
