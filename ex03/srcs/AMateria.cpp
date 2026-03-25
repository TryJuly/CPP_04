/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 09:38:32 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:55:37 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/AMateria.hpp"

AMateria::~AMateria() {}
AMateria::AMateria(): _type("empty") {}
AMateria::AMateria(std::string const &type): _type(type) {}

AMateria::AMateria(AMateria const &copy)
{
	this->_type = copy._type;
	return ;
}

AMateria&	AMateria::operator=(AMateria const &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}
