/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 04:21:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/23 04:46:13 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_05_EX03_INTERN_HPP_
#define MODULE_05_EX03_INTERN_HPP_

#include "AForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(std::string const name, int grade);
		Intern(Intern const &rhs);
		Intern &operator=(Intern const &rhs);
		~Intern(void);

		AForm *makeForm(std::string const &formName, std::string const &target) const;

	class InvalidFormNameException : public std::exception {
	public:
		const char *what() const throw() {
			return ("invalid form type");
		}
	};
};

#endif  // MODULE_05_EX03_INTERN_HPP_