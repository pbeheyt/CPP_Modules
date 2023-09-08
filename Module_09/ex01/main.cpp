/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:38:37 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/08 22:06:28 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int ac, char** av) {
    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " \"<expression>\"" << std::endl;
    } else {
		RPNCalculator calculator;
		double result = calculator.evaluate(av[1]);
		std::cout << "Result: " << result << std::endl;
	}
    return 0;
}
