/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:27:22 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/11 15:05:19 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() 
{
	this->_nbContacts = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() 
{
	if (this->_nbContacts == 8)
		this->_nbContacts = 0;
	this->_contacts[this->_nbContacts].fillContact();
	this->_contacts[this->_nbContacts].setIndex(this->_nbContacts);
	this->_nbContacts++;
}


void PhoneBook::printContactList() const
{
	std::cout << std::endl;
	std::cout << "|  INDEX   ";
	std::cout << "|FIRST NAME";
	std::cout << "|LAST NAME ";
	std::cout << "| NICKNAME ";
	std::cout << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
		this-> _contacts[i].printContactLine(i);
	std::cout << std::endl;
}

void PhoneBook::displayContactInfo(int index) const 
{
	this->_contacts[index].printContactFull(index);
}