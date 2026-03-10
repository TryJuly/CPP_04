/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:22:50 by strieste          #+#    #+#             */
/*   Updated: 2026/03/10 15:07:20 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const &copy);
		virtual ~Dog();

		Dog&	operator=(Dog const &copy);
		virtual void	makeSound(void) const;
		const std::string	getIdeas(const unsigned int index);
		void	setIdeas(std::string const &idea, unsigned int index);

		private:
			Brain	*_newBrain;
};

#endif