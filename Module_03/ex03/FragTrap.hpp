/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:47:36 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/28 00:31:44 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_03_EX03_FRAGTRAP_HPP_
#define MODULE_03_EX03_FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &rhs);
		FragTrap	&operator=(FragTrap const &rhs);
		~FragTrap(void);

		void	attack(std::string const &target);
		void	printStatus(void) const;
		void	highFivesGuys(void);
};

#endif  // MODULE_03_EX02_FRAGTRAP_HPP_
