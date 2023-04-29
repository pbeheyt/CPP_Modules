/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:24:09 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/29 07:01:33 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX03_CHARACTER_HPP_
#define MODULE_04_EX03_CHARACTER_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : virtual public ICharacter {
	public:
		Character(std::string name);
		Character(Character const &rhs);
		Character &operator=(Character const &rhs);
		~Character(void);

		std::string const	&getName(void) const;
		void 				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

	protected:
		std::string	_name;
		AMateria	*_inventory[4];
};

#endif // MODULE_04_EX03_CHARACTER_HPP_
