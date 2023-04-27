/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:09:22 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 02:23:31 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {
	Point a(-10, -10);
    Point b(-10, 10);
    Point c(0, 0);
    Point inside(-5, 0);
    Point outside(0, 1);

    if (bsp(a, b, c, inside)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    if (bsp(a, b, c, outside)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }	
	
    return 0;
}
