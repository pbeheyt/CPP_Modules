/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 07:01:14 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/25 07:40:51 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :
	_name("Unnamed"), _grade(150) {
	
}
Bureaucrat::Bureaucrat(Bureaucrat const &rhs) :
	_name(rhs._name), _grade(rhs._grade) {
	
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	if (this != &rhs) {
		// this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void) {
	
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::string const	&Bureaucrat::getName(void) {
	return this->_name;
}

int	Bureaucrat::getGrade(void) {
	return this->_grade;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Bureaucrat::incrementGrade(void) {
	if (this->_grade > 1) {
		this->_grade--;
	}
}

void	Bureaucrat::decrementGrade(void) {
	if (this->_grade < 150) {
		this->_grade++;
	}
}