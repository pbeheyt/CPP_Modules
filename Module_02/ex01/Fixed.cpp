/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:10:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/25 05:39:01 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) {
    this->_value = n << this->_fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) {
    this->_value = (int)roundf(f * (1 << this->_fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy) {
    *this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {
	if (this != &rhs) {
        this->_value = rhs.getRawBits();
    }
	std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}


float	Fixed::toFloat(void) const {
    return (float)this->_value / (1 << this->_fractionalBits);
}

int	Fixed::toInt(void) const {
    return this->_value >> this->_fractionalBits;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void	Fixed::setRawBits(int const raw) {
    this->_value = raw;
}


std::ostream	&operator<<(std::ostream &ofs, Fixed const &rhs) {
    ofs << rhs.toFloat();
    return ofs;
}
