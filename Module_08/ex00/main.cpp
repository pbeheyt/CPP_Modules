/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:36:25 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/10 21:33:45 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void) {
    try {
        std::vector<int> vec;

        for (int i = 0; i < 5; ++i) {
            vec.push_back(i);
        }
        
        int searchValue = 3;
        std::vector<int>::iterator it = easyfind(vec, searchValue);
        
        std::cout << "Element " << searchValue << " found at position: " << std::distance(vec.begin(), it) << std::endl;
        
        searchValue = 8;
        it = easyfind(vec, searchValue);
        
        std::cout << "Element " << searchValue << " found at position: " << std::distance(vec.begin(), it) << std::endl;
    } catch (std::exception const &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}