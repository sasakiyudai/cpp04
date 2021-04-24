#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* zero;
	AMateria* one;
	zero = tmp = src->createMateria("ice");
	me->equip(tmp);
	one = tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("normal");
	me->equip(tmp);
	tmp = src->createMateria("water");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << "--------" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << "========" << std::endl;
	std::cout << zero->getType() << " : " << zero->getXP() << std::endl;
	std::cout << one->getType() << " : " << one->getXP() << std::endl;
	me->unequip(0);
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << "--------" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << "========" << std::endl;
	std::cout << zero->getType() << " : " << zero->getXP() << std::endl;
	std::cout << one->getType() << " : " << one->getXP() << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}