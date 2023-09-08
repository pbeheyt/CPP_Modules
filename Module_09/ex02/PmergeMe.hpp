/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:42:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/08 02:16:59 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MODULE_09_EX02_PMERGEME_HPP_
#define _MODULE_09_EX02_PMERGEME_HPP_

#include <list>
#include <deque>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <iterator>

class PmergeMe {
	public:
		PmergeMe(void);
		PmergeMe(int ac, char **av);
		PmergeMe(PmergeMe const &rhs);
		PmergeMe &operator=(PmergeMe const &rhs);
		~PmergeMe(void);
		
		
		template <typename T>
		void insertionSort(T &container);
		template <typename T>
		void mergeSort(T &container);
		template <typename T>
		void merge(T &container, T const &left, T const &right);
		template <typename T>
		void mergeInsertionSort(T &container);
		template <typename T>
		void printContainer(T &container);
		
		bool isStringAllDigits(std::string const &str);
		void execute(void);
	
	private:
		std::deque<int>		_d;
		std::vector<int>	_v;
};

#endif // _MODULE_09_EX02_PMERGEME_HPP_