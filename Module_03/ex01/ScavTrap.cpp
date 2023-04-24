/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:47:33 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/24 01:40:57 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap("Unnamed") {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
	std::cout	<< "ScavTrap " << _name << " is alive!" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
	std::cout	<< "ScavTrap " << _name << " is alive!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs) {
	std::cout << "ScavTrap " << _name << " has been cloned!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	ClapTrap::operator=(rhs);
	std::cout << "ScavTrap " << _name << " has been reassigned!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void) {
    	std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
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

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << _name << " enters Gate keeper mode" << std::endl;
}
