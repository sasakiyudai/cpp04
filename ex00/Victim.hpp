#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
	public:
		Victim(std::string name);
		Victim(Victim const &other);
		virtual ~Victim();

		Victim &operator=(Victim const &other);
		std::string nameGetter() const;
		virtual void getPolymorphed() const;
	protected:
		std::string name;
};

std::ostream &operator<<(std::ostream &out, Victim const &ref);

#endif
