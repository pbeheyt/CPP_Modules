/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:47:33 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/24 05:10:51 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : 
	ClapTrap("Unnamed"), ScavTrap("Unnamed"), FragTrap("Unnamed") {
    _name = "Unnamed";
	ClapTrap::_name += "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
	std::cout	<< "DiamondTrap " << _name << " is alive!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) :
ClapTrap(name), ScavTrap(name), FragTrap(name) {
    _name = name;
	ClapTrap::_name += "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
	std::cout	<< "DiamondTrap " << _name << " is alive!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs) :
	ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs) {
	std::cout << "DiamondTrap " << _name << " has been cloned!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs) {
	ClapTrap::operator=(rhs);
	ScavTrap::operator=(rhs);
	FragTrap::operator=(rhs);
	std::cout << "DiamondTrap " << _name << " has been reassigned!" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
    	std::cout << "DiamondTrap " << _name << " is dead!" << std::endl;
}


void	DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap " << _name << " from ClapTrap " << ClapTrap::_name << std::endl;
}
