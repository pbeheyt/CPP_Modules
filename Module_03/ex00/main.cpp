/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:24 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/24 01:08:51 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("Clap");
    ClapTrap clap2("Clap2");
    ClapTrap clap3(clap);
	std::cout << std::endl;

    clap.attack("enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
	std::cout << std::endl;

    clap2.attack("enemy");
    clap2.takeDamage(10);
    clap2.beRepaired(2);
	std::cout << std::endl;

    clap3.attack("enemy");
    clap3.takeDamage(2);
    clap3.beRepaired(5);
	std::cout << std::endl;

    return 0;
}