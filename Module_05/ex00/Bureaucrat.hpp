/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 07:01:11 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/25 07:25:11 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_05_EX00_BUREAUCRATE_HPP_
#define MODULE_05_EX00_BUREAUCRATE_HPP_

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &rhs);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);

		std::string const	&getName(void);
		int					getGrade(void);
		
		void				incrementGrade(void);
		void				decrementGrade(void);

	private:
		std::string const	_name;
		int					_grade;
};

#endif // MODULE_05_EX00_BUREAUCRATE_HPP_