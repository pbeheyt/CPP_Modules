/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/18 01:02:38 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX02_DOG_HPP_
#define MODULE_04_EX02_DOG_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Brain;

class Dog : public AAnimal {
	public:
		Dog(void);
		Dog(Dog const &rhs);
		Dog	&operator=(Dog const &rhs);
		~Dog(void);

		void makeSound(void) const;
	
	private:
		Brain	*_brain;
};

#endif  // MODULE_04_EX02_DOG_HPP_
