/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 06:56:21 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
	this->_type = "WrongCat";
    std::cout << "[ WrongCat ] - Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs) : WrongAnimal(rhs) {
    std::cout << "[ WrongCat ] - Copy constructor called" << std::endl;
	*this = rhs;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {
	if (this!= &rhs) {
		WrongAnimal::operator=(rhs);
	}
	return *this;
}

WrongCat::~WrongCat(void) {
    std::cout << "[ WrongCat ] - Default destructor called" << std::endl;
}


void	WrongCat::makeSound(void) const {
	std::cout << "*Wrong cat sounds*" << std::endl;
}
