/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:23:30 by strieste          #+#    #+#             */
/*   Updated: 2026/03/12 11:08:06 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria();
		AMateria(AMateria const &copy);
		AMateria(std::string const &type);
		~AMateria();

		AMateria&	operator=(AMateria const &copy);
		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target);
		virtual std::string const &getType() const;

	protected:
		std::string	_type;
};

#endif