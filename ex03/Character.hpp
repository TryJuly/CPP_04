/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 08:11:27 by strieste          #+#    #+#             */
/*   Updated: 2026/03/12 10:36:39 by strieste         ###   ########.fr       */
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
		~Character();

		Character&	operator=(Character const &copy);
		std::string const & getName() const override;
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;

		private:
			std::string	_name;
			AMateria	*_slot[4];
};

#endif
