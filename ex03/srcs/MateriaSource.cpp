/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:13:42 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:56:27 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->learned[i] = nullptr;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.learned[i])
			this->learned[i] = copy.learned[i]->clone();
		else
			this->learned[i] = nullptr;
	}
	return ;
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i])
			delete this->learned[i];
	}
	return ;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
			if (this->learned[i])
				delete this->learned[i];
		for (int i = 0; i < 4; i++)
		{
			if (copy.learned[i])
				this->learned[i] = copy.learned[i]->clone();
			else 
				this->learned[i] = nullptr;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] == nullptr)
		{
			this->learned[i] = m;
			return ;
		}
	}
	// delete m
	std::cout << "Learning inventory is full" << std::endl;
	return ;
}
AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] && this->learned[i]->getType() == type)
			return (this->learned[i]->clone());
	}
	return (nullptr);
}