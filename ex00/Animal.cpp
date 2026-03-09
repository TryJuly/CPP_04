/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:06:19 by strieste          #+#    #+#             */
/*   Updated: 2026/03/09 15:34:29 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const &copy) : _type(copy._type)
{
	std::cout << "Copy constructor Animal called" << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
	return ;
}

Animal&	Animal::operator=(Animal const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Copy assignment Animal called" << std::endl;
	return (*this);
}

void	Animal::makeSound(void)
{
	std::cout << "Silence" << std::endl;
	return ;
}
