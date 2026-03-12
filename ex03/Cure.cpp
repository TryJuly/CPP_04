/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:38:14 by strieste          #+#    #+#             */
/*   Updated: 2026/03/12 11:14:08 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
	return ;
}

Cure::Cure(Cure const &copy)
{
	this->_type = copy._type;
	return ;
}

Cure::~Cure() {}

Cure&	Cure::operator=(Cure const &copy)
{
	this->_type = copy._type;
	return ;
}

AMateria*	Cure::clone() const {return (new Cure);}

void	Cure::use(ICharacter& target)
{
	
}

std::string const &Cure::getType() const
{}
