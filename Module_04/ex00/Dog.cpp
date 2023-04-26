/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 08:14:24 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	_type = "Dog";
    std::cout << "[ " << _type << " ] - Default constructor called" << std::endl;
}

Dog::Dog(Dog const &rhs) : Animal(rhs) {
	*this = rhs;
    std::cout << "[ " << _type << " ] - Copy constructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs) {
	if (this!= &rhs) {
		Animal::operator=(rhs);
	}
	std::cout << "[ " << _type << " ] - Assignement constructor called" << std::endl;
	return *this;
}

Dog::~Dog(void) {
    std::cout << "[ " << _type << " ] - Default destructor called" << std::endl;
}


void	Dog::makeSound(void) const {
	std::cout << "*" << _type << " sounds*" << std::endl;
}
