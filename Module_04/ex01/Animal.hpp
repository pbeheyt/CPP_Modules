/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/24 04:43:57 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX01_ANIMAL_HPP_
#define MODULE_04_EX01_ANIMAL_HPP_

#include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(std::string const &type);
		Animal(Animal const &rhs);
		Animal	&operator=(Animal const &rhs);
		virtual ~Animal(void);

		std::string const	&getType() const;
		virtual void		makeSound(void) const;

	protected:
		std::string	_type;
};

#endif  // MODULE_04_EX01_ANIMAL_HPP_
