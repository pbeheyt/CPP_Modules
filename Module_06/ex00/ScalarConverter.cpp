/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 07:32:58 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/27 10:05:29 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string const &input) : _input(input) {
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
        char *endPtr;
        
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
}

ScalarConverter::ScalarConverter(ScalarConverter const &rhs) :
	_input(rhs._input), _charVal(rhs._charVal) , _intVal(rhs._intVal),
	_floatVal(rhs._floatVal), _doubleVal(rhs._doubleVal), _type(rhs._type) {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs) {
	(void)rhs;
	return *this;
}

ScalarConverter::~ScalarConverter(void) {}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

bool ScalarConverter::isValidFloat(float f) const {
	if (std::isnan(f) || std::isinf(f) || f > std::numeric_limits<int>::max()
		|| f < std::numeric_limits<int>::min()) {
			return false;
	} else {
		return true;
	}
}

bool ScalarConverter::isValidDouble(double d) const {
	if (std::isnan(d) || std::isinf(d) || d > std::numeric_limits<int>::max()
		|| d < std::numeric_limits<int>::min()) {
			return false;
	} else {
		return true;
	}
}

char ScalarConverter::toChar(void) const {
	char c;
	
	switch (this->_type) {
		case charType:
			return this->_charVal;
		case intType:
			c = static_cast<char>(this->_intVal);
			if (!std::isprint(c)) {
				throw ScalarConverter::NonDisplayableException();
			} else {
				return c;
			}
		case floatType:
			c = static_cast<char>(this->_floatVal);
			if (!isValidFloat(this->_floatVal)) {
				throw ScalarConverter::ImpossibleConversionException();
			} else if (!std::isprint(c)) {
				throw ScalarConverter::NonDisplayableException();
			} else {
				return c;
			}
		case doubleType:
			c = static_cast<char>(this->_doubleVal);
			if (!isValidDouble(this->_doubleVal)) {
				throw ScalarConverter::ImpossibleConversionException();
			} else if (!std::isprint(c)) {
				throw ScalarConverter::NonDisplayableException();
			} else {
				return c;
			}
		default:
			throw InvalidInputException();
	}
}

int ScalarConverter::toInt(void) const {
	switch (this->_type) {
		case charType:
			return static_cast<int>(this->_charVal);
		case intType:
			return this->_intVal;
		case floatType:
			if (!isValidFloat(this->_floatVal)) {
				throw ScalarConverter::ImpossibleConversionException();
			} else {
				return static_cast<int>(this->_floatVal);
			}
		case doubleType:
			if (!isValidDouble(this->_doubleVal)) {
				throw ScalarConverter::ImpossibleConversionException();
			} else {
				return static_cast<int>(this->_doubleVal);
			}
		default:
			throw InvalidInputException();
	}
}

float ScalarConverter::toFloat(void) const {
	switch (this->_type) {
		case charType:
			return static_cast<float>(this->_charVal);
		case intType:
			return static_cast<float>(this->_intVal);
		case floatType:
			return this->_floatVal;
		case doubleType:
			return static_cast<float>(this->_doubleVal);
		default:
			throw InvalidInputException();
	}
}

double ScalarConverter::toDouble(void) const {
	switch (this->_type) {
		case charType:
			return static_cast<double>(this->_charVal);
		case intType:
			return static_cast<double>(this->_intVal);
		case floatType:
			return static_cast<double>(this->_floatVal);
		case doubleType:
			return this->_doubleVal;
		default:
			throw InvalidInputException();
	}
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void	ScalarConverter::convert(void) const {
	std::cout << "./convert " << this->_input << std::endl;
	try {
		std::cout << "char: " << toChar() << std::endl;
	} catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "int: " << toInt() << std::endl;
	} catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "float: ";
		float f = toFloat();
		
		std::cout << f;
		if (f == static_cast<int>(f)) {
			std::cout << ".0";
		}
		std::cout << "f" << std::endl;	
	} catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "double: ";
		float d = toDouble();
		
		std::cout << d;
		if (d == static_cast<int>(d)) {
			std::cout << ".0";
		}
		std::cout << std::endl;	
	} catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

char const *ScalarConverter::InvalidInputException::what(void) const throw() {
	return "invalid input";
}

char const *ScalarConverter::NonDisplayableException::what(void) const throw() {
	return "non displayable";
}

char const *ScalarConverter::ImpossibleConversionException::what(void) const throw() {
	return "impossible";
}
