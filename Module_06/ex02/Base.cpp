/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:35:34 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/07 20:49:40 by pbeheyt          ###   ########.fr       */
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

void Base::identify(Base *p) {
	std::cout << "pointer belongs to class: ";
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "C" << std::endl;
	}
	else {
		std::cout << "none" << std::endl;
	}

}

void Base::identify(Base &p) {
	try {
		std::cout << "reference belongs to class: ";
		if (dynamic_cast<A*>(&p)) {
			std::cout << "A" << std::endl;
		}
		else if (dynamic_cast<B*>(&p)) {
			std::cout << "B" << std::endl;
		}
		else if (dynamic_cast<C*>(&p)) {
			std::cout << "C" << std::endl;
		}
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
}