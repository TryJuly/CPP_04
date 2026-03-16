/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:11:47 by strieste          #+#    #+#             */
/*   Updated: 2026/03/16 15:43:22 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::~Ice() { return ; }
Ice::Ice(): AMateria("ice") { return ; }
AMateria*	Ice::clone() const { return (new Ice); }
std::string const	&Ice::getType() const { return (this->_type); }

Ice::Ice(Ice const &copy)
{
	this->_type = copy._type;
	return ;
}

Ice&	Ice::operator=(Ice const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
	return ;
}
