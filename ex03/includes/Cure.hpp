/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 09:44:23 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 09:19:07 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(Cure const &copy);
		virtual ~Cure();

		Cure&	operator=(Cure const &copy);
		virtual AMateria*	clone() const;
		virtual void	use(ICharacter& target);
		std::string const &getType() const;
};

#endif