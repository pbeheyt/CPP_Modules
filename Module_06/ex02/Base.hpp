/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:34:16 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/30 12:15:06 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_06_EX02_BASE_HPP_
#define MODULE_06_EX02_BASE_HPP_

#include <iostream>
#include <cstdlib>

class Base {
	public:
		Base(void);
		virtual ~Base(void);

		Base	*generate(void);
		void	identify(Base *p);
		void	identify(Base &p);

};

class A : public Base {
	virtual ~A(void) {}
};

class B : public Base {
	virtual ~B(void) {}
};

class C : public Base {
	virtual ~C(void) {}
};

#endif  // MODULE_06_EX02_BASE_HPP_