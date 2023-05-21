/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 22:02:41 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal() {
    std::cout << "[ Cat ] - Default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &rhs) : AAnimal(rhs) {
    std::cout << "[ Cat ] - Copy constructor called" << std::endl;
	*this = rhs;
}

Cat	&Cat::operator=(Cat const &rhs) {
	if (this!= &rhs) {
		AAnimal::operator=(rhs);
	}
	return *this;
}

Cat::~Cat(void) {
    std::cout << "[ Cat ] - Default destructor called" << std::endl;
	delete _brain;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Cat::makeSound(void) const {
	std::cout << "*Cat sounds*" << std::endl;
}
