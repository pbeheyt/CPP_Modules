/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:47:36 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/28 01:50:03 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_03_EX03_DIAMONDTRAP_HPP_
#define MODULE_03_EX03_DIAMONDTRAP_HPP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &rhs);
		DiamondTrap	&operator=(DiamondTrap const &rhs);
		~DiamondTrap(void);

		using	ScavTrap::attack;
		void	printStatus(void) const;
		void	whoAmI(void);
		
	private:
		std::string	_name;
};

#endif  // MODULE_03_EX03_DIAMONDTRAP_HPP_
