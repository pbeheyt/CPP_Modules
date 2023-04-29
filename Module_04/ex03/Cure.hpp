/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:13:08 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/29 07:04:38 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX03_CURE_HPP_
#define MODULE_04_EX03_CURE_HPP_

#include "AMateria.hpp"

class Cure : virtual public AMateria {
	public:
		Cure(void);
		Cure(Cure const &rhs);
		Cure & operator=(Cure const &rhs);
		~Cure(void);

		Cure *clone(void) const;

};

#endif // MODULE_04_EX03_CURE_HPP_