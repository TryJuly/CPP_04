/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:28:31 by strieste          #+#    #+#             */
/*   Updated: 2026/03/12 08:04:38 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("Empty")
{
	std::cout << "[ INFO ] Default constructor AMateria called" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &copy)
{
	this->_type = copy._type;
	return ;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	return ;
}

AMateria::~AMateria()
{}

AMateria&	AMateria::operator=(AMateria const &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}

void	AMateria::use(ICharacter& target)
{
	// std::cout << this->getType() << ": "
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}