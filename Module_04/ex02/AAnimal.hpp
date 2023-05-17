/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/18 01:02:51 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX02_AANIMAL_HPP_
#define MODULE_04_EX02_AANIMAL_HPP_

#include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(AAnimal const &rhs);
		AAnimal	&operator=(AAnimal const &rhs);
		virtual ~AAnimal(void);

		const std::string &getType() const;
		virtual void makeSound(void) const = 0;

	protected:
		std::string	_type;
};

#endif  // MODULE_04_EX02_ANIMAL_HPP_
