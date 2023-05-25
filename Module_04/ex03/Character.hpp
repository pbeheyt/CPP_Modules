/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:24:09 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/25 02:40:05 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX03_CHARACTER_HPP_
#define MODULE_04_EX03_CHARACTER_HPP_

#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character(std::string const &name);
		Character(Character const &rhs);
		Character &operator=(Character const &rhs);
		~Character(void);

		virtual std::string const	&getName(void) const;
		virtual void 				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);

	protected:
		std::string	_name;
		AMateria	*_inventory[4];
};

#endif // MODULE_04_EX03_CHARACTER_HPP_
