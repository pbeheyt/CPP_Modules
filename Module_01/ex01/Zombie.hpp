/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:20:27 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/22 02:30:45 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_01_EX01_ZOMBIE_HPP_
#define MODULE_01_EX01_ZOMBIE_HPP_

#include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();
		
		void    announce(void) const;
		Zombie* newZombie(std::string name);
		void	setName(std::string name);

	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif  // MODULE_01_EX01_ZOMBIE_HPP_
