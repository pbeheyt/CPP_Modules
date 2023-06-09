/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:49:25 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 05:07:00 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void)
{
	std::cout	<< "[DEBUG]" << std::endl
				<< "love having extra bacon for my 7XL-double-cheese-triple"
				<< "-pickle-special-ketchup burger. I really do!" << std::endl
				<< std::endl;
	info();
}

void Harl::info(void)
{
	std::cout	<< "[INFO]" << std::endl
				<< "I cannot believe adding extra bacon costs more money. You "
				<< "didn't put enough bacon in my burger! If you did, I "
				<< "wouldn't be asking for more!" << std::endl
				<< std::endl;
	warning();
}

void Harl::warning(void)
{
	std::cout	<< "[WARNING]" << std::endl
				<< "I think I deserve to have some extra bacon for free. I've "
				<< "been coming foryears whereas you started working here "
				<< "since last month." << std::endl
				<< std::endl;
	error();
}

void Harl::error(void)
{
	std::cout	<< "[ERROR]" << std::endl
				<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl
				<< std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(levels[i])) {
			index = i;
		}
	}
    switch (index) {
        case 0:
            this->debug();
            break;
        case 1:
            this->info();
            break;
        case 2:
            this->warning();
            break;
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

