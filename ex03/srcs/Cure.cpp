/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:02:17 by strieste          #+#    #+#             */
/*   Updated: 2026/03/16 15:42:34 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::~Cure() { return ; }
Cure::Cure(): AMateria("cure") { return ; }
AMateria*	Cure::clone() const { return (new Cure); }
std::string const	&Cure::getType() const { return (this->_type); }

Cure::Cure(Cure const &copy)
{
	this->_type = copy._type;
	return ;
}

Cure&	Cure::operator=(Cure const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
