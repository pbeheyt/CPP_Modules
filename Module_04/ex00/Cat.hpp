/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 22:31:44 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX00_CAT_HPP_
#define MODULE_04_EX00_CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const &rhs);
		Cat &operator=(Cat const &rhs);
		virtual ~Cat(void);

		virtual void	makeSound(void) const;
};

#endif  // MODULE_04_EX00_CAT_HPP_
