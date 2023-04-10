/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:27:22 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/10 23:21:38 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::_getInput(std::string msg)
{
	std::string input;
	
	while (true)
	{
		std::cout << msg << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			return input;
		else
		{	
			std::cin.clear();
			std::cout << "Invalid input, please try again" << std::endl;
		}
	}
	return input;
}

void _printContent(std::string content)
{
	std::cout << "|" << std::setw(10);
	if (content.length() > 10)
		std::cout << content.substr(0, 9) << ".";
	else
		std::cout << content;
}

void    Contact::setIndex(int i) 
{
    this->_index = i;
}

void Contact::printContact(int index) const 
{
	std::cout << "|" << std::setw(10) << index << "|";
	_printContent(this->_firstName);
	_printContent(this->_lastName);
	_printContent(this->_nickname);
	std::cout << "|" << std::endl;
}

void Contact::fillContact() 
{
    this->_firstName = this->_getInput("Please enter you first name: ");
    this->_lastName = this->_getInput("Please enter your last name: ");
    this->_nickname = this->_getInput("Please enter your nickname: ");
    this->_phoneNumber = this->_getInput("Please enter your phone number: ");
    this->_darkestSecret = this->_getInput("Please enter your darkest secret: ");
}