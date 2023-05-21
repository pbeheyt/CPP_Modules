/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:13:08 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 22:03:13 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	std::cout << "[ Cure ] - Default constructor called" << std::endl;
}

Cure::Cure(Cure const &rhs) : AMateria(rhs) {
	std::cout << "[ Cure ] - Copy constructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs) {
	if (this!= &rhs) {
		AMateria::operator=(rhs);
	}
	return *this;
}

Cure::~Cure(void) {
    std::cout << "[ Cure ] - Default destructor called" << std::endl;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone(void) const {
	return new Cure();
}
