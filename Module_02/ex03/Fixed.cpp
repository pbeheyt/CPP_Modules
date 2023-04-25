/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:10:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/25 05:38:44 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _value(0) {
	std::cout << "[Fixed] - Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) {
    std::cout << "[Fixed] - Int constructor called" << std::endl;
    this->_value = n << this->_fractionalBits;
}

Fixed::Fixed(float const f) {
	std::cout << "[Fixed] - Float constructor called" << std::endl;
    this->_value = (int)roundf(f * (1 << this->_fractionalBits));
}

Fixed::Fixed(Fixed const &copy) {
    *this = copy;
	std::cout << "[Fixed] - Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {
	if (this != &rhs) {
        this->_value = rhs.getRawBits();
    }
	std::cout << "[Fixed] - Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::~Fixed(void) {
	std::cout << "[Fixed] - Destructor called" << std::endl;
}


float	Fixed::toFloat(void) const {
    return (float)this->_value / (1 << this->_fractionalBits);
}

int	Fixed::toInt(void) const {
    return this->_value >> this->_fractionalBits;
}

int	Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void	Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

bool	Fixed::operator>(Fixed const &rhs) const {
	return this->getRawBits() > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const &rhs) const {
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const &rhs) const {
	return this->getRawBits() >= rhs.getRawBits();
}
bool	Fixed::operator<=(Fixed const &rhs) const {
	return this->getRawBits() <= rhs.getRawBits();
	
}

bool	Fixed::operator==(Fixed const &rhs) const {
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const &rhs) const {
	return this->getRawBits() != rhs.getRawBits();
}


Fixed	Fixed::operator+(Fixed const &rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}


Fixed	&Fixed::operator++(void) {
	++this->_value;
    return *this;
}

Fixed	Fixed::operator++(int) {
    Fixed tmp(*this);
	
    tmp._value = this->_value;
	this->_value++;
    return tmp;	
}

Fixed	&Fixed::operator--(void) {
	--this->_value;
    return *this;
}

Fixed	Fixed::operator--(int) {
    Fixed tmp(*this);
	
    tmp._value = this->_value;
	this->_value--;
    return tmp;	
}


Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b) {
    return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
    return (a > b ? a : b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b) {
    return (a > b ? a : b);
}


std::ostream	&operator<<(std::ostream &ofs, Fixed const &rhs) {
    ofs << rhs.toFloat();
    return ofs;
}
