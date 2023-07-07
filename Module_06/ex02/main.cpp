/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:55:12 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/07 18:52:34 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void) {


	Base base;
    
	Base *ptr = base.generate();
    base.identify(ptr);

    Base &ref = *ptr;
    base.identify(ref);

    delete ptr;

    return 0;
}
