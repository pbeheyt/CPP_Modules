/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:08:07 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/08 15:37:56 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_07_EX01_ITER_HPP_
#define MODULE_07_EX01_ITER_HPP_

#include <iostream>

template <typename T>
void iter(T *array, size_t size, void (*f)(T const &)) {
	for (size_t i = 0; i < size; i++) {
		(*f)(array[i]);
	}
}

template <typename T>
void printElement(T const &e) {
    std::cout << e << std::endl;
}

template <typename T>
void printSquareElement(T const &e) {
    std::cout << e * e << std::endl;
}

template <typename T>
void printIncrementElement(T const &e) {
    std::cout << e + 1 << std::endl;
}

#endif  // MODULE_07_EX01_ITER_HPP_