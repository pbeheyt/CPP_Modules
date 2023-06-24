/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 07:01:14 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/24 09:53:10 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : 
	_name("Form"), _target("Undefined"), _isSigned(false), _gradeSign (1), _gradeExe (1) {}

AForm::AForm(std::string const &name) : 
	_name(name), _target("Undefined"), _isSigned(false), _gradeSign (1), _gradeExe (1) {}

AForm::AForm(std::string const &name, std::string const &target) : 
	_name(name), _target(target), _isSigned(false), _gradeSign (1), _gradeExe (1) {}

AForm::AForm(std::string const &name, std::string const &target, int const gradeSign, int const gradeExe) :
	_name(name), _target(target), _isSigned(false), _gradeSign(gradeSign), _gradeExe(gradeExe) {
	if (gradeSign < 1 || gradeExe < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSign > 150 || gradeExe > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &rhs) :
	_name(rhs._name), _target(rhs._target), _isSigned(rhs._isSigned), _gradeSign (rhs._gradeSign), 
	_gradeExe (rhs._gradeExe) {}

AForm &AForm::operator=(AForm const &rhs) {
	(void)rhs;
	return *this;
}

AForm::~AForm(void) {}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::string const	&AForm::getName(void) const {
	return this->_name;
}

std::string const	&AForm::getTarget(void) const {
	return this->_target;
}

bool	AForm::IsSigned(void) const {
	return this->_isSigned;
}

int	AForm::getGradeSign(void) const {
	return this->_gradeSign;
}

int	AForm::getGradeExe(void) const {
	return this->_gradeExe;
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	AForm::beSigned(Bureaucrat const &bureaucrat) {
	if (this->_isSigned == true) {
		throw AForm::FormAlreadySignedException();
	}
	if (bureaucrat.getGrade() <= this->getGradeSign()) {
		this->_isSigned = true;
	} else {
		throw AForm::GradeTooLowException();
	}
}

void	AForm::execute(Bureaucrat const &executor) const {
	if (this->_isSigned == false) {
		throw AForm::FormNotSignedException();	
	}
	if (executor.getGrade() > this->getGradeExe()) {
		throw AForm::GradeTooLowException();
	}
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

char const *AForm::GradeTooHighException::what() const throw() {
	return "the grade is too high!";
}

char const *AForm::GradeTooLowException::what() const throw() {
	return "the grade is too low!";
}

char const *AForm::FormAlreadySignedException::what() const throw() {
	return "the form is already signed!";
}

char const *AForm::FormNotSignedException::what() const throw() {
	return "the form is not signed!";
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

std::ostream &operator<<(std::ostream &ofs, AForm const &rhs) {
	ofs	<< rhs.getName() << std::endl
		<< "[ " << rhs.getName() << " ]"<< std::endl
		<< " - Required grade to sign/execute : "
		<< rhs.getGradeSign() << "/" << rhs.getGradeExe() << std::endl
		<< " - Status : " 
		<< (rhs.IsSigned() ? "signed" : "unsigned") << " form" << std::endl;
	return ofs;
}
