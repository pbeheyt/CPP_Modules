/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:39:48 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/08 23:47:10 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MODULE_09_EX01_RPN_HPP_
#define _MODULE_09_EX01_RPN_HPP_

#include <iostream>
#include <sstream>
#include <stack>
#include <string>

class RPNCalculator {
	public:
    	double evaluate(std::string const &expression);
		bool isStringAllDigits(std::string const &str);
};

#endif // _MODULE_09_EX01_RPN_HPP_
