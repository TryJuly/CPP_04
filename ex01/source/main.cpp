/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:59:29 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:25:13 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"
#include "../header/Dog.hpp"
#include "../header/Cat.hpp"
#include "../header/Brain.hpp"

int main()
{
	Animal	*array[6];

	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			array[i] = new Cat;
		else
			array[i] = new Dog;
	}
	std::cout << std::endl;

	Dog	newDog;
	Dog	pit(newDog);

	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Dog 1: " << newDog.getIdeas(i) << std::endl;

	for (int i = 0; i < 3; i++)
		std::cout << "Dog 2: " << pit.getIdeas(i) << std::endl;

	for (int i = 0; i < 3; i++)
		newDog.setIdeas("Play", i);

	for (int i = 0; i < 3; i++)
		std::cout << "Dog 1: " << newDog.getIdeas(i) << std::endl;

	for (int i = 0; i < 3; i++)
		std::cout << "Dog 2: " << pit.getIdeas(i) << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
		delete array[i];
	return 0;
}
