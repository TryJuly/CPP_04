/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:37:56 by strieste          #+#    #+#             */
/*   Updated: 2026/03/16 15:39:11 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_newBrain = new Brain;
	return ;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	this->_type = copy._type;
	this->_newBrain = new Brain;
	for (int i = 0; i < 100; i++)
			this->_newBrain->_ideas[i] = copy._newBrain->_ideas[i];
	return ;
}

Cat::~Cat()
{
	delete _newBrain;
	std::cout << "Destructor Cat called" << std::endl;
	return ;
}

Cat&	Cat::operator=(Cat const &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
		for (int i = 0; i < 100; i++)
			this->_newBrain->_ideas[i] = copy._newBrain->_ideas[i];
	}
	std::cout << "Copy assignment Cat called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow !" << std::endl;
	return ;
}

const std::string	Cat::getIdeas(const unsigned int index)
{
	return (this->_newBrain->_ideas[index]);
}

void	Cat::setIdeas(std::string const &idea, unsigned int index)
{
	this->_newBrain->_ideas[index] = idea;
	return ;
}
