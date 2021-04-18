#include "Character.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "Slime.hpp"
#include "Sword.hpp"

int main()
{
	Character* hikakin = new Character("hikakin");
	Character* seikin = new Character("seikin");
	std::cout << *hikakin;
	std::cout << *seikin;
	Enemy* e_slime = new Slime();
	Enemy* e_mutant = new SuperMutant();
	AWeapon* w_plasma = new PlasmaRifle();
	AWeapon* w_sword = new Sword();
	hikakin->equip(w_plasma);
	std::cout << *hikakin;
	seikin->equip(w_sword);
	std::cout << *seikin;
	hikakin->attack(e_slime);
	std::cout << *hikakin;
	seikin->attack(e_mutant);
	std::cout << *seikin;
	hikakin->attack(e_mutant);
	std::cout << *hikakin;
	seikin->attack(e_slime);
	std::cout << *seikin;
	return 0;
}