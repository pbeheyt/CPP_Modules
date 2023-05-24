/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 07:08:41 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 22:47:04 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	// AAnimal test;
	
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;

	AAnimal	*animalList[10];
	
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
	std::cout	<< std::endl
				<< std::endl
				<< std::endl;
	
	Cat A;
	Cat B;
	
	std::cout	<< std::endl;
	std::cout << "<A> : " << A.getBrainIdea(0) << " is my first idea!" << std::endl; 
	std::cout << "<B> : " << B.getBrainIdea(0) << " is my first idea!" << std::endl; 
	std::cout	<< std::endl;
	
	B.setBrainIdea(0, "Sleeping");
	std::cout << "<A> : " << A.getBrainIdea(0) << " is my first idea!" << std::endl; 
	std::cout << "<B> : " << B.getBrainIdea(0) << " is my first idea!" << std::endl;
	std::cout << "[Brain A adr] - " << A.getBrainAdr() << std::endl;
	std::cout << "[Brain B adr] - " << B.getBrainAdr() << std::endl;
	std::cout	<< std::endl;
	
	A = B;
	
	std::cout	<< std::endl;
	std::cout << "<A> : " << A.getBrainIdea(0) << " is my first idea!" << std::endl; 
	std::cout << "<B> : " << B.getBrainIdea(0) << " is my first idea!" << std::endl;
	std::cout << "[Brain A adr] - " << A.getBrainAdr() << std::endl;
	std::cout << "[Brain B adr] - " << B.getBrainAdr() << std::endl;
	std::cout	<< std::endl;

	Cat C(A);
	std::cout << "<C> : " << A.getBrainIdea(0) << " is my first idea!" << std::endl;
	std::cout << "[Brain C adr] - " << C.getBrainAdr() << std::endl;
	std::cout	<< std::endl;
	
    return 0;
}
