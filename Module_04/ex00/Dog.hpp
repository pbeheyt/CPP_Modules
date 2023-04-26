/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 08:00:17 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX00_DOG_HPP_
#define MODULE_04_EX00_DOG_HPP_

#include "Animal.hpp"

class Dog : virtual public Animal {
	public:
		Dog(void);
		Dog(Dog const &rhs);
		Dog	&operator=(Dog const &rhs);
		~Dog(void);

		void makeSound(void) const;
};

#endif  // MODULE_04_EX00_DOG_HPP_
