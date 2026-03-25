/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:12:59 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 13:52:41 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &copy);
		virtual ~Brain();

		Brain&	operator=(Brain const &copy);
		std::string const	getIdeasBrain(int index) const;
		void	setIdeasBrain(std::string const &ideas, int index);

	private:
		std::string	_ideas[100];
};

#endif