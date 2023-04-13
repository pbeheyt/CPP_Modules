/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:47:05 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/13 23:09:57 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain( std::string level );
	
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void) ;
};

#endif