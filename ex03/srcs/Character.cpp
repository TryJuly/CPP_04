/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 09:45:46 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 10:58:16 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("DefaultName")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	return ;
}
Character::Character(std::string const &name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	return ;
}

Character::Character(Character const &copy): _name(copy.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
		else
			this->_inventory[i] = nullptr;
	}
	return ;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	return ;
}

Character&	Character::operator=(Character const &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
			if (this->_inventory[i])
				delete this->_inventory[i];
		for (int i = 0; i < 4; i++)
		{
			if (copy._inventory[i])
				this->_inventory[i] = copy._inventory[i]->clone();
			else
				this->_inventory[i] = nullptr;
		}
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << this->getName() << " Inventory is full" << std::endl;
	return ;
}

void	Character::unequip(int idx)
{
	this->_inventory[idx] = nullptr;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx] && idx >= 0 && idx < 4)
		this->_inventory[idx]->use(target);
	else
		std::cout << "No item at this index" << std::endl;
	return ;
}