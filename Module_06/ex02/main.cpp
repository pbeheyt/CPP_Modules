/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:55:12 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/30 12:20:16 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void) {
    srand(time(NULL));


	Base base;
    
	Base *ptr = base.generate();
    base.identify(ptr);

    Base &ref = *ptr;
    base.identify(ref);

    delete ptr;

    return 0;
}
