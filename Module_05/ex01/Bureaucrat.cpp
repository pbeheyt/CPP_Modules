/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 07:01:14 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/23 03:05:41 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("Unnamed"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->_grade = grade;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) :
	_name(rhs._name), _grade(rhs._grade) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	if (this != &rhs) {
		this->_grade = rhs._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void) {}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::string const	&Bureaucrat::getName(void) const {
	return this->_name;
}

int	Bureaucrat::getGrade(void) const {
	return this->_grade;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Bureaucrat::incrementGrade(void) {
	if (this->_grade <= 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->_grade--;
	}
}

void	Bureaucrat::decrementGrade(void) {
	if (this->_grade >= 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		this->_grade++;
	}
}

void	Bureaucrat::signForm(Form &form) const {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << this->_name << " couldn’t sign " << form.getName() << "because " << e.what() << std::endl;
	}
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::ostream &operator<<(std::ostream &ofs, Bureaucrat const &rhs) {
	ofs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return ofs;
}