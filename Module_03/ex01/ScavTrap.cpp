/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:47:33 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/28 01:47:10 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Unnamed") {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
	std::cout << "[ ScavTrap ] - Default constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
	std::cout << "[ ScavTrap ] - Default constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs) {
	*this = rhs;
	std::cout << "[ ScavTrap ] - Copy constructor called for " << _name << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	return *this;
}

ScavTrap::~ScavTrap(void) {
		std::cout << "[ ScavTrap ] - Destructor called for " << _name << std::endl;
}


void ScavTrap::attack(std::string const &target) {
	if (_energyPoints >= 1) {
		std::cout	<< "ScavTrap " << _name << " attacks " << target 
					<< ", causing " << _attackDamage
					<< " points of damage!" << std::endl;
		_energyPoints -= 1;
	} else {
		std::cout	<< "ScavTrap " << _name
					<< " doesn't have enough energy to attack "
					<< target << "!" << std::endl;
	}
}

void ScavTrap::printStatus(void) const {
	std::cout	<< "ScavTrap " << _name << " has " << _hitPoints
				<< " hit points and " << _energyPoints << " energy points."
				<< std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << _name << " enters Gate keeper mode" << std::endl;
}
