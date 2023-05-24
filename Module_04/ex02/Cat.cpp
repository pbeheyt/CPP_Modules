/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 22:24:22 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat"), _brain(new Brain()) {
    std::cout << "[ Cat ] - Default constructor called" << std::endl;
}

Cat::Cat(Cat const &rhs) : AAnimal(rhs) {
    std::cout << "[ Cat ] - Copy constructor called" << std::endl;
	this->_brain = new Brain(*rhs._brain);
}

Cat	&Cat::operator=(Cat const &rhs) {
	if (this!= &rhs) {
		AAnimal::operator=(rhs);
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Cat::~Cat(void) {
    std::cout << "[ Cat ] - Default destructor called" << std::endl;
	delete this->_brain;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Cat::setBrainIdea(int index, std::string const &idea) {
	this->_brain->setIdea(index, idea);
}

std::string	&Cat::getBrainIdea(int index) {
	return this->_brain->getIdea(index);
}

Brain	*Cat::getBrainAdr(void) {
	return this->_brain->getAdr();
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Cat::makeSound(void) const {
	std::cout << "*Cat sounds*" << std::endl;
}
