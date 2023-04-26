/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:14:12 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 03:39:21 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Adresse de string    : " << &str << std::endl;
    std::cout << "Adresse de stringPTR : " << stringPTR << std::endl;
    std::cout << "Adresse de stringREF : " << &stringREF << std::endl;
    std::cout << std::endl;
	
    std::cout << "Valeur de string     : " << str << std::endl;
    std::cout << "Valeur de stringPTR  : " << *stringPTR << std::endl;
    std::cout << "Valeur de stringREF  : " << stringREF << std::endl;

    return 0;
}
