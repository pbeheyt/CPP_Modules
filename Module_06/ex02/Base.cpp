/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:35:34 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/07 18:54:22 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void) {};

Base::~Base(void) {};

Base	*Base::generate(void) {
	std::cout << "generated class: ";
	srand(time(NULL));
	switch (rand() % 3) {
		case 0:
			std::cout << "A" << std::endl;
			return new A();
		case 1:
			std::cout << "B" << std::endl;
			return new B();
		case 2:
			std::cout << "C" << std::endl;
			return new C();
		default:
			return NULL;
	}
}

void Base::identify(Base *ptr) {
	std::cout << "pointer belongs to class: ";
	if (dynamic_cast<A*>(ptr)) {
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(ptr)) {
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(ptr)) {
		std::cout << "C" << std::endl;
	}
	else {
		std::cout << "none" << std::endl;
	}

}

void Base::identify(Base &ref) {
	try {
		std::cout << "reference belongs to class: ";
		if (dynamic_cast<A*>(&ref)) {
			std::cout << "A" << std::endl;
		}
		else if (dynamic_cast<B*>(&ref)) {
			std::cout << "B" << std::endl;
		}
		else if (dynamic_cast<C*>(&ref)) {
			std::cout << "C" << std::endl;
		}
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
}