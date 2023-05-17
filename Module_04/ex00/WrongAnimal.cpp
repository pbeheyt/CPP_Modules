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
    std::cout << "[ " << this->_type << " ] - Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs) {
    std::cout << "[ " << this->_type << " ] - Copy constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs) {
	std::cout << "[ " << this->_type << " ] - Assignement constructor called" << std::endl;
	if (this!= &rhs) {
		_type = rhs._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "[ " << this->_type << " ] - Default destructor called" << std::endl;
}


const std::string &WrongAnimal::getType(void) const {
	return this->_type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "*Wrong Animal sounds*" << std::endl;
}
