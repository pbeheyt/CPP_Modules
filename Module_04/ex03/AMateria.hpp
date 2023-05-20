/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:13:08 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/20 05:43:09 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX03_AMATERIA_HPP_
#define MODULE_04_EX03_AMATERIA_HPP_

#include <iostream>
#include <cstring>
#include "ICharacter.hpp"

// class ICharacter;

class AMateria {
	public :
		AMateria(std::string const &type);
		AMateria(AMateria const &rhs);
		AMateria	&operator=(AMateria const &rhs);
		virtual ~AMateria(void);
		
		std::string const &getType(void) const; // Returns the materia type
		virtual AMateria *clone(void) const = 0;
		virtual void use(ICharacter &target);
	
	protected:
		std::string	_type;
};

#endif // MODULE_04_EX03_AMATERIA_HPP_