/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:20:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/12 23:05:53 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void ) {

    Zombie stackZombie("Stack");
    stackZombie.announce();

    Zombie *heapZombie = newZombie("Heap");
    heapZombie->announce();
    
    randomChump("Zombie");

    delete heapZombie;
    
    return 0;
}