/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 22:32:39 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << "[ Cat ] - Default constructor called" << std::endl;
}

Cat::Cat(Cat const &rhs) : Animal(rhs) {
    std::cout << "[ Cat ] - Copy constructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs) {
	if (this!= &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

Cat::~Cat(void) {
    std::cout << "[ Cat ] - Default destructor called" << std::endl;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Cat::makeSound(void) const {
	std::cout << "*Cat sounds*" << std::endl;
}
