/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:27:22 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/22 00:09:13 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_00_EX01_PHONEBOOK_HPP_
#define MODULE_00_EX01_PHONEBOOK_HPP_

#include "contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		
		void	addContact(void);
		void	displayContactInfo(int index) const;
		void	printContactList(void) const;

	private:
		Contact	_contacts[8];
		int		_nbContacts;
};

#endif  // MODULE_00_EX01_PHONEBOOK_HPP_
