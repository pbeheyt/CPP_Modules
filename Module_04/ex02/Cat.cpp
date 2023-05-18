/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/18 03:17:36 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	this->_type = "Cat";
    std::cout << "[ " << this->_type << " ] - Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const &rhs) : Animal(rhs) {
    std::cout << "[ " << this->_type << " ] - Copy constructor called" << std::endl;
	*this = rhs;
}

Cat	&Cat::operator=(Cat const &rhs) {
	std::cout << "[ " << this->_type << " ] - Assignement constructor called" << std::endl;
	if (this!= &rhs) {
		Animal::operator=(rhs);
	}
	return *this;
}

Cat::~Cat(void) {
    std::cout << "[ " << this->_type << " ] - Default destructor called" << std::endl;
	delete _brain;
}


void	Cat::makeSound(void) const {
	std::cout << "*Cat sounds*" << std::endl;
}
