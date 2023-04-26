/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:20:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 03:22:34 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int     nbZombie = 10;
    Zombie	*horde = zombieHorde(nbZombie, "Zombie");

    for (int i = 0; i < nbZombie; i++) {
        horde[i].announce();
    }
	
    delete[] horde;

    return 0;
}
