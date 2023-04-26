/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:21:06 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 03:43:23 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_01_EX03_WEAPON_HPP_
#define MODULE_01_EX03_WEAPON_HPP_

#include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon(void);
		
		std::string const	&getType(void) const;
		void				setType(std::string type);

	private:
		std::string _type;
};

#endif  // MODULE_01_EX03_WEAPON_HPP_
