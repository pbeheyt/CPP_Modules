/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 05:46:22 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal() {
	this->_type = "Dog";
    std::cout << "[ " << this->_type << " ] - Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const &rhs) : AAnimal(rhs) {
    std::cout << "[ " << this->_type << " ] - Copy constructor called" << std::endl;
	*this = rhs;
}

Dog	&Dog::operator=(Dog const &rhs) {
	std::cout << "[ " << this->_type << " ] - Assignement constructor called" << std::endl;
	if (this!= &rhs) {
		AAnimal::operator=(rhs);
	}
	return *this;
}

Dog::~Dog(void) {
    std::cout << "[ " << this->_type << " ] - Default destructor called" << std::endl;
	delete _brain;
}


void	Dog::makeSound(void) const {
	std::cout << "*" << this->_type << " sounds*" << std::endl;
}
