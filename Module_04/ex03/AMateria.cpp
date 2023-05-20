/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:13:11 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/20 06:32:54 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) {
	std::cout << "[ AMateria ] - Default constructor called" << std::endl;
	this->_type = type;
}

AMateria::AMateria(AMateria const &rhs) {
	std::cout << "[ AMateria ] - Copy constructor called" << std::endl;
	*this = rhs;
}

AMateria	&AMateria::operator=(const AMateria &rhs) {
	std::cout << "[ AMateria ] - Assignement constructor called" << std::endl;
	if (this!= &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria::~AMateria(void) {
    std::cout << "[ AMateria ] - Default destructor called" << std::endl;
}

std::string const & AMateria::getType(void) const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	
}