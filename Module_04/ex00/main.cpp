/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 07:08:41 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 06:50:02 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	std::cout	<< std::endl
				<< std::endl;

	const WrongAnimal* metatest = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();
	std::cout << x->getType() << " " << std::endl;
	x->makeSound(); //will output the cat sound!
	metatest->makeSound();
	delete metatest;
	delete x;
	std::cout << std::endl;


    // // Test Animal
    // const Animal* a = new Animal();
    // std::cout << a->getType() << std::endl;
    // a->makeSound();
    // delete a;
	// std::cout << std::endl;

    // // Test Dog
    // const Animal* b = new Dog();
    // std::cout << b->getType() << std::endl;
    // b->makeSound();
    // delete b;
	// std::cout << std::endl;

    // // Test Cat
    // const Animal* c = new Cat();
    // std::cout << c->getType() << std::endl;
    // c->makeSound();
    // delete c;
	// std::cout << std::endl;

    // // Test WrongAnimal
    // const WrongAnimal* wa = new WrongAnimal();
    // std::cout << wa->getType() << std::endl;
    // wa->makeSound();
    // delete wa;
	// std::cout << std::endl;

    // // Test WrongCat
    // const WrongAnimal* wc = new WrongCat();
    // std::cout << wc->getType() << std::endl;
    // wc->makeSound();
    // delete wc;
	// std::cout << std::endl;

    return 0;
}
