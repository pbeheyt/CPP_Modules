/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 23:09:35 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap clap("Sylvain");
	ClapTrap clap2("Michel");
	ClapTrap clap3(clap);
	ClapTrap clap4;
	clap4.operator=(clap2);
	std::cout << std::endl;

    clap.printStatus();
    clap.attack("enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
	std::cout << std::endl;

    clap2.printStatus();
	clap2.attack("enemy");
    clap2.takeDamage(10);
    clap2.beRepaired(2);
	std::cout << std::endl;

    return 0;
}
