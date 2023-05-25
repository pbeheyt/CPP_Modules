/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 06:59:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/25 09:30:47 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
  try {
        Bureaucrat b1("John", 100);
        Bureaucrat b2("Alice", 50);
        Bureaucrat b3("Bob", 1);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;

        Form f1("Form 1", 50, 100);
        Form f2("Form 2", 75, 50);

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

        b1.signForm(f1);
        b2.signForm(f2);

        b1.incrementGrade();
        b2.decrementGrade();

        b1.signForm(f1);
        b2.signForm(f2);
    } catch (std::exception const &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}