/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:14:32 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:46:22 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Sleep";
	std::cout << "Default Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &copy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	std::cout << "Copy constructor Brain called" << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
	return ;
}

Brain&	Brain::operator=(Brain const &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	std::cout << "Copy assignment Brain called" << std::endl;
	return (*this);
}

std::string const	Brain::getIdeasBrain(int index) const
{
	if (index < 0 || index >= 100)
		return (NULL);
	return (_ideas[index]);
}

void	Brain::setIdeasBrain(std::string const &ideas, int index)
{
	if (index < 0 || index >= 100)
		return ;
	_ideas[index] = ideas;
	return ;
}