/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:13:08 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/20 21:52:41 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX03_ICE_HPP_
#define MODULE_04_EX03_ICE_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : virtual public AMateria {
	public:
		Ice(void);
		Ice(Ice const &rhs);
		Ice & operator=(Ice const &rhs);
		virtual ~Ice(void);

		void use(ICharacter& target);
		Ice *clone(void) const;
};

#endif // MODULE_04_EX03_ICE_HPP_