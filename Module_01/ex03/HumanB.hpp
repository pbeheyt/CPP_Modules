/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:02:41 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/22 06:03:20 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_01_EX03_HUMANB_HPP_
#define MODULE_01_EX03_HUMANB_HPP_

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		explicit HumanB(std::string name);
		~HumanB(void);
		
		void	attack(void) const;
		void	setWeapon(Weapon& type);

	private:
		std::string _name;
		Weapon*		_weapon;
};

#endif  // MODULE_01_EX03_HUMANB_HPP_
