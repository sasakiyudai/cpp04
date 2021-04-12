#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon: public Victim
{
	public:
		Peon(std::string name);
		Peon(Peon const &other);
		virtual ~Peon();

		Peon &operator=(Peon const &other);
		std::string nameGetter() const;
		void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Peon const &ref);

#endif
