/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:37:56 by strieste          #+#    #+#             */
/*   Updated: 2026/03/09 15:40:17 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	this->_type = copy._type;
	return ;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
	return ;
}

Cat&	Cat::operator=(Cat const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Copy assignment Cat called" << std::endl;
	return ;
}

void	Cat::makeSound(void)
{
	std::cout << "Meow !" << std::endl;
	return ;
}
