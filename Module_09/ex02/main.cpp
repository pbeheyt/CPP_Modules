/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:42:17 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/13 01:44:54 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Error: not enough numbers to be sorted" << std::endl;
	} else {
		try {
			PmergeMe pm(ac, av);
		} catch (std::exception const &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	
    return 0;
}