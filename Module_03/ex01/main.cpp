/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/24 02:24:51 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Sylvain");
    ScavTrap scav2("Michel");
    ScavTrap scav3(scav);
	std::cout << std::endl;

    scav.attack("enemy");
    scav.takeDamage(5);
    scav.beRepaired(3);
	scav.guardGate();
	std::cout << std::endl;

	scav2.attack("enemy");
    scav2.takeDamage(10);
    scav2.beRepaired(2);
	scav.guardGate();
	std::cout << std::endl;

    scav3.attack("enemy");
    scav3.takeDamage(2);
    scav3.beRepaired(5);
	scav.guardGate();
	std::cout << std::endl;

    return 0;
}