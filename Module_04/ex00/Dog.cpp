/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 22:32:43 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << "[ Dog ] - Default constructor called" << std::endl;
}

Dog::Dog(Dog const &rhs) : Animal(rhs) {
    std::cout << "[ Dog ] - Copy constructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs) {
	if (this!= &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

Dog::~Dog(void) {
    std::cout << "[ Dog ] - Default destructor called" << std::endl;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Dog::makeSound(void) const {
	std::cout << "*Dog sounds*" << std::endl;
}
