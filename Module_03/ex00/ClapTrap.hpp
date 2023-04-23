/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:21 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/23 05:10:39 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_03_EX00_CLAPTRAP_HPP_
#define MODULE_03_EX00_CLAPTRAP_HPP_

#include <iostream>
#include <string>

class ClapTrap {
	public:
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &copy);
		ClapTrap	&operator=(ClapTrap const &rhs);
		~ClapTrap(void);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

		void printStatus(void) const;
};

#endif  // MODULE_03_EX00_CLAPTRAP_HPP_
