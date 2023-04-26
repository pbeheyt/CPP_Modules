/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:20:27 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 03:12:33 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_01_EX00_ZOMBIE_HPP_
#define MODULE_01_EX00_ZOMBIE_HPP_

#include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);
		
		void    announce(void) const;
		Zombie *newZombie(std::string name);
		void	randomChump(std::string name);

	private:
		std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif  // MODULE_01_EX00_ZOMBIE_HPP_
