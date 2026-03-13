/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:23:30 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 09:44:59 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(AMateria const &copy);
		AMateria(std::string const &type);
		virtual ~AMateria();

		AMateria&	operator=(AMateria const &copy);
		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target) = 0;
		virtual std::string const &getType() const = 0;

	protected:
		std::string	_type;
};

#endif