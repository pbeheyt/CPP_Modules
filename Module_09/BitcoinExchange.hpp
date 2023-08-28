/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 04:19:25 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/28 04:25:52 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MODULE_09_EX00_BITCOINEXCHANGE_HPP_
#define _MODULE_09_EX00_BITCOINEXCHANGE_HPP_

#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange {
	public:
		BitcoinExchange(std::string const &filePath);
		BitcoinExchange(BitcoinExchange const &rhs);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange(void);

		bool	ValidateValue(double const &rate) const;
		bool	ValidateDate(std::string &date) const;
		void	PrintMap(void);
		void	ProcessInput(std::string const &filename);
		double	GetExchangeRate(std::string const &date) const;
		bool	ValidateSpace(std::string const &line) const;
	
	private:
		std::map<std::string, double> _exchangeRates;
};

#endif  // _MODULE_09_EX00_BITCOINEXCHANGE_HPP_