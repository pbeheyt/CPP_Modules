/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:41:48 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/21 05:52:25 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm("RobotomyRequestForm", "Undefined", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	AForm("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) :
	AForm(rhs) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	AForm::operator=(rhs);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void RobotomyRequestForm::executeAction(Bureaucrat const &executor) const {
	execute(executor);
	std::cout << "*drill noises*" << std::endl;
	std::srand(std::time(0));
	if (std::rand() % 2 == 0) {
		std::cout << this->getTarget() << " has been robotomized!" << std::endl;
	} else {
		std::cout << this->getTarget() << " robotomization has failed!" << std::endl;
	}
}