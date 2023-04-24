/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/24 05:27:55 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap frag("Sylvain");
    FragTrap frag2("Michel");
    FragTrap frag3(frag);
    FragTrap frag4 = frag2;
	std::cout << std::endl;

    frag.attack("enemy");
    frag.takeDamage(5);
    frag.beRepaired(3);
    frag.highFivesGuys();
	std::cout << std::endl;

	frag2.attack("enemy");
    frag2.takeDamage(10);
    frag2.beRepaired(2);
    frag.highFivesGuys();
	std::cout << std::endl;

    frag3.attack("enemy");
    frag3.takeDamage(2);
    frag3.beRepaired(5);
    frag.highFivesGuys();
	std::cout << std::endl;

    frag4.attack("enemy");
    frag4.takeDamage(2);
    frag4.beRepaired(5);
    frag4.highFivesGuys();
	std::cout << std::endl;

    return 0;
}
