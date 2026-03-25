/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:19:33 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:14:57 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy): _type(copy._type)
{
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Copy assignment WrongAnimal called" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound(void) const 
{
	std::cout << "WrongSound" << std::endl;
	return ;
}

const std::string&	WrongAnimal::getType(void) const
{
	return (this->_type);
}

