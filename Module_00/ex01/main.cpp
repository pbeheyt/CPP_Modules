/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:27:22 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/17 23:50:12 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include "phonebook.hpp"

int main(void) {
	PhoneBook book;
	std::string command;
	int index = -1;

	std::cout << "Welcome to your phonebook !" << std::endl;
	while (true) {
		std::cout << "Please enter command (ADD, SEARCH, or EXIT): ";
		std::getline(std::cin, command);
		if (!command.compare("ADD")) {
			book.addContact();
		} else if (!command.compare("SEARCH")) {
			book.printContactList();
			std::cout << "Please enter contact index to display full information: ";
			std::cin >> index;
			if (!std::cin.good() || index < 0 || index > 7) {
				std::cin.clear();
				std::cout << "Sorry, this contact does not exist" << std::endl;
			} else {
				book.displayContactInfo(index);
			}
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		} else if (!command.compare("EXIT")) {
			break;
		}
	}
	return 0;
}
