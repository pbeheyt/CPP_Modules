/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:06:31 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/22 05:01:13 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
	Harl harl;

	if (ac == 2) {
		harl.complain(av[1]);
	} else {
		std::cout	<< "Error\nProgram must have a complaint as argument"
					<< std::endl;
		return 1;
	}
	return 0;
}
