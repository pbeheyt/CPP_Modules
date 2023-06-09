/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:13:08 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 05:31:45 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX03_CURE_HPP_
#define MODULE_04_EX03_CURE_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(Cure const &rhs);
		Cure &operator=(Cure const &rhs);
		virtual ~Cure(void);

		virtual void		use(ICharacter &target);
		virtual AMateria	*clone(void) const;
};

#endif // MODULE_04_EX03_CURE_HPP_