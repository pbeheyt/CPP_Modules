/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 05:45:57 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal") {
    std::cout << "[ " << this->_type << " ] - Default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &rhs) {
	std::cout << "[ " << this->_type << " ] - Copy constructor called" << std::endl;
	*this = rhs;
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs) {
	std::cout << "[ " << this->_type << " ] - Assignement constructor called" << std::endl;
	if (this!= &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AAnimal::~AAnimal(void) {
    std::cout << "[ " << this->_type << " ] - Default destructor called" << std::endl;
}


const std::string &AAnimal::getType(void) const {
	return _type;
}

void	AAnimal::makeSound(void) const {
	std::cout << "*" << this->_type << " sounds*" << std::endl;
}
