/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:46:40 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/08 17:01:01 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	public:
		Span(unsigned int N);
		Span(Span const &rhs);
		Span &operator=(Span const &rhs);
		~Span(void);
		
		void addNumber(int nb);
		void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;

		class FullContainerException : public std::exception {
			public:
				char const *what() const throw() {
					return "Container is full";
				}
		};

		class InvalidSpanDistanceException : public std::exception {
			public:
				char const *what() const throw() {
					return "Too few values to calculate distance";
				}
		};

		private:
			std::vector<int>	_vector;
			unsigned int		_size;
};