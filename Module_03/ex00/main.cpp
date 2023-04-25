/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/25 02:07:27 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap clap("Sylvain");
	std::cout << std::endl;
    
	ClapTrap clap2("Michel");
	std::cout << std::endl;
    
	ClapTrap clap3(clap);
	std::cout << std::endl;
	
	ClapTrap clap4;
	clap4.operator=(clap2);
	std::cout << std::endl;

    clap.attack("enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
	std::cout << std::endl;

    clap2.attack("enemy");
    clap2.takeDamage(10);
    clap2.beRepaired(2);
	std::cout << std::endl;

    return 0;
}
