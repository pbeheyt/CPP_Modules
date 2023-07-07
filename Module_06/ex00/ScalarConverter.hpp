/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 07:33:02 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/06 19:46:40 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_06_EX00_SCALARCONVERTER_HPP_
#define MODULE_06_EX00_SCALARCONVERTER_HPP_

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>

class ScalarConverter {
	public:
		ScalarConverter(std::string const &str);
		ScalarConverter(ScalarConverter const &rhs);
		ScalarConverter &operator=(ScalarConverter const &rhs);
		~ScalarConverter(void);

		bool	isValidChar(double d) const;
		bool	isValidInt(double d) const;
		char	toChar(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
		double	toDouble(void) const;

		void	convert(void) const;

		class InvalidInputException : public std::exception {
			public:
				char const *what(void) const throw();
		};
		
		class NonDisplayableException : public std::exception {
			public:
				char const *what(void) const throw();
		};

		class ImpossibleConversionException : public std::exception {
			public:
				char const *what(void) const throw();
		};

	private:
			std::string const 	_input;
			char				_charVal;
			int					_intVal;
			float				_floatVal;
			double				_doubleVal;
			int					_type;

			enum enumType {
				charType,
				intType,
				floatType,
				doubleType,
			};
};

#endif  // MODULE_06_EX00_SCALARCONVERTER_HPP_