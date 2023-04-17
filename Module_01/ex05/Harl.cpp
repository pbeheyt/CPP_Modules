/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:49:25 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/18 01:15:38 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::debug(void) {
    std::cout	<< "love having extra bacon for my 7XL-double-cheese-triple"
            	<< "-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void) {
    std::cout	<< "I cannot believe adding extra bacon costs more money. You "
				<< "didn't put enough bacon in my burger! If you did, I "
				<< "wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void) {
    std::cout	<< "I think I deserve to have some extra bacon for free. I've "
				<< "been coming foryears whereas you started working here "
				<< "since last month." << std::endl;
}

void    Harl::error(void) {
    std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

void	Harl::complain(std::string level) {
	void (Harl::*f[4])(void) =
			{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if(level == levels[i]) {
			(this->*f[i])();
			return;
		}
	}
	std::cout << "No function recognized" << std::endl;
}
