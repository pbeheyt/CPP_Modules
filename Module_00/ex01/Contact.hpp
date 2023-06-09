/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:27:22 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/22 06:02:14 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_00_EX01_CONTACT_HPP_
#define MODULE_00_EX01_CONTACT_HPP_

#include <iostream>
#include <string>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		
		void	fillContact(void);
		void	setIndex(int index);
		void	printContactLine(int index) const;
		void	printContactFull(int index) const;

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		int			_index;

		std::string	_getInput(std::string msg) const;
		std::string	_truncStr(std::string str) const;
};

#endif  // MODULE_00_EX01_CONTACT_HPP_

