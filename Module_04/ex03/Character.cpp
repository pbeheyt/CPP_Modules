/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:24:09 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 04:07:05 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name), _inventory() {
	std::cout << "[ Character ] - Parameterized constructor called" << std::endl;
}

Character::Character(Character const &rhs) {
	std::cout << "[ Character ] - Copy constructor called" << std::endl;
	*this = rhs;
}

Character &Character::operator=(Character const &rhs) {
	if (this!= &rhs) {
		this->~Character();
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = (rhs._inventory[i]) ? rhs._inventory[i]->clone() : NULL;
		}
	}
	return *this;
}

Character::~Character(void) {
    std::cout << "[ Character ] - Default destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
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
	while (i < 4 && this->_inventory[i]) {
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
	if (idx >= 0 && idx < 4 && this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
}

