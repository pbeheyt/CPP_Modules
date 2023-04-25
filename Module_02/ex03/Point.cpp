/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 05:21:54 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/25 06:22:22 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y (Fixed(0)) {
	std::cout << "[Point] - Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {
	std::cout << "[Point] - Float constructor called" << std::endl;
}

Point::Point(Point const &rhs) {
	*this = rhs;
	std::cout << "[Point] - Float constructor called" << std::endl;
}

Point	&Point::operator=(Point const &rhs) {
	if (this != &rhs) {
        Fixed *ptrx = const_cast<Fixed*>(&this->_x);
        Fixed *ptry = const_cast<Fixed*>(&this->_y);
        *ptrx = rhs._x;
        *ptry = rhs._y;
    }
	std::cout << "[Point] - Copy assignment operator called" << std::endl;
    return *this;
}

Point::~Point(void) {
	std::cout << "[Point] - Destructor called" << std::endl;
}

