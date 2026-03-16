/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:36:10 by strieste          #+#    #+#             */
/*   Updated: 2026/03/10 15:06:22 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <new>

class Cat: public AAnimal
{
	public:
		Cat();
		Cat(Cat const &copy);
		virtual ~Cat();

		Cat&	operator=(Cat const &copy);
		virtual void	makeSound(void) const;
		const std::string	getIdeas(const unsigned int index);
		void	setIdeas(std::string const &idea, unsigned int index);

	private:
		Brain	*_newBrain;
};

#endif