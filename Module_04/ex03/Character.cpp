/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:24:09 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/25 02:40:17 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name) {
	std::cout << "[ Character ] - Parameterized constructor called" << std::endl;
    for (int i = 0; i < 4; i++) {
        this->_inventory[i] = NULL;
    }
}

Character::Character(Character const &rhs) : _name(rhs._name) {
	std::cout << "[ Character ] - Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = 
			(rhs._inventory[i] != NULL) ? rhs._inventory[i]->clone() : NULL;
	}
}

Character &Character::operator=(Character const &rhs) {
	if (this!= &rhs) {
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i]!= NULL) {
				delete this->_inventory[i];
			}
		}
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = 
				(rhs._inventory[i] != NULL) ? rhs._inventory[i]->clone() : NULL;
		}
	}
	return *this;
}

Character::~Character(void) {
    std::cout << "[ Character ] - Default destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]!= NULL) {
			delete this->_inventory[i];
		}
	}
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::string const	&Character::getName(void) const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	if (!m) {
		return;
	}
	int i = 0;
	while (i < 4 && this->_inventory[i] != NULL) {
		i++;
	}
	if (i < 4) {
		this->_inventory[i] = m;
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL) {
		this->_inventory[idx]->use(target);
	}
}

