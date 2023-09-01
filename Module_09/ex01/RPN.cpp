/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:39:45 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/01 03:41:04 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <stack>

double RPNCalculator::evaluate(std::string const &expression) {
    std::stack<double> operandStack;
    std::istringstream iss(expression);

    std::string token;
    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (operandStack.size() < 2) {
                std::cerr << "Error: Insufficient operands for operator " << token << std::endl;
                return 0.0;
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
                    std::cerr << "Error: Division by zero" << std::endl;
                    return 0.0;
                }
            }

            operandStack.push(result);
        } else {
            double operand;
            std::istringstream(token) >> operand;
            operandStack.push(operand);
        }
    }

    if (operandStack.size() != 1) {
        std::cerr << "Error: Invalid expression" << std::endl;
        return 0.0;
    }

    return operandStack.top();
}
