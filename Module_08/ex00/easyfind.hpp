/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:17:00 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/03 19:37:57 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_08_EX00_EASYFIND_HPP_
#define MODULE_08_EX00_EASYFIND_HPP_

#include <iostream>
#include <vector>
#include <algorithm>

class ElementNotFoundException : public std::exception {
	public:
		char const *what() const throw() {
			return "Element not found";
	}
};

template <typename T>
typename T::iterator	easyfind(T &container, int toFind) {
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if  (it == container.end()) {
		throw ElementNotFoundException();
	} else {
		return it;
	}
}

#endif  // MODULE_08_EX00_EASYFIND_HPP_