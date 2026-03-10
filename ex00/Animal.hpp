/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:03:00 by strieste          #+#    #+#             */
/*   Updated: 2026/03/10 09:51:56 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal const &copy);
		virtual ~Animal();

		Animal&	operator=(Animal const &copy);
		virtual void	makeSound(void) const;
		const std::string&	getType(void) const;

	protected:
		std::string	_type;

};

#endif