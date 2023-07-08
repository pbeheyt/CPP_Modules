/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:12:00 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/08 16:29:58 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    // Testing iter() with int array
    std::cout << "Iterating over intArray: " << std::endl;;
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "Square and print over intArray: " << std::endl;;
	iter(intArray, 5, printSquareElement<int>);
    std::cout << std::endl;

    // Testing iter() with double array
    std::cout << "Iterating over doubleArray: " << std::endl;;
    iter(doubleArray, 5, printElement<double>);
    std::cout << std::endl;

    std::cout << "Increment and print over doubleArray: " << std::endl;;
    iter(doubleArray, 5, printIncrementElement<double>);
    std::cout << std::endl;

    // Testing iter() with char array
    std::cout << "Iterating over charArray: " << std::endl;;
    iter(charArray, 5, printElement<char>);
    std::cout << std::endl;

    return 0;
}

/*
class Awesome {
    public:
        Awesome() : _n(42) {return;};
        int get() const {return this->_n;};

    private:
        int    _n;
};

std::ostream & operator<<(std::ostream &o, Awesome const &rhs) {o << rhs.get(); return o;}

template<typename T>
void print (T const &x) {std::cout << x << std::endl; return;}

int main() {
    int tab[] = {0,1,2,3,4};

    Awesome tab2[5];

    iter (tab, 5, print);
    iter (tab2, 5, print);

    return 0;
}
*/