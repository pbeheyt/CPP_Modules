/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 07:01:11 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/24 07:44:22 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_05_EX02_FORM_HPP_
#define MODULE_05_EX02_FORM_HPP_

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

class Bureaucrat;

class AForm {
	public:
		AForm(void);
		AForm(std::string const &name);
		AForm(std::string const &name, std::string const &target);
		AForm(std::string const &name, std::string const &target, int const gradeSign, int const gradeExe);
		AForm(AForm const &rhs);
		AForm &operator=(AForm const &rhs);
		virtual ~AForm(void);

		std::string const	&getName(void) const;
		std::string const	&getTarget(void) const;
		bool				IsSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExe(void) const;

		void			beSigned(Bureaucrat const &bureaucrat);
		void 			execute(Bureaucrat const &executor) const;
		virtual void	executeAction(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				char const *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				char const *what() const throw();
		};

		class FormAlreadySignedException : public std::exception {
			public:
				char const *what() const throw();
		};

		class FormNotSignedException : public std::exception {
			public:
				char const *what() const throw();
		};

	private:
		std::string const	_name;
		std::string const	_target;
		bool				_isSigned;
		int	const			_gradeSign;
		int	const			_gradeExe;
};

std::ostream &operator<<(std::ostream &ofs, AForm const &rhs);

#endif // MODULE_05_EX02_FORM_HPP_