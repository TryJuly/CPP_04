/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:37:56 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:14:43 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Cat.hpp"

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
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow !" << std::endl;
	return ;
}
