/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 09:44:23 by strieste          #+#    #+#             */
/*   Updated: 2026/03/12 11:08:18 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure();
		~Cure();

		Cure&	operator=(Cure const &copy);
		virtual AMateria*	clone() const override;
		virtual void	use(ICharacter& target) override;
		std::string const &getType() const override;
};

#endif