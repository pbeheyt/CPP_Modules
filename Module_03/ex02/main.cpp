/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/28 00:57:51 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap trap("Sylvain");
	FragTrap trap2("Michel");
	FragTrap trap3(trap);
	FragTrap trap4;
	trap4.operator=(trap2);
	std::cout << std::endl;

    trap.printStatus();
    trap.attack("enemy");
    trap.takeDamage(5);
    trap.beRepaired(3);
	trap.highFivesGuys();
	std::cout << std::endl;

    trap2.printStatus();
	trap2.attack("enemy");
    trap2.takeDamage(100);
    trap2.beRepaired(50);
	trap2.highFivesGuys();
	std::cout << std::endl;

    return 0;
}
