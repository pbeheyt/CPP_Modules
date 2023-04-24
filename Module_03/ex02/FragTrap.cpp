/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:47:33 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/24 02:22:21 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Unnamed") {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
	std::cout	<< "FragTrap " << _name << " is alive!" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
	std::cout	<< "FragTrap " << _name << " is alive!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs) {
	std::cout << "FragTrap " << _name << " has been cloned!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	ClapTrap::operator=(rhs);
	std::cout << "FragTrap " << _name << " has been reassigned!" << std::endl;
	return *this;
}

FragTrap::~FragTrap(void) {
    	std::cout << "FragTrap " << _name << " is dead!" << std::endl;
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

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " is requesting a high five!" << std::endl;
}
