/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:43:02 by strieste          #+#    #+#             */
/*   Updated: 2026/03/12 10:44:37 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
	return ;
}

Ice::Ice(Ice const &copy)
{
	this->_type = copy._type;
	return ;
}

Ice::~Ice() {}

Ice&	Ice::operator=(Ice const &copy)
{
	this->_type = copy._type;
	return ;
}
