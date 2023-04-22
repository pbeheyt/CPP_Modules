/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:02:17 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/22 02:27:48 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_01_EX03_HUMANA_HPP_
#define MODULE_01_EX03_HUMANA_HPP_

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		
		void	attack(void) const;

	private:
		std::string _name;
		Weapon&		_weapon;
};

#endif  // MODULE_01_EX03_HUMANA_HPP_
