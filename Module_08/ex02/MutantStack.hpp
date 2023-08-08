/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:11:02 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/09 00:49:17 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_08_EX02_MUTANTSTACK_HPP_
#define MODULE_08_EX02_MUTANTSTACK_HPP_

#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack(void) : MutantStack<T, Container>::stack() {};
		MutantStack(const MutantStack<T, Container>& other) : MutantStack<T, Container>::stack(other) {};
		MutantStack<T, Container>& operator=(const MutantStack<T, Container>& rhs) {
			if (this != &rhs) {
				this->MutantStack<T, Container>::stack::operator=(rhs);
			}
			return *this;
		}
		virtual ~MutantStack(void) {};

		typedef typename Container::iterator				iterator;
		typedef typename Container::reverse_iterator		reverse_iterator;

		iterator			begin() { return this->c.begin(); };
		iterator			end() { return this->c.end(); };
		reverse_iterator	rbegin() { return this->c.rbegin(); };
		reverse_iterator	rend() { return this->c.rend(); };
};

#endif  // MODULE_08_EX02_MUTANTSTACK_HPP_