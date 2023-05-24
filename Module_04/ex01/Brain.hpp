/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 04:31:35 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX01_BRAIN_HPP_
#define MODULE_04_EX01_BRAIN_HPP_

#include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(Brain const &rhs);
		Brain	&operator=(Brain const &rhs);
		~Brain(void);

		void		setIdea(int index, std::string const &idea);
		std::string	&getIdea(int index);
		Brain		*getAdr(void);

	private:
		std::string	_ideas[100];
};

#endif  // MODULE_04_EX01_BRAIN_HPP_
