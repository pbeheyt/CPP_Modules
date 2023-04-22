/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:36:11 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/22 06:03:25 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
_name(name), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void	HumanB::attack(void) const {
	std::cout	<< this->_name << " attacks with their "
				<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}
