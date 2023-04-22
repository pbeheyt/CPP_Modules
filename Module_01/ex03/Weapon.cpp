/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:06:53 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/22 06:03:28 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon(void) {}

std::string const&	Weapon::getType(void) {
	return this->_type;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
