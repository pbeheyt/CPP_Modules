/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 04:19:25 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/08 04:59:02 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MODULE_09_EX00_BITCOINEXCHANGE_HPP_
#define _MODULE_09_EX00_BITCOINEXCHANGE_HPP_

#include <fstream>
#include <sstream>
#include <map>
#include <iostream>

class BitcoinExchange {
	public:
		BitcoinExchange(std::string const &filePath);
		BitcoinExchange(BitcoinExchange const &rhs);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange(void);

		bool	IsValidValue(double const &value) const;
		bool	IsValidDate(std::string &date) const;
		bool	GetExchangeRate(std::string const &date);
		void	Execute(std::string const &filePath);
	
	private:
		std::map<std::string, double>	_exchangeRates;
		double							_rate;
};

#endif  // _MODULE_09_EX00_BITCOINEXCHANGE_HPP_