/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:47:05 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/22 02:28:55 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_01_EX06_HARL_HPP_
#define MODULE_01_EX06_HARL_HPP_

#include <iostream>

class Harl {
	public:
		Harl();
		~Harl();
		
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif  // MODULE_01_EX06_HARL_HPP_
