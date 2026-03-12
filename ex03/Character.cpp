/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 08:24:46 by strieste          #+#    #+#             */
/*   Updated: 2026/03/12 10:56:31 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("RandomPlayer")
{
	for (int i = 0; i < 4; i++)
		this->_slot[i] == NULL;
	return ;
}

Character::Character(Character const &copy)
{
	this->_name = copy._name;
	this->_slot[0] = copy._slot[0];
	this->_slot[1] = copy._slot[1];
	this->_slot[2] = copy._slot[2];
	this->_slot[3] = copy._slot[3];
	return ;
}

Character::Character(std::string const &name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_slot[i] == NULL;
	return ;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] != NULL)
			delete this->_slot[i];
	}
}

Character&	Character::operator=(Character const &copy)
{
	// Character	*newCharacter = new Character;
	
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (copy._slot[i]->getType() == "cure")
			this->_slot[i] = copy._slot[i];
	}
}

std::string const & Character::getName() const {return (this->_name);}

void Character::equip(AMateria* m)
{
	int	i;
	
	for (i = 0; i < 4 && this->_slot[i] == NULL; i++);
	this->_slot[i] = m;
	return ;
}

void Character::unequip(int idx)
{
	this->_slot[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (!this->_slot[idx] || this->_slot[idx] == NULL)
		std::cout << "No weapon at this inventory index" << std::endl;
	else if (this->_slot[idx]->getType() == "cure")
		std::cout << "* heals " << this->_name << "'s wounds *" << std::endl;
	else
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
