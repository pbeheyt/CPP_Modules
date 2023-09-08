/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 04:17:48 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/08 04:59:17 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &filePath) {
	
	std::ifstream ifs(filePath.c_str());
	if (!ifs.is_open()) {
		throw std::runtime_error("could not open file.");
	}
	
	std::string line;
	std::getline(ifs, line);
	if (line != "date,exchange_rate") {
		throw std::runtime_error("invalid header");
	}
	
	while (getline(ifs, line)) {
   		std::istringstream	iss(line);
		std::string			date;
		double				rate;

		std::getline(iss, date, ',');
		iss >> rate;
		if (!date.empty() && IsValidDate(date)
			&& iss && (iss.peek() == EOF || iss.peek() == '\n')) {
			this->_exchangeRates[date] = rate;
		} else {
			std::cerr << "Error: format in database =>"  << date << std::endl;
		}
	}
	ifs.close();
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
	if (value < 0) {
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	} else if (value > 1000) {
		std::cerr << "Error: too large a number." << std::endl;
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

bool	BitcoinExchange::GetExchangeRate(std::string const &date) {
	std::map<std::string, double>::const_iterator it;
	it = this->_exchangeRates.lower_bound(date);
	if (it != _exchangeRates.end()) {
		this->_rate = it->second;
		return true;
	} else if (!_exchangeRates.empty()) {
		this->_rate = (--it)->second;
		return true;
	}
	return false;
}

void	BitcoinExchange::Execute(std::string const	&filePath) {
	std::ifstream	ifs(filePath.c_str());
	std::string		line;

	if (!ifs.is_open()) {
        throw std::runtime_error("could not open file.");
    }

	std::getline(ifs, line);
	if (line != "date | value") {
    	throw std::runtime_error("invalid file header.");
	}
	
	while (getline(ifs, line)) {
		std::string			date;
		char				del;
		double				value;
   		std::istringstream	iss(line);

		if (!(iss >> date >> del >> value)) {
			std::cerr << "Error: bad input => " << date <<  std::endl;
			continue;
		}
		if (!IsValidDate(date)) {
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
		if (!IsValidValue(value)) {
			continue;
		}
		if (!GetExchangeRate(date)) {
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
		std::cout << date << " => " << value << " = " << value * this->_rate << std::endl;
	}
}