/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:39:45 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/13 01:40:57 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(RPN const &rhs) {
	*this = rhs;
}

RPN	&RPN::operator=(RPN const &rhs) {
	(void)rhs;
	return *this;
}

RPN::~RPN(void) {}

/* ************************************************************************** */

bool RPN::isStringAllDigits(std::string const &str) {
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it)) {
            return false;
        }
    }
    return true;
}

double RPN::evaluate(std::string const &expression) {
 std::stack<double> operandStack;
	std::istringstream iss(expression);

	std::string token;
	while (iss >> token) {
		if (token == "+" || token == "-" || token == "*" || token == "/") {
			if (operandStack.size() < 2) {
				throw std::invalid_argument("Insufficient operands for operator " + token);
			}

			double operand2 = operandStack.top();
			operandStack.pop();
			double operand1 = operandStack.top();
			operandStack.pop();

			double result = 0.0;
			if (token == "+") {
				result = operand1 + operand2;
			} else if (token == "-") {
				result = operand1 - operand2;
			} else if (token == "*") {
				result = operand1 * operand2;
			} else if (token == "/") {
				if (operand2 != 0.0) {
					result = operand1 / operand2;
				} else {
					throw std::runtime_error("Division by zero");
				}
			}

			operandStack.push(result);
		} else if (isStringAllDigits(token)) {
			double operand;
			std::istringstream(token) >> operand;
			
			if (operand >= 10) {
                throw std::invalid_argument("Number " + token + " is greater than or equal to 10");
			}
			operandStack.push(operand);
			
		} else {
			throw std::invalid_argument("Invalid token [ " + token + " ]");
		}
	}

	if (operandStack.size() != 1) {
		throw std::invalid_argument("Error: Invalid expression");
	}

	return operandStack.top();
}
