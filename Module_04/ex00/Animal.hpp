/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/18 00:55:19 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX00_ANIMAL_HPP_
#define MODULE_04_EX00_ANIMAL_HPP_

#include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(Animal const &rhs);
		Animal	&operator=(Animal const &rhs);
		virtual ~Animal(void);

		const std::string &getType() const;
		virtual void makeSound(void) const;

	protected:
		std::string	_type;
};

#endif  // MODULE_04_EX00_ANIMAL_HPP_
