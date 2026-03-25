/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:27:32 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:45:44 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_newBrain = new Brain;
	return ;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	this->_type = copy._type;
	this->_newBrain = new Brain;
	for (int i = 0; i < 100; i++)
		_newBrain->setIdeasBrain(copy._newBrain->getIdeasBrain(i), i);
			// this->_newBrain->_ideas[i] = copy._newBrain->_ideas[i];
	return ;
}

Dog::~Dog()
{
	if (_newBrain != NULL)
		delete _newBrain;
	std::cout << "Destructor Dog called" << std::endl;
	return ;
}

Dog&	Dog::operator=(Dog const &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
		if (_newBrain != NULL)
		{
			delete _newBrain;
			_newBrain = new Brain;
		}
		for (int i = 0; i < 100; i++)
			_newBrain->setIdeasBrain(copy._newBrain->getIdeasBrain(i), i);
			// this->_newBrain->_ideas[i] = copy._newBrain->_ideas[i];
	}
	std::cout << "Copy assignment Dog called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark !" << std::endl;
	return ;
}

const std::string	Dog::getIdeas(const unsigned int index)
{
	return (this->_newBrain->getIdeasBrain(index));
}

void	Dog::setIdeas(std::string const &idea, unsigned int index)
{
	this->_newBrain->setIdeasBrain(idea, index);
	return ;
}