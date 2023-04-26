/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 07:40:36 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
    std::cout << "[ " << _type << " ] - Default constructor called" << std::endl;
}

Animal::Animal(Animal const &rhs) {
	*this = rhs;
    std::cout << "[ " << _type << " ] - Copy constructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs) {
	if (this!= &rhs) {
		_type = rhs._type;
		std::cout << "[ " << _type << " ] - Assignement constructor called" << std::endl;
	}
	return *this;
}

Animal::~Animal(void) {
    std::cout << "[ " << _type << " ] - Default destructor called" << std::endl;
}


const std::string &Animal::getType(void) const {
	return _type;
}

void	Animal::makeSound(void) const {
	std::cout << "*" << _type << " sounds*" << std::endl;
}