/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 04:59:50 by pbeheyt          ###   ########.fr       */
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

	private:
		std::string	_ideas[100];
};

#endif  // MODULE_04_EX01_BRAIN_HPP_
