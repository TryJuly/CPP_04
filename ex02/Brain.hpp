/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:12:59 by strieste          #+#    #+#             */
/*   Updated: 2026/03/10 15:06:40 by strieste         ###   ########.fr       */
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

		std::string	_ideas[100];
		private:
};

#endif