/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:11:12 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/13 03:41:03 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " input.txt" << std::endl;
    } else {
		try {
        	BitcoinExchange exchange("data.csv");
        	exchange.Execute(av[1]);
    	} catch (std::exception const &e) {
    		std::cerr << "Error: " << e.what() << std::endl;
    	}
	}
	
    return 0;
}