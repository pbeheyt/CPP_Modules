/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:42:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/07 04:42:17 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MODULE_09_EX02_PMERGEME_HPP_
#define _MODULE_09_EX02_PMERGEME_HPP_

#include <list>
#include <vector>
#include <algorithm>

class PmergeMe {
	public:
		PmergeMe(void);
		PmergeMe(int ac, char **av);
		PmergeMe(PmergeMe const &rhs);
		PmergeMe &operator=(PmergeMe const &rhs);
		~PmergeMe(void);
		
		template <typename T>
		void printContainer(T &container);
		template <typename T>
		void insertionSort(T &container);
		template <typename T>
		void merge(T &container, T const &left, T const &right);
		template <typename T>
		void mergeInsertionSort(T &container);
		
		void execute(void);

	private:
		std::list<int>		_l;
		std::vector<int>	_v;
};

#endif // _MODULE_09_EX02_PMERGEME_HPP_