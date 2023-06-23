/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:41:48 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/23 03:31:35 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_05_EX03_PRESIDENTIALPARDONFORM_HPP_
#define MODULE_05_EX03_PRESIDENTIALPARDONFORM_HPP_

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &rhs);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm(void);

		virtual void executeAction(Bureaucrat const &executor) const;
};

#endif // MODULE_05_EX03_PRESIDENTIALPARDONFORM_HPP_