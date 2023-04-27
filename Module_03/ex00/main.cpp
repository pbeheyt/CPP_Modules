/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 23:43:52 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap trap("Sylvain");
	ClapTrap trap2("Michel");
	ClapTrap trap3(trap);
	ClapTrap trap4;
	trap4.operator=(trap2);
	std::cout << std::endl;

    trap.printStatus();
    trap.attack("enemy");
    trap.takeDamage(5);
    trap.beRepaired(3);
	std::cout << std::endl;

    trap2.printStatus();
	trap2.attack("enemy");
    trap2.takeDamage(10);
    trap2.beRepaired(2);
	std::cout << std::endl;

    return 0;
}
