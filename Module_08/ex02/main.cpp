/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:43:29 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/09 00:47:25 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp" 

int main(void) {
    MutantStack<int> mutantStack;

    // Test pushing elements onto the stack
    mutantStack.push(10);
    mutantStack.push(20);
    mutantStack.push(30);

    // Test iterating through the stack using iterators
    std::cout << "Stack elements using forward iterator:" << std::endl;
    for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Test iterating through the stack using reverse iterators
    std::cout << "Stack elements using reverse iterator:" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = mutantStack.rbegin(); rit != mutantStack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Test copying the stack
    MutantStack<int> copyStack = mutantStack;
    std::cout << "Copy of stack elements using forward iterator:" << std::endl;
    for (MutantStack<int>::iterator it = copyStack.begin(); it != copyStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Test popping elements from the stack
    mutantStack.pop();
    mutantStack.pop();
    std::cout << "Stack elements after popping:" << std::endl;
    for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}