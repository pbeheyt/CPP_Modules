/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 07:32:58 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/26 11:03:44 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string const &input)
    : _input(input)
{
    if (input.empty())
        throw ScalarConverter::InvalidInputException();

    if (input.size() == 1) {
        if (isdigit(input[0])) {
            _intVal = atoi(input.c_str());
            _type = intType;
        } else {
            _charVal = input[0];
            _type = charType;
        }
    } else {
        char* endPtr;
        _intVal = strtol(input.c_str(), &endPtr, 10);

        if (*endPtr == '\0') {
            _type = intType;
        } else {
            _floatVal = static_cast<float>(strtod(input.c_str(), &endPtr));
            if (*endPtr == '\0') {
                _type = floatType;
            } else {
                _doubleVal = strtod(input.c_str(), &endPtr);
                if (*endPtr == '\0') {
                    _type = doubleType;
                } else {
                    throw ScalarConverter::InvalidInputException();
                }
            }
        }
    }
	std::cout << _type << std::endl;
}

ScalarConverter::~ScalarConverter(void) {}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

char const *ScalarConverter::InvalidInputException::what() const throw() {
	return "invalid input";
}
