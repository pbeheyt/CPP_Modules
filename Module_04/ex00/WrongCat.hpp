/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 06:48:13 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 08:16:51 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX00_WRONGCAT_HPP_
#define MODULE_04_EX00_WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const &rhs);
		WrongCat	&operator=(WrongCat const &rhs);
		~WrongCat(void);

		void makeSound(void) const;
};

#endif  // MODULE_04_EX00_WRONGCAT_HPP_
