/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:27:02 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/08 17:01:13 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N) {}

Span::Span(Span const &rhs) : _vector(rhs._vector), _size(rhs._size) {}

Span &Span::operator=(Span const &rhs) {
	if (this != &rhs) {
        this->_vector = rhs._vector;
        this->_size = rhs._size;
    }
    return *this;
}

Span::~Span(void) {};

/* ************************************************************************** */

void Span::addNumber(int nb) {
    if (this->_vector.size() < this->_size) {
        this->_vector.push_back(nb);
	} else {
        throw FullContainerException();
	}
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end) {
	int distance = std::distance(begin, end);
	if (distance + this->_vector.size() > this->_size) {
		this->_vector.insert(this->_vector.end(), begin, begin + (this->_size - this->_vector.size()));
		throw FullContainerException();
	} else {
		this->_vector.insert(this->_vector.end(), begin, end);
	}
}

unsigned int Span::shortestSpan(void) const {
    if (this->_vector.size() <= 1) {
        throw InvalidSpanDistanceException();
    }
    std::vector<int> sortedVector = this->_vector;
    std::sort(sortedVector.begin(), sortedVector.end());
    int minSpan = sortedVector[1] - sortedVector[0];
    for (size_t i = 1; i < sortedVector.size() - 1; ++i) {
        int span = sortedVector[i + 1] - sortedVector[i];
        if (span < minSpan) {
            minSpan = span;
        }
    }
    return minSpan;
}

unsigned int Span::longestSpan(void) const {
    if (this->_vector.size() <= 1) {
        throw InvalidSpanDistanceException();
    }
    std::vector<int> sortedVector = this->_vector;
    std::sort(sortedVector.begin(), sortedVector.end());
    return (sortedVector.back() - sortedVector.front());
}