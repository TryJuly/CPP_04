/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:06:19 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:50:49 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/AAnimal.hpp"

AAnimal::AAnimal(): _type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &copy) : _type(copy._type)
{
	std::cout << "Copy constructor Animal called" << std::endl;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor Animal called" << std::endl;
	return ;
}

AAnimal&	AAnimal::operator=(AAnimal const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Copy assignment Animal called" << std::endl;
	return (*this);
}

const std::string&	AAnimal::getType(void) const
{
	return (this->_type);
}
