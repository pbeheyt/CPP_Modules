/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:24:09 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/19 06:34:36 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name){
	std::cout << "[ Character ] - Default constructor called" << std::endl;
	this->_name = name;
}

Character::Character(Character const &rhs) {
	std::cout << "[ Character ] - Copy constructor called" << std::endl;
	*this = rhs;
}

Character &Character::operator=(Character const &rhs) {
	std::cout << "[ Character ] - Assignement constructor called" << std::endl;
	if (this!= &rhs) {
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = rhs._inventory[i];
		}
	}
	return *this;
}

Character::~Character(void) {
    std::cout << "[ Character ] - Default destructor called" << std::endl;
}

std::string const	&Character::getName(void) const {
	
}


void Character::equip(AMateria *m) {
	
}

void Character::unequip(int idx) {
	
}

void Character::use(int idx, ICharacter &target) {
	
}

