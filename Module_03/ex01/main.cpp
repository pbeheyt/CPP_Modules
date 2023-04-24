/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/25 01:32:11 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap scav("Sylvain");
	std::cout << std::endl;
    
	ScavTrap scav2("Michel");
	std::cout << std::endl;
    
	ScavTrap scav3(scav);
	std::cout << std::endl;
	
	ScavTrap scav4;
	scav4.operator=(scav2);
	std::cout << std::endl;

    scav.attack("enemy");
    scav.takeDamage(5);
    scav.beRepaired(3);
	scav.guardGate();
	std::cout << std::endl;

	scav2.attack("enemy");
    scav2.takeDamage(10);
    scav2.beRepaired(2);
	scav2.guardGate();
	std::cout << std::endl;

    scav3.attack("enemy");
    scav3.takeDamage(2);
    scav3.beRepaired(5);
	scav3.guardGate();
	std::cout << std::endl;

	scav4.attack("enemy");
    scav4.takeDamage(2);
    scav4.beRepaired(5);
	scav4.guardGate();
	std::cout << std::endl;

    return 0;
}
