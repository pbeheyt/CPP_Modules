/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:42:17 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/07 22:53:26 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Error: not enough number to be sorted" << std::endl;
	}
	
	try {
        PmergeMe pm(ac, av);
    } catch (std::exception const &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}