/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:36:58 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/04 09:46:55 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
    try {
        // Create an array of integers
        Array<int> intArray(5);

        // Assign values to the array elements
        for (unsigned int i = 0; i < intArray.size(); i++) {
            intArray[i] = i + 1;
        }

        // Print the array elements
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        // Access an element out of range
        intArray[10] = 42; // Throws OutOfRangeException

    } catch (const std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
