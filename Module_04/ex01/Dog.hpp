/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 04:56:00 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX01_DOG_HPP_
#define MODULE_04_EX01_DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Dog : virtual public Animal {
	public:
		Dog(void);
		Dog(Dog const &rhs);
		Dog	&operator=(Dog const &rhs);
		~Dog(void);

		void makeSound(void) const;
	
	private:
		Brain	*_brain;
};

#endif  // MODULE_04_EX01_DOG_HPP_
