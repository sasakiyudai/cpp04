#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include <iostream>

int main()
{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISpaceMarine* bob1 = new TacticalMarine;
		ISpaceMarine* jim1 = new AssaultTerminator;
		ISpaceMarine* bob2 = new TacticalMarine;
		ISpaceMarine* jim2 = new AssaultTerminator;
		ISpaceMarine* bob3 = new TacticalMarine;
		ISpaceMarine* jim3 = new AssaultTerminator;
		ISpaceMarine* bob4 = new TacticalMarine;
		ISpaceMarine* jim4 = new AssaultTerminator;
		ISpaceMarine* bob5 = new TacticalMarine;
		ISpaceMarine* jim5 = new AssaultTerminator;
		ISpaceMarine* bob6 = new TacticalMarine;
		ISpaceMarine* jim6 = new AssaultTerminator;
		ISpaceMarine* bob7 = new TacticalMarine;
		ISpaceMarine* jim7 = new AssaultTerminator;
		ISpaceMarine* bob8 = new TacticalMarine;
		ISpaceMarine* jim8 = new AssaultTerminator;
		Squad bobs = Squad();
		Squad jims = Squad();

		bobs.push(bob);
		jims.push(jim);
		bobs.push(bob1);
		jims.push(jim1);
		bobs.push(bob2);
		jims.push(jim2);
		bobs.push(bob3);
		jims.push(jim3);
		bobs.push(bob4);
		jims.push(jim4);
		bobs.push(bob5);
		jims.push(jim5);
		bobs.push(bob6);
		jims.push(jim6);
		bobs.push(bob7);
		jims.push(jim7);
		bobs.push(bob8);
		jims.push(jim8);

		for (int i = 0; i < 9; ++i)
		{
			ISpaceMarine* cur_b = bobs.getUnit(i);
			ISpaceMarine* cur_j = jims.getUnit(i);
			cur_b->battleCry();
			cur_b->rangedAttack();
			cur_j->battleCry();
			cur_j->meleeAttack();
		}
		bobs = jims;
		std::cout << "===" << std::endl;
		for (int i = 0; i < 9; ++i)
		{
			ISpaceMarine* cur_b = bobs.getUnit(i);
			ISpaceMarine* cur_j = jims.getUnit(i);
			cur_b->battleCry();
			cur_b->rangedAttack();
			cur_j->battleCry();
			cur_j->meleeAttack();
		}
		return 0;
}