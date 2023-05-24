/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 22:44:28 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal") {
    std::cout << "[ Animal ] - Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string const &type) : _type(type) {
    std::cout << "[ Animal ] - Parameterized constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &rhs) : _type(rhs._type) {
	std::cout << "[ Animal ] - Copy constructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs) {
	if (this!= &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AAnimal::~AAnimal(void) {
    std::cout << "[ Animal ] - Default destructor called" << std::endl;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::string const	&AAnimal::getType(void) const {
	return this->_type;
}

void	AAnimal::makeSound(void) const {
	std::cout << "*Animal sounds*" << std::endl;
}
