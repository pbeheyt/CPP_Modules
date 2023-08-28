/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 04:17:48 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/28 04:32:34 by pbeheyt          ###   ########.fr       */
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