/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:03:00 by strieste          #+#    #+#             */
/*   Updated: 2026/03/10 14:58:04 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal const &copy);
		virtual ~AAnimal();

		AAnimal&	operator=(AAnimal const &copy);
		virtual void	makeSound(void) const = 0;
		const std::string&	getType(void) const;

	protected:
		std::string	_type;
};

#endif