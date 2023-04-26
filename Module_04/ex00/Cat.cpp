/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 08:13:48 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	_type = "Cat";
    std::cout << "[ " << _type << " ] - Default constructor called" << std::endl;
}

Cat::Cat(Cat const &rhs) : Animal(rhs) {
	*this = rhs;
    std::cout << "[ " << _type << " ] - Copy constructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs) {
	if (this!= &rhs) {
		Animal::operator=(rhs);
	}
	std::cout << "[ " << _type << " ] - Assignement constructor called" << std::endl;
	return *this;
}

Cat::~Cat(void) {
    std::cout << "[ " << _type << " ] - Default destructor called" << std::endl;
}


void	Cat::makeSound(void) const {
	std::cout << "*" << _type << " sounds*" << std::endl;
}
