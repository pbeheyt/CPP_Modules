/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 07:32:55 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/26 15:31:54 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: program must have one argument" << std::endl;
	} else {
		try {
			ScalarConverter input(av[1]);
			input.convert();
		}
		catch (std::exception const &e) {
			std::cerr << "Error : "<< e.what() << std::endl;
		}
	}
}