/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 06:59:49 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/23 03:19:27 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    Bureaucrat jean("Jean", 150);
    Bureaucrat sylvain("Sylvain", 1);

	std::cout << jean << std::endl;
	std::cout << sylvain << std::endl;
	std::cout << std::endl;
	
	std::cout << "---SCHRUB TEST---" << std::endl;
	ShrubberyCreationForm shrub("field");
	jean.executeForm(shrub);
	sylvain.executeForm(shrub);
	std::cout << std::endl;
	jean.signForm(shrub);
	sylvain.signForm(shrub);
	std::cout << std::endl;
	jean.executeForm(shrub);
	sylvain.executeForm(shrub);
	std::cout << std::endl;

	std::cout << "---ROBOT TEST---" << std::endl;
	RobotomyRequestForm robot("Marc");
	jean.executeForm(robot);
	sylvain.executeForm(robot);
	std::cout << std::endl;
	jean.signForm(robot);
	sylvain.signForm(robot);
	std::cout << std::endl;
	jean.executeForm(robot);
	sylvain.executeForm(robot);
	std::cout << std::endl;
	
	std::cout << "---PRES TEST---" << std::endl;
	PresidentialPardonForm pres("Chirac");
	jean.executeForm(pres);
	sylvain.executeForm(pres);
	std::cout << std::endl;
	jean.signForm(pres);
	sylvain.signForm(pres);
	std::cout << std::endl;
	jean.executeForm(pres);
	sylvain.executeForm(pres);
	std::cout << std::endl;
    return 0;
}