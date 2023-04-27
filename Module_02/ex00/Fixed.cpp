/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:10:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 01:26:51 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	std::cout << "[ Fixed ] - Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs) {
	std::cout << "[ Fixed ] - Copy constructor called" << std::endl;
    *this = rhs;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "[ Fixed ] - Copy assignment operator called" << std::endl;
	if (this != &rhs) {
        this->_value = rhs.getRawBits();
    }
    return *this;
}

Fixed::~Fixed(void) {
	std::cout << "[ Fixed ] - Destructor called" << std::endl;
}


int Fixed::getRawBits(void) const {
	std::cout << "[ Fixed ] - getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}
