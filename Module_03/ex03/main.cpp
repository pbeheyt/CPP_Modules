/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/28 00:46:52 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap trap("Sylvain");
	DiamondTrap trap2("Michel");
	DiamondTrap trap3(trap);
	DiamondTrap trap4;
	trap4.operator=(trap2);
	std::cout << std::endl;

    trap.printStatus();
    trap.attack("enemy");
    trap.takeDamage(5);
    trap.beRepaired(3);
	trap.whoAmI();
	std::cout << std::endl;

    trap2.printStatus();
	trap2.attack("enemy");
    trap2.takeDamage(100);
    trap2.beRepaired(50);
	trap.whoAmI();
	std::cout << std::endl;

    return 0;
}
