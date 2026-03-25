/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 07:07:43 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 10:15:08 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &copy);
		virtual ~MateriaSource();

		MateriaSource&	operator=(MateriaSource const &copy);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

		private:
			AMateria	*learned[4];
};

#endif
