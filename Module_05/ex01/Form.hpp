/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 07:01:11 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/24 08:20:50 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_05_EX01_FORM_HPP_
#define MODULE_05_EX01_FORM_HPP_

#include <iostream>

class Bureaucrat;

class Form {
	public:
		Form(void);
		Form(std::string const &name, int const gradeSign, int const gradeExe);
		Form(Form const &rhs);
		Form &operator=(Form const &rhs);
		~Form(void);

		std::string const	&getName(void) const;
		bool				IsSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExe(void) const;

		void	beSigned(Bureaucrat const &bureaucrat);
		void	signForm(void);

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

	private:
		std::string const	_name;
		bool				_isSigned;
		int	const			_gradeSign;
		int	const			_gradeExe;
};

std::ostream &operator<<(std::ostream &ofs, Form const &rhs);

#endif // MODULE_05_EX01_FORM_HPP_