/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:12:07 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 03:49:04 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
	_name(name),
	_weapon(weapon) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) const {
	std::cout	<< this->_name << " attacks with their "
				<< this->_weapon.getType() << std::endl;
}
