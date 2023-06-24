/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 06:59:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/24 08:34:42 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
  try {
        Bureaucrat b1("Sylvain", 101);
		std::cout << std::endl;

        std::cout << b1 << std::endl;

        Form f1("Form 1", 100, 100);

        b1.signForm(f1);
		std::cout << std::endl;

        b1.incrementGrade();

        std::cout << b1 << std::endl;
		std::cout << std::endl;

        b1.signForm(f1);
		std::cout << std::endl;

	    b1.signForm(f1);
		std::cout << std::endl;

    } catch (std::exception const &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}