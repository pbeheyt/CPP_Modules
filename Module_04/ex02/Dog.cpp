/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 23:12:14 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog"), _brain(new Brain()) {
    std::cout << "[ Dog ] - Default constructor called" << std::endl;
}

Dog::Dog(Dog const &rhs) : AAnimal(rhs), _brain(new Brain(*rhs._brain)) {
    std::cout << "[ Dog ] - Copy constructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs) {
	if (this!= &rhs) {
		AAnimal::operator=(rhs);
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Dog::~Dog(void) {
    std::cout << "[ Dog ] - Default destructor called" << std::endl;
	delete this->_brain;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Dog::setBrainIdea(int index, std::string const &idea) {
	this->_brain->setIdea(index, idea);
}

std::string	&Dog::getBrainIdea(int index) {
	return this->_brain->getIdea(index);
}

Brain	*Dog::getBrainAdr(void) {
	return this->_brain->getAdr();
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Dog::makeSound(void) const {
	std::cout << "*Dog sounds*" << std::endl;
}
