/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:47:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 08:15:57 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
	_type = "WrongCat";
    std::cout << "[ " << _type << " ] - Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs) : WrongAnimal(rhs) {
	*this = rhs;
    std::cout << "[ " << _type << " ] - Copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {
	if (this!= &rhs) {
		WrongAnimal::operator=(rhs);
	}
	std::cout << "[ " << _type << " ] - Assignement constructor called" << std::endl;
	return *this;
}

WrongCat::~WrongCat(void) {
    std::cout << "[ " << _type << " ] - Default destructor called" << std::endl;
}


void	WrongCat::makeSound(void) const {
	std::cout << "*" << _type << " sounds*" << std::endl;
}
