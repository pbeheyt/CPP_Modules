/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:24:09 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 23:06:15 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << "[ MateriaSource ] - Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
        this->_materia[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const &rhs) {
	std::cout << "[ MateriaSource ] - Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = 
			(rhs._materia[i] != NULL) ? rhs._materia[i]->clone() : NULL;
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
	if (this!= &rhs) {
		for (int i = 0; i < 4; i++) {
			if (this->_materia[i] != NULL) {
				delete this->_materia[i];
			}
		}
		for (int i = 0; i < 4; i++) {
			this->_materia[i] = 
				(rhs._materia[i] != NULL) ? rhs._materia[i]->clone() : NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(void) {
    std::cout << "[ MateriaSource ] - Default destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL) {
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
	while (i < 4 && this->_materia[i] != NULL) {
		i++;
	}
	if (i < 4) {
		this->_materia[i] = m;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4 && _materia[i] != NULL; i++) {
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return NULL;
}