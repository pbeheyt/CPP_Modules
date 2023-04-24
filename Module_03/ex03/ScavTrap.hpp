/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:47:36 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/24 04:33:47 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_03_EX03_SCAVTRAP_HPP_
#define MODULE_03_EX03_SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &rhs);
		ScavTrap	&operator=(ScavTrap const &rhs);
		~ScavTrap(void);

		void	attack(std::string const &target);
		void	guardGate(void);
};

#endif  // MODULE_03_EX03_SCAVTRAP_HPP_
