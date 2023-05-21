/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 22:31:49 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX00_DOG_HPP_
#define MODULE_04_EX00_DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const &rhs);
		Dog &operator=(Dog const &rhs);
		virtual ~Dog(void);

		virtual void	makeSound(void) const;
};

#endif  // MODULE_04_EX00_DOG_HPP_
