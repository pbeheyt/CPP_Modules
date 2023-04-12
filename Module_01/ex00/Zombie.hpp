/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:20:27 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/12 22:47:48 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie( std::string name );
		~Zombie();
		void    announce( void );
		Zombie* newZombie( std::string name );
		void	randomChump( std::string name );

	private:
		std::string _name;
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );
		
#endif