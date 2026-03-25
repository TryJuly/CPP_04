/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 08:11:27 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:58:50 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(Character const &copy);
		Character(std::string const &name);
		virtual ~Character();

		Character&	operator=(Character const &copy);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria	*_inventory[4];
};

#endif
