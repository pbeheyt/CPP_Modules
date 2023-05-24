/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 22:44:52 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "[ Brain ] - Default constructor called" << std::endl;
	this->_ideas[0] = "Eating";
	this->_ideas[1] = "Sleeping";
	this->_ideas[2] = "Playing";
}

Brain::Brain(Brain const &rhs) {
    std::cout << "[ Brain ] - Copy constructor called" << std::endl;
	for(int i = 0; i < 100; i++) {
		this->_ideas[i] = rhs._ideas[i];
	}
}

Brain	&Brain::operator=(Brain const &rhs) {
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

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Brain::setIdea(int index, std::string const &idea) {
	this->_ideas[index] = idea;
}

std::string	&Brain::getIdea(int index) {
	return this->_ideas[index];
}

Brain	*Brain::getAdr(void) {
	return &(*this);
}