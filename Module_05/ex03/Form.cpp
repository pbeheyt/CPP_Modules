/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 07:01:14 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/25 09:40:17 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Form"), _isSigned(false), _gradeSign (1), _gradeExe (1) {}

Form::Form(std::string const &name, int const gradeSign, int const gradeExe) :
	_name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExe(gradeExe) {
	if (gradeSign < 1 || gradeExe < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExe > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &rhs) :
	_name(rhs._name), _isSigned(false), _gradeSign (rhs._gradeSign), 
	_gradeExe (rhs._gradeExe) {}

Form &Form::operator=(Form const &rhs) {
	if (this != &rhs) {}
	return *this;
}

Form::~Form(void) {}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::string const	&Form::getName(void) const {
	return this->_name;
}

bool				Form::IsSigned(void) const {
	return this->_isSigned;
}

int					Form::getGradeSign(void) const {
	return this->_gradeSign;
}

int					Form::getGradeExe(void) const {
	return this->_gradeExe;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	Form::beSigned(Bureaucrat const &bureaucrat) {
	if (this->IsSigned() == false) {
		throw Form::GradeTooLowException();
	}
	if (bureaucrat.getGrade() <= this->getGradeSign()) {
		this->_isSigned = true;
	} else {
		throw Form::GradeTooLowException();
	}
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::ostream &operator<<(std::ostream &ofs, Form const &rhs) {
	ofs	<< "Form [" << rhs.getName() << "] - " 
		<< "Required grade to sign : " << rhs.getGradeSign() << " / to execute : "
		<< rhs.getGradeExe() << " ("
		<< (rhs.IsSigned() ? "signed" : "unsigned") << " form)" << std::flush;
	return ofs;
}