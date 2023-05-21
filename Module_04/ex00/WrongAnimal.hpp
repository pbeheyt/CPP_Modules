/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 22:28:09 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX00_WRONGANIMAL_HPP_
#define MODULE_04_EX00_WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &rhs);
		WrongAnimal &operator=(WrongAnimal const &rhs);
		virtual ~WrongAnimal(void);

		std::string const 	&getType() const;
		void				makeSound(void) const;

	protected:
		std::string	_type;
};

#endif  // MODULE_04_EX00_WRONGANIMAL_HPP_
