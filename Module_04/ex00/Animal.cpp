/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 07:11:31 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
    std::cout << "[ Animal ] - Default constructor called" << std::endl;
}

Animal::Animal(const Animal &rhs) {
	_type = rhs._type;
    std::cout << "[ Animal ] - Copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &rhs) {
	_type = rhs._type;
    std::cout << "[ Animal ] - Assignement constructor called" << std::endl;
	return *this;
}

Animal::~Animal(void) {
    std::cout << "[ Animal ] - Default destructor called" << std::endl;
}


const std::string &Animal::getType(void) const {
	return _type;
}

void	Animal::makeSound(void) const {
	std::cout << "*Animal sounds*" << std::endl;
}
