/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:47:33 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/28 00:24:21 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Unnamed") {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
	std::cout << "[ FragTrap ] - Default constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
	std::cout << "[ FragTrap ] - Default constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs) {
	std::cout << "[ FragTrap ] - Copy constructor called for " << _name << std::endl;
	*this = rhs;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	if (this!= &rhs) {
		ClapTrap::operator=(rhs);
	}
	return *this;
}

FragTrap::~FragTrap(void) {
	std::cout << "[ FragTrap ] - Destructor called for " << _name << std::endl;
}


void FragTrap::attack(std::string const &target) {
	if (_energyPoints >= 1) {
		std::cout	<< "FragTrap " << _name << " attacks " << target 
					<< ", causing " << _attackDamage
					<< " points of damage!" << std::endl;
		_energyPoints -= 1;
	} else {
		std::cout	<< "FragTrap " << _name
					<< " doesn't have enough energy to attack "
					<< target << "!" << std::endl;
	}
}

void FragTrap::printStatus(void) const {
	std::cout	<< "FragTrap " << _name << " has " << _hitPoints
				<< " hit points and " << _energyPoints << " energy points."
				<< std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " is requesting a high fives!" << std::endl;
}
