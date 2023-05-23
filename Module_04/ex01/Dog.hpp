/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/23 03:30:16 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX01_DOG_HPP_
#define MODULE_04_EX01_DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const &rhs);
		Dog	&operator=(Dog const &rhs);
		virtual ~Dog(void);

		void		setBrainIdea(int index, std::string const &idea);
		std::string	&getBrainIdea(int index);

	private:
		Brain	*_brain;
		
		virtual void	makeSound(void) const;
};

#endif  // MODULE_04_EX01_DOG_HPP_
