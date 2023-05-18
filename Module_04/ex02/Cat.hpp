/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/18 03:22:18 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX02_CAT_HPP_
#define MODULE_04_EX02_CAT_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Brain;

class Cat : public AAnimal {
	public:
		Cat(void);
		Cat(Cat const &rhs);
		Cat	&operator=(Cat const &rhs);
		~Cat(void);

	private:
		Brain	*_brain;
		
		virtual void makeSound(void) const;
};

#endif  // MODULE_04_EX02_CAT_HPP_
