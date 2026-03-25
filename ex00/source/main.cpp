/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:59:29 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:18:07 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"
#include "../header/Dog.hpp"
#include "../header/Cat.hpp"
#include "../header/WrongAnimal.hpp"
#include "../header/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << "Call with Virtual makeSound" << std::endl;
	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "Animal sound: ";
	meta->makeSound();
	std::cout << "Dog sound   : ";
	j->makeSound();
	std::cout << "Cat sound   : ";
	i->makeSound(); //will output the cat sound!
	std::cout << std::endl;
	
	delete (meta);
	delete (j);
	delete (i);

	std::cout << std::endl;
	const WrongAnimal* ptr = new WrongAnimal();
	const WrongAnimal* ptr1 = new WrongCat();
	std::cout << std::endl;
	std::cout << "Call without Virtual makeSound" << std::endl;
	std::cout << std::endl;
	std::cout << ptr->getType() << std::endl;
	std::cout << ptr1->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "WrongAnimal sound: ";
	ptr->makeSound();
	std::cout << "WrongCat sound   : ";
	ptr1->makeSound();
	std::cout << std::endl;

	delete (ptr);
	delete (ptr1);
	return 0;
}
