/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:47:05 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/22 06:03:39 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_01_EX05_HARL_HPP_
#define MODULE_01_EX05_HARL_HPP_

#include <iostream>

class Harl {
	public:
		Harl(void);
		~Harl(void);
		
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif  // MODULE_01_EX05_HARL_HPP_
