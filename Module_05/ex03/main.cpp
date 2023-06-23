/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 06:59:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/23 05:47:42 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void) {
    Bureaucrat jean("Jean", 150);
    Bureaucrat sylvain("Sylvain", 1);

	std::cout << jean << std::endl;
	std::cout << sylvain << std::endl;
	std::cout << std::endl;

	Intern randomIntern;

	AForm *pres;
	AForm *robot;
	AForm *shrub;
	AForm *error;

	try {
		pres = randomIntern.makeForm("presidential pardon", "Chirac");
		robot = randomIntern.makeForm("robotomy request", "Marc");
		shrub = randomIntern.makeForm("shrubbery creation", "field");
		error = randomIntern.makeForm("error form", "target");
	}
	catch(std::exception const &e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "---SCHRUB TEST---" << std::endl;
	jean.executeForm(*shrub);
	sylvain.executeForm(*shrub);
	std::cout << std::endl;
	jean.signForm(*shrub);
	sylvain.signForm(*shrub);
	std::cout << std::endl;
	jean.executeForm(*shrub);
	sylvain.executeForm(*shrub);
	std::cout << std::endl;

	std::cout << "---ROBOT TEST---" << std::endl;
	jean.executeForm(*robot);
	sylvain.executeForm(*robot);
	std::cout << std::endl;
	jean.signForm(*robot);
	sylvain.signForm(*robot);
	std::cout << std::endl;
	jean.executeForm(*robot);
	sylvain.executeForm(*robot);
	std::cout << std::endl;
	
	std::cout << "---PRES TEST---" << std::endl;
	jean.executeForm(*pres);
	sylvain.executeForm(*pres);
	std::cout << std::endl;
	jean.signForm(*pres);
	sylvain.signForm(*pres);
	std::cout << std::endl;
	jean.executeForm(*pres);
	sylvain.executeForm(*pres);
	std::cout << std::endl;

	(void)error;

    return 0;
}