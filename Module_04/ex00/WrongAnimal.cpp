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
    std::cout << "[ " << _type << " ] - Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs) {
	*this = rhs;
    std::cout << "[ " << _type << " ] - Copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs) {
	if (this!= &rhs) {
		_type = rhs._type;
		std::cout << "[ " << _type << " ] - Assignement constructor called" << std::endl;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "[ " << _type << " ] - Default destructor called" << std::endl;
}


const std::string &WrongAnimal::getType(void) const {
	return _type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "*" << _type << " sounds*" << std::endl;
}
