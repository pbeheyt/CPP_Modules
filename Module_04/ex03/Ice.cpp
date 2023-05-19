/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:13:08 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/19 06:43:40 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	std::cout << "[ Ice ] - Default constructor called" << std::endl;
}

Ice::Ice(Ice const &rhs) : AMateria(rhs) {
	std::cout << "[ Ice ] - Copy constructor called" << std::endl;	
}

Ice	&Ice::operator=(Ice const &rhs) {
	std::cout << "[ Ice ] - Assignement constructor called" << std::endl;
	if (this!= &rhs) {
		AMateria::operator=(rhs);
	}
	return *this;	
}

Ice::~Ice(void) {
    std::cout << "[ Ice ] - Default destructor called" << std::endl;
}

Ice *Ice::clone(void) const {
	Ice *clone = new Ice();
	return clone;
}
