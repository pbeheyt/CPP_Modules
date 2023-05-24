/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 22:30:35 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
    std::cout << "[ WrongCat ] - Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs) : WrongAnimal(rhs) {
    std::cout << "[ WrongCat ] - Copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {
	if (this!= &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

WrongCat::~WrongCat(void) {
    std::cout << "[ WrongCat ] - Default destructor called" << std::endl;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	WrongCat::makeSound(void) const {
	std::cout << "*Wrong cat sounds*" << std::endl;
}
