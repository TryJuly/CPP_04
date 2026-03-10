/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:29:36 by strieste          #+#    #+#             */
/*   Updated: 2026/03/10 09:33:14 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	this->_type = copy._type;
	std::cout << "Copy constructor WrongCat called" << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(WrongCat const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Copy assignment Animal called" << std::endl;
	return (*this);
}

