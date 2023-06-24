/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 06:59:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/24 08:01:35 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {
    try {
        Bureaucrat bureaucrat1("Sylvain", 100);
        Bureaucrat bureaucrat2("Jean", 50);

        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;
		std::cout << std::endl;

        bureaucrat1.incrementGrade();
        bureaucrat2.decrementGrade();

        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;
		std::cout << std::endl;

        bureaucrat1 = bureaucrat2;

        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;
		std::cout << std::endl;

        Bureaucrat bureaucrat3("Error Low", 200);
		std::cout << std::endl;
		
    } catch (std::exception const &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}