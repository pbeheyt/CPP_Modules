/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:47:33 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/28 01:44:57 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Unnamed"), ScavTrap("Unnamed"), 
	FragTrap("Unnamed") {
	this-> _name = "Unnamed";
	this->ClapTrap::_name += "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "[ DiamondTrap ] - Default constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name),
	ScavTrap(name), FragTrap(name) {
    this->_name = name;
	this->ClapTrap::_name += "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "[ DiamondTrap ] - Default constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs) : ClapTrap(rhs), ScavTrap(rhs), 
	FragTrap(rhs) {
	*this = rhs;
	std::cout << "[ DiamondTrap ] - Copy constructor called for " << _name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs) {
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
		ScavTrap::operator=(rhs);
		FragTrap::operator=(rhs);
		this->_name = rhs._name;
	}		
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "[ DiamondTrap ] - Destructor called for " << _name << std::endl;
}


void	DiamondTrap::printStatus(void) const {
	std::cout	<< "DiamondTrap " << _name << " has " << _hitPoints
				<< " hit points and " << _energyPoints << " energy points."
				<< std::endl;
}

void	DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap " << _name << " from ClapTrap " << ClapTrap::_name << std::endl;
}
