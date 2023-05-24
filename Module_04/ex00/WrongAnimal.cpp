/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 07:25:55 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
    std::cout << "[ WrongAnimal ] - Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type) {
    std::cout << "[ WrongAnimal ] - Parameterized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs) : _type(rhs._type) {
    std::cout << "[ WrongAnimal ] - Copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs) {
	if (this!= &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "[ WrongAnimal ] - Default destructor called" << std::endl;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::string const	&WrongAnimal::getType(void) const {
	return this->_type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "*Wrong animal sounds*" << std::endl;
}
