/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 04:21:09 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/24 10:00:18 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &rhs) {
	(void)rhs;
}

Intern &Intern::operator=(Intern const &rhs) {
	(void)rhs;
	return *this;
}

Intern::~Intern(void) {}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

AForm *Intern::makeForm(std::string const &formName, std::string const &target) const {
	std::string listForm[3];

	listForm[0] = "presidential pardon";
	listForm[1] = "shrubbery creation";
	listForm[2] = "robotomy request";
	
	int i = 0;
	while (i < 3 && formName != listForm[i]) {
		i++;
	}
	switch (i) {
		case 0:
			std::cout << "Intern creates " << formName << std::endl;
			return new PresidentialPardonForm(target);
		case 1:
			std::cout << "Intern creates " << formName << std::endl;
			return new ShrubberyCreationForm(target);
		case 2:
			std::cout << "Intern creates " << formName << std::endl;
			return new RobotomyRequestForm(target);
		default:
			throw Intern::InvalidFormNameException();
	}
	return NULL;
};

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

char const *Intern::InvalidFormNameException::what() const throw() {
	return ("invalid form type");
}