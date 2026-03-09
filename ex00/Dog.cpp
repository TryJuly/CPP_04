/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:27:32 by strieste          #+#    #+#             */
/*   Updated: 2026/03/09 15:34:25 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	this->_type = copy._type;
	return ;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	return ;
}

Dog&	Dog::operator=(Dog const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Copy assignment Dog called" << std::endl;
	return ;
}

void	Dog::makeSound(void)
{
	std::cout << "Bark !" << std::endl;
	return ;
}
