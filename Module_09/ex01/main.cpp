/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:38:37 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/12 23:59:28 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char** av) {
    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " \"<expression>\"" << std::endl;
    } else {
		try {
			RPNCalculator calculator;
			double result = calculator.evaluate(av[1]);
			std::cout << "Result: " << result << std::endl;
		} catch (std::exception const &e) {
       		std::cerr << "Error: " << e.what() << std::endl;
    	}
	}
	return 0;
}
