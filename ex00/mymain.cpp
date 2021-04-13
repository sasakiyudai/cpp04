#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Bizin.hpp"
#include <iostream>

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Bizin hashikan("hashikan");
	std::cout << robert << jim << joe << hashikan;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(hashikan);
	return 0;
}