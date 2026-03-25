/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:29:37 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 09:19:11 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const &copy);
		virtual ~Ice();

		Ice&	operator=(Ice const &copy);
		virtual AMateria*	clone() const;
		virtual void	use(ICharacter& target);
		std::string const &getType() const;
};

#endif