/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:51:32 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/10 22:15:30 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    try {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Span sp(10);
        std::vector<int> numbers;
        numbers.push_back(6);
        numbers.push_back(3);
        numbers.push_back(17);
        numbers.push_back(9);
        numbers.push_back(11);
        sp.addNumber(numbers.begin(), numbers.end());
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
	
	try {
        Span sp(10000);
        for (int i = 0; i < 10000; ++i) {
			sp.addNumber(i);
		}
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Span sp(3);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(4); // Should throw FullContainerException
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Span sp(5);
        sp.addNumber(1);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl; // Should throw InvalidSpanDistanceException
        std::cout << "Longest span: " << sp.longestSpan() << std::endl; // Should throw InvalidSpanDistanceException
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}

/*
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}
*/