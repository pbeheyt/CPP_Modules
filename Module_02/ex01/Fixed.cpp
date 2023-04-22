/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:10:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/23 00:42:33 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

  // Pour convertir l'entier en virgule fixe, on decale de _fractionalBits vers 
  // la gauche (équivalent à une multiplication par 2^8)
Fixed::Fixed(int const n) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << this->_fractionalBits;
}

  // Pour convertir le float en virgule fixe, on multiplie f par 2^8 et on 
  // arrondit le resultat. Le cast en (int) tronque la partie fractionnaire
Fixed::Fixed(float const f) {
	std::cout << "Float constructor called" << std::endl;
    this->_value = (int)roundf(f * (1 << this->_fractionalBits));
}

Fixed::Fixed(Fixed const &copy) {
	std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(Fixed const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
        this->_value = rhs.getRawBits();
    }
    return *this;
}


float Fixed::toFloat(void) const {
    return (float)this->_value / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_value >> this->_fractionalBits;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}


std::ostream &operator<<(std::ostream &ofs, Fixed const &rhs) {
    ofs << rhs.toFloat();
    return ofs;
}