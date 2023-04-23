/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:18 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/23 22:43:01 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : 
	_name(name), 
	_hitPoints(10), 
	_energyPoints(10), 
	_attackDamage(0) {
	std::cout	<< "ClapTrap " << _name << " is alive!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy) : 
	_name(copy._name), 
	_hitPoints(copy._hitPoints), 
	_energyPoints(copy._energyPoints), 
	_attackDamage(copy._attackDamage) {
	std::cout << "ClapTrap " << _name << " has been cloned!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "ClapTrap " << _name << " has been reassigned!" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
}

void ClapTrap::attack(std::string const &target) {
	if (_energyPoints >= 1) {
		std::cout	<< "ClapTrap " << _name << " attacks " << target 
					<< ", causing " << _attackDamage
					<< " points of damage!" << std::endl;
		_energyPoints -= 1;
	} else {
		std::cout	<< "ClapTrap " << _name
					<< " doesn't have enough energy to attack "
					<< target << "!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= static_cast<unsigned int>(_hitPoints)) {
		_hitPoints = 0;
		std::cout	<< "ClapTrap " << _name << " takes " << amount
					<< " points of damage and is destroyed!" << std::endl;
	} else {
		_hitPoints -= amount;
		std::cout	<< "ClapTrap " << _name << " takes " << amount 
					<< " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout	<< "ClapTrap " << _name
					<< " can't be repaired, it's destroyed!" << std::endl;
	} else if (_energyPoints >= 1) {
		_hitPoints += amount;
		if (_hitPoints > 10) {
			_hitPoints = 10;
		}
		std::cout	<< "ClapTrap " << _name << " is repaired by "
					<< amount << " points and now has "
					<< _hitPoints << " hit points!" << std::endl;
		_energyPoints -= 1;
	} else {
		std::cout	<< "ClapTrap " << _name
					<< " doesn't have enough energy to be repaired!" << std::endl;
	}
}

void ClapTrap::printStatus(void) const {
	std::cout	<< "ClapTrap " << _name << " has " << _hitPoints
				<< " hit points and " << _energyPoints << " energy points."
				<< std::endl;
}
