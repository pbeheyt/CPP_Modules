/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:41:48 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/21 05:24:36 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm("PresidentialPardonForm", "Undefined", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	AForm("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) :
	AForm(rhs) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	AForm::operator=(rhs);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void PresidentialPardonForm::executeAction(Bureaucrat const &executor) const {
	execute(executor);
	std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}