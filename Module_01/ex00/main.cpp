/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:20:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 03:19:16 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie stackZombie("Stack");
    stackZombie.announce();
	std::cout << std::endl;

    Zombie *heapZombie = newZombie("Heap");
    heapZombie->announce();
	std::cout << std::endl;

	randomChump("Sylvain");
	std::cout << std::endl;

	delete heapZombie;
	
    return 0;
}
