/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:08:07 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/04 08:28:40 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *array, int len, void (*f)(T const &)) {
	for (int i = 0; i < len; i++) {
		(*f)(array[i]);
	}
}

template <typename T>
void printElement(T const &e) {
    std::cout << e << " ";
}

template <typename T>
void printSquareElement(T const &e) {
    std::cout << e * e << " ";
}

template <typename T>
void printIncrementElement(T const &e) {
    std::cout << e + 1 << " ";
}