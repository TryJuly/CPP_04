/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:11:47 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 11:05:30 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(Ice const &copy)
{
	this->_type = copy._type;
	return ;
}

Ice::~Ice() {}

Ice&	Ice::operator=(Ice const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
	return ;
}

std::string const	&Ice::getType() const
{
	return (this->_type);
}
