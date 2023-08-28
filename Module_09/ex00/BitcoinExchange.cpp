/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 04:17:48 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/28 21:22:17 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

BitcoinExchange::BitcoinExchange(std::string const &filePath) {
    std::ifstream file(filePath.c_str());
    if (!file) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::string date;
        float value;
        char separator;

        std::istringstream iss(line);
        if (iss >> date >> separator >> value && separator == '|' && value >= 0 && value <= 1000) {
            _exchangeRates[date] = value;
        }
    }
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &rhs) {
	*this = rhs;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	if (this != &rhs) {
		this->_exchangeRates = rhs._exchangeRates;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange() {};

bool	BitcoinExchange::IsValidateRate(double const &rate) const {
	if (rate < 0 || rate > 1000) {
		return false;
	}
	return true;
}

bool	BitcoinExchange::IsValidateDate(std::string &date) const {
	 if (date.length() != 10)
        return false;

    if (date[4] != '-' || date[7] != '-')
        return false;

    for (int i = 0; i < 10; ++i) {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(date[i]))
            return false;
    }
	
	int year, month, day;
	sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
	if (year < 0)
        return false;

    if (month < 1 || month > 12)
        return false;

    if (day < 1)
        return false;

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return day <= 29;
        } else {
            return day <= 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return day <= 30;
    } else {
        return day <= 31;
    }
}
