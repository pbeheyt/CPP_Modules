/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:13:11 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 22:56:30 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "[ AMateria ] - Parameterized constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &rhs) : _type(rhs._type) {
	std::cout << "[ AMateria ] - Copy constructor called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &rhs) {
	if (this!= &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria::~AMateria(void) {
    std::cout << "[ AMateria ] - Default destructor called" << std::endl;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::string const & AMateria::getType(void) const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
}