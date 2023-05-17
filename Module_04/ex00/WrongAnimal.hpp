/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/17 23:52:00 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX00_WRONGANIMAL_HPP_
#define MODULE_04_EX00_WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &rhs);
		WrongAnimal	&operator=(WrongAnimal const &rhs);
		virtual ~WrongAnimal(void);

		const std::string &getType() const;
		void makeSound(void) const;

	protected:
		std::string	_type;
};

#endif  // MODULE_04_EX00_WRONGANIMAL_HPP_
