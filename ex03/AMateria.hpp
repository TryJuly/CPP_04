/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:23:30 by strieste          #+#    #+#             */
/*   Updated: 2026/03/10 15:31:25 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class AMateria
{
	public:
		AMateria();
		AMateria(AMateria const &copy);
		AMateria(std::string const &type);
		~AMateria();

		AMateria&	operator=(AMateria const &copy);
		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharater& target);
		
	protected:
		
};

#endif