/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 04:17:48 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/29 05:49:53 by pbeheyt          ###   ########.fr       */
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

bool	BitcoinExchange::IsValidValue(double const &value) const {
	if (value < 0 || value > 1000) {
		return false;
	}
	return true;
}

bool	BitcoinExchange::IsValidDate(std::string &date) const {
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

double	BitcoinExchange::GetExchangeRate(std::string const &date) const {
	std::map<std::string, double>::const_iterator it;
	it = this->_exchangeRates.lower_bound(date);
	if (it != _exchangeRates.end()) {
		return it->second;
	} else if (!_exchangeRates.empty()) {
		return (--it)->second;
	}
	return (-1);
}

void	BitcoinExchange::Execute(std::string const	&filePath) {
	std::ifstream	ifs(filePath.c_str());
	std::string		line;

	if (!ifs.is_open()) {
        throw std::runtime_error("Error: Failed to open file.");
    }

	std::getline(ifs, line);
	if (line != "date | value") {
    	throw std::runtime_error("Error: Invalid file header.");
	}
	
	while (getline(ifs, line)) {
		std::string			date;
		char				del;
		double				value;
		double				rate;
   		std::istringstream	iss(line);

		if (!(iss >> date >> del >> value)) {
			std::cerr << "Error: parsing\nLine " << line <<  std::endl;
			continue;
		}
		if (!IsValidDate(date)) {
			std::cerr << "Error: invalid date\nLine " << line << std::endl;
			continue;
		}
		if (!IsValidValue(value)) {
			std::cerr << "Error: invalid range value [1-1000]\nLine " << line << std::endl;
			continue;
		}
		rate = GetExchangeRate(date);
		if (rate == -1) {
			std::cerr << "Error: exchange rate\nLine " << line << std::endl;
			continue;
		}
		// if (!ValidateSpace(line)) {
		// 	std::cerr << "Error space not good format : " << line << std::endl;
		// }
		std::cout << date << " => " << value << " = " << value * rate << std::endl;
	}
}