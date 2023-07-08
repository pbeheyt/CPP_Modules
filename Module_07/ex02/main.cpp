/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:36:58 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/08 17:28:14 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    try {
        Array<int> emptyArray; // Creation of an empty array
        Array<int> intArray(5); // Creation of an array of 5

        for (unsigned int i = 0; i < intArray.size(); ++i) {
        	intArray[i] = i + 1;
		}

        std::cout << "Array elements: ";
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << intArray[i] << " ";
		}
        std::cout << std::endl;

        Array<int> copiedArray(intArray); // Copy construtor test

        std::cout << "Copy Array elements: ";
        for (unsigned int i = 0; i < copiedArray.size(); ++i) {
            std::cout << copiedArray[i] << " ";
		}
        std::cout << std::endl;

        intArray[2] = 10; // Modify element of array test

        std::cout << "Modified Array elements: ";
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << intArray[i] << " ";
		}
        std::cout << std::endl;

        // Check copy array hasn't changed
		std::cout << "Copy Array elements: ";
        for (unsigned int i = 0; i < copiedArray.size(); ++i) {
            std::cout << copiedArray[i] << " ";
		}
        std::cout << std::endl;

        // Invalid index test
        std::cout << "Try to access invalid index: ";
        try {
            std::cout << intArray[10] << std::endl;
        } catch (std::exception const &e) {
            std::cout << e.what() << std::endl;
        }
    } catch (std::exception const &e) {
        std::cout << "Error : " << e.what() << std::endl;
    }

    return 0;
}

