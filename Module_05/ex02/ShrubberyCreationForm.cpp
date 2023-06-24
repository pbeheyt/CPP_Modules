/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:41:48 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/24 09:15:12 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm("ShrubberyCreationForm", "Undefined", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	AForm("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) :
	AForm(rhs) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	AForm::operator=(rhs);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void ShrubberyCreationForm::executeAction(Bureaucrat const &executor) const {
	execute(executor);
	
	std::ofstream ofs((this->getTarget() + "_shrubbery").c_str());

    if (!ofs) {
		throw std::ofstream::failure("failed to open the file");
    }

    ofs << "          /\\                  " << std::endl;
    ofs << "         // \\                 " << std::endl;
    ofs << "        //   \\                " << std::endl;
    ofs << "       //     \\               " << std::endl;
    ofs << "      //       \\       /\\    " << std::endl;
    ofs << "     //         \\     /  \\   " << std::endl;
    ofs << "    //___________\\   /____\\  " << std::endl;
    ofs << "        ||  ||         ||      " << std::endl;
    ofs << "        ||  ||         ||      " << std::endl;
}
		