/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/27 04:41:03 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX01_WRONGANIMAL_HPP_
#define MODULE_04_EX01_WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &rhs);
		WrongAnimal	&operator=(WrongAnimal const &rhs);
		virtual ~WrongAnimal(void);

		virtual const std::string &getType() const;
		virtual void makeSound(void) const;

	protected:
		std::string	_type;
};

#endif  // MODULE_04_EX01_WRONGANIMAL_HPP_
