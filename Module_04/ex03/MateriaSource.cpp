/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:24:09 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 22:03:33 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materia() {
	std::cout << "[ MateriaSource ] - Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &rhs) {
	std::cout << "[ Character ] - Copy constructor called" << std::endl;
	*this = rhs;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
	if (this!= &rhs) {
		this->~MateriaSource();
		for (int i = 0; i < 4; i++) {
			this->_materia[i] = (rhs._materia[i]) ? rhs._materia[i]->clone() : NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(void) {
    std::cout << "[ MateriaSource ] - Default destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i]) {
			delete this->_materia[i];
		}
	}
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void MateriaSource::learnMateria(AMateria *m) {
	if (!m) {
		return;
	}
	int i = 0;
	while (i < 4 && this->_materia[i]) {
		i++;
	}
	if (i < 4) {
		this->_materia[i] = m;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4 && _materia[i]; i++) {
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return NULL;
}