/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:30:30 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/03 15:32:42 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const &min(T const &a, T const &b) {
	return (a < b) ? a : b;
}

template <typename T>
T const &max(T const &a, T const &b) {
	return (a > b) ? a : b;
}