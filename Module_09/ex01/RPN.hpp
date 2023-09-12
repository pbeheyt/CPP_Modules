/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:39:48 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/13 01:40:03 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MODULE_09_EX01_RPN_HPP_
#define _MODULE_09_EX01_RPN_HPP_

#include <iostream>
#include <sstream>
#include <stack>
#include <string>

class RPN {
	public:	
		RPN(void);
		RPN(RPN const &rhs);
		RPN &operator=(RPN const &rhs);
		~RPN(void);

    	double evaluate(std::string const &expression);
		bool isStringAllDigits(std::string const &str);
};

#endif // _MODULE_09_EX01_RPN_HPP_
