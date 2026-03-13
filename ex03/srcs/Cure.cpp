/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:02:17 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 10:11:26 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(Cure const &copy)
{
	this->_type = copy._type;
	return ;
}

Cure::~Cure() {}

Cure&	Cure::operator=(Cure const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

std::string const	&Cure::getType() const
{
	return (this->_type);
}
