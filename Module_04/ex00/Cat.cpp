/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 06:39:58 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	this->_type = "Cat";
    std::cout << "[ Cat ] - Default constructor called" << std::endl;
}

Cat::Cat(Cat const &rhs) : Animal(rhs) {
    std::cout << "[ Cat ] - Copy constructor called" << std::endl;
	*this = rhs;
}

Cat	&Cat::operator=(Cat const &rhs) {
	std::cout << "[ Cat ] - Assignement constructor called" << std::endl;
	if (this!= &rhs) {
		Animal::operator=(rhs);
	}
	return *this;
}

Cat::~Cat(void) {
    std::cout << "[ Cat ] - Default destructor called" << std::endl;
}


void	Cat::makeSound(void) const {
	std::cout << "*Cat sounds*" << std::endl;
}
