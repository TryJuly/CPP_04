/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:15:43 by strieste          #+#    #+#             */
/*   Updated: 2026/03/10 09:56:35 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);
		~WrongAnimal();

		WrongAnimal&	operator=(WrongAnimal const &copy);
		void	makeSound(void) const ;
		const std::string&	getType(void) const;

		protected:
		std::string	_type;
};


#endif