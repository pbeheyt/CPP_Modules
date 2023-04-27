/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:31:21 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/28 00:29:07 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_03_EX01_CLAPTRAP_HPP_
#define MODULE_03_EX01_CLAPTRAP_HPP_

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &rhs);
		ClapTrap	&operator=(ClapTrap const &rhs);
		~ClapTrap(void);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	printStatus(void) const;

	protected:
		std::string	_name;
		unsigned int			_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_attackDamage;

};

#endif  // MODULE_03_EX01_CLAPTRAP_HPP_
