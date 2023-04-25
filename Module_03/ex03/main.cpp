/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/25 02:51:21 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap diam("Sylvain");
	std::cout << std::endl;
    
	DiamondTrap diam2("Michel");
	std::cout << std::endl;
    
	DiamondTrap diam3(diam);
	std::cout << std::endl;
	
	DiamondTrap diam4;
	diam4.operator=(diam2);
	std::cout << std::endl;

    diam.attack("enemy");
    diam.takeDamage(5);
    diam.beRepaired(3);
    diam.whoAmI();
	std::cout << std::endl;

	diam2.attack("enemy");
    diam2.takeDamage(100);
    diam2.beRepaired(2);
    diam2.whoAmI();
	std::cout << std::endl;

    return 0;
}
