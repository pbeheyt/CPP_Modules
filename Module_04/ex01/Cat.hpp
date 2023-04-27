/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 04:55:54 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX01_CAT_HPP_
#define MODULE_04_EX01_CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Cat : virtual public Animal {
	public:
		Cat(void);
		Cat(Cat const &rhs);
		Cat	&operator=(Cat const &rhs);
		~Cat(void);

		void makeSound(void) const;

	private:
		Brain	*_brain;
};

#endif  // MODULE_04_EX01_CAT_HPP_
