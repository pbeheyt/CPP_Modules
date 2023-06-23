/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 07:01:11 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/23 03:31:25 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_05_EX03_BUREAUCRATE_HPP_
#define MODULE_05_EX03_BUREAUCRATE_HPP_

#include <iostream>

class AForm;

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &rhs);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);

		std::string const	&getName(void) const;
		int					getGrade(void) const;
		
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(AForm &form) const;
		void	executeForm(AForm const &form) const;

		class GradeTooHighException : public std::exception {
			public:
				char const *what() const throw() {
					return "the grade is too high!";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				char const *what() const throw() {
					return "the grade is too low!";
				}
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream &ofs, Bureaucrat const &rhs);

#endif // MODULE_05_EX03_BUREAUCRATE_HPP_