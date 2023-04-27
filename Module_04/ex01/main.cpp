/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 07:08:41 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 05:37:59 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;

	Animal	*animalList[10];
	
	for (int i = 0; i < 10 ; i++) {
		if (i % 2 == 0) {
			animalList[i] = new Cat();
		} else {
			animalList[i] = new Dog();
		}
	}
	std::cout	<< std::endl;

	for (int i = 0; i < 10 ; i++) {
		std::cout	<< "Random " << animalList[i]->getType() << ": " << std::flush;
		animalList[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	
	for (int i = 0; i < 10 ; i++) {
		delete animalList[i];
	}
	std::cout << std::endl;

    return 0;
}
