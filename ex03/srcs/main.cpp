/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:36:44 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 14:09:51 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/AMateria.hpp"
#include "../header/Character.hpp"
#include "../header/Cure.hpp"
#include "../header/Ice.hpp"
#include "../header/ICharacter.hpp"
#include "../header/IMateriaSource.hpp"
#include "../header/MateriaSource.hpp"
#include <iostream>

int main()
{
	std::cout << "#####	Subject	#####" << std::endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	std::cout << "\n #####	Learn more than 4 types	#####" << std::endl;

	IMateriaSource* src1 = new MateriaSource();

	src1->learnMateria(new Ice());
	src1->learnMateria(new Cure());
	src1->learnMateria(new Ice());
	src1->learnMateria(new Cure());
	src1->learnMateria(new Ice());

	AMateria* m = src1->createMateria("ice");
	if (m)
		delete m;
	delete src1;

	std::cout << "\n #####	Invalide use	#####" << std::endl;
	
	ICharacter* character = new Character("Poke");
	ICharacter* target = new Character("Pake");
	AMateria* ice = new Ice;

	character->use(0, *target);
	character->use(3, *target);
	character->use(-1, *target);
	character->use(4, *target);

	std::cout << "\n Valide shoot" << std::endl;
	
	character->equip(ice);
	character->use(0, *target);
	character->unequip(0);

	ice->use(*target);
	
	delete ice;
	delete target;
	delete character;

	return 0;
}