/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:11:02 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/10 22:17:44 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_08_EX02_MUTANTSTACK_HPP_
#define MODULE_08_EX02_MUTANTSTACK_HPP_

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack(void) : std::stack<T>() {}
		MutantStack(MutantStack<T> const &rhs) : std::stack<T>(rhs) {}
		MutantStack<T> &operator=(MutantStack<T> const &rhs) {
			if (this != &rhs) {
				std::stack<T>::operator=(rhs);
			}
			return *this;
		}
		virtual ~MutantStack(void) {};

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;

		iterator					begin() { return this->c.begin(); };
		iterator					end() { return this->c.end(); };
		reverse_iterator			rbegin() { return this->c.rbegin(); };
		reverse_iterator			rend() { return this->c.rend(); };
};

#endif  // MODULE_08_EX02_MUTANTSTACK_HPP_