/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/25 02:22:12 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap frag("Sylvain");
	std::cout << std::endl;
	
	FragTrap frag2("Michel");
	std::cout << std::endl;

	FragTrap frag3(frag);
	std::cout << std::endl;
    
	FragTrap frag4;
	frag4.operator=(frag2);
	std::cout << std::endl;

    frag.attack("enemy");
    frag.takeDamage(5);
    frag.beRepaired(3);
    frag.highFivesGuys();
	std::cout << std::endl;

	frag2.attack("enemy");
    frag2.takeDamage(100);
    frag2.beRepaired(2);
    frag.highFivesGuys();
	std::cout << std::endl;

    return 0;
}
