/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 06:41:41 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "[ Brain ] - Default constructor called" << std::endl;
}

Brain::Brain(Brain const &rhs) {
    std::cout << "[ Brain ] - Copy constructor called" << std::endl;
	*this = rhs;
}

Brain	&Brain::operator=(Brain const &rhs) {
	std::cout << "[ Brain ] - Assignement constructor called" << std::endl;
	if (this!= &rhs) {
		for(int i = 0; i < 100; i++) {
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain(void) {
    std::cout << "[ Brain ] - Default destructor called" << std::endl;
}

