/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:03:00 by strieste          #+#    #+#             */
/*   Updated: 2026/03/09 15:30:34 by strieste         ###   ########.fr       */
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
		~Animal();

		Animal&	operator=(Animal const &copy);
		virtual void	makeSound(void);

	protected:
		std::string	_type;

};

#endif