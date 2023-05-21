/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 06:57:04 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal() {
    std::cout << "[ Dog ] - Default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &rhs) : AAnimal(rhs) {
    std::cout << "[ Dog ] - Copy constructor called" << std::endl;
	*this = rhs;
}

Dog	&Dog::operator=(Dog const &rhs) {
	if (this!= &rhs) {
		AAnimal::operator=(rhs);
	}
	return *this;
}

Dog::~Dog(void) {
    std::cout << "[ Dog ] - Default destructor called" << std::endl;
	delete _brain;
}


void	Dog::makeSound(void) const {
	std::cout << "*Dog sounds*" << std::endl;
}
