/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:27:22 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/11 11:24:02 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main(void)
{
	PhoneBook	book;
	std::string command;

    while (true) 
	{
        std::cout << "Enter command (ADD, SEARCH, or EXIT): ";
        std::getline(std::cin, command);
        if (command.compare("ADD") == 0)
		{
			book.addContact();
        }
		else if (command.compare("SEARCH") == 0)
		{
			book.printContactList();
        }
		else if (command.compare("EXIT") == 0)
            break;
    }
	return 0;
}