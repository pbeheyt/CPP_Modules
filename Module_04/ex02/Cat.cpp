/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 23:17:52 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat"), _brain(new Brain()) {
    std::cout << "[ Cat ] - Default constructor called" << std::endl;
}

Cat::Cat(Cat const &rhs) : AAnimal(rhs) {
    std::cout << "[ Cat ] - Copy constructor called" << std::endl;
	*this = rhs;
}

Cat	&Cat::operator=(Cat const &rhs) {
	if (this!= &rhs) {
		AAnimal::operator=(rhs);
		this->_brain = new Brain();
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
