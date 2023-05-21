/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 22:25:39 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
    std::cout << "[ Animal ] - Default constructor called" << std::endl;
}

Animal::Animal(std::string const &type) : _type(type) {
    std::cout << "[ Animal ] - Default constructor called" << std::endl;
}

Animal::Animal(Animal const &rhs) {
	std::cout << "[ Animal ] - Copy constructor called" << std::endl;
	*this = rhs;
}

Animal	&Animal::operator=(Animal const &rhs) {
	if (this!= &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

Animal::~Animal(void) {
    std::cout << "[ Animal ] - Default destructor called" << std::endl;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

const std::string &Animal::getType(void) const {
	return this->_type;
}

void	Animal::makeSound(void) const {
	std::cout << "*Animal sounds*" << std::endl;
}
