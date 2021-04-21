#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad: public ISquad
{
	public:
		Squad();
		Squad(Squad const &other);
		virtual ~Squad();

		Squad &operator=(Squad const &other);
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
	private:
		ISpaceMarine **units;
		int unitsLen;
};

#endif
