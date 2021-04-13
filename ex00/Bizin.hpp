#ifndef BIZIN_HPP
#define BIZIN_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Bizin: public Victim
{
	public:
		Bizin(std::string name);
		Bizin(Bizin const &other);
		virtual ~Bizin();

		Bizin &operator=(Bizin const &other);
		std::string nameGetter() const;
		void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Bizin const &ref);

#endif
