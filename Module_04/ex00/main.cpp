/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 07:08:41 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 22:45:43 by pbeheyt          ###   ########.fr       */
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
	std::cout << std::endl;

	const WrongAnimal* metatest = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();
	std::cout << x->getType() << " " << std::endl;
	metatest->makeSound();
	x->makeSound(); //will output the cat sound!
	delete metatest;
	delete x;
	std::cout << std::endl;

    return 0;
}
