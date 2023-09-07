/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:42:11 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/07 21:53:29 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void){};

PmergeMe::PmergeMe(int ac, char **av) {
	for (int i = 1; i < ac; ++i) {
		int nb = atoi(av[i]);

		if (nb > 0) {
			this->_l.push_back(nb);
			this->_v.push_back(nb);
		}
		else {
			throw std::runtime_error("Error: Argument is not a positive integer");
		}
	}
	execute();
};

PmergeMe::PmergeMe(PmergeMe const &rhs) {
	*this = rhs;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs) {
	if (this != &rhs) {
		this->_l = rhs._l;
		this->_v = rhs._v;
	}
	return *this;
}

PmergeMe::~PmergeMe(){};

template <typename T>
void PmergeMe::printContainer(T &container) {
	for (typename T::iterator it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void PmergeMe::insertionSort(T &container) {
    for (typename T::iterator it = container.begin(); it != container.end(); ++it) {
        typename T::value_type value = *it;
        typename T::iterator jt = it;
        if (jt == container.begin()) {
            continue;
        }
        typename T::iterator prev = jt;
        --prev;
        while (*prev > value) {
            *jt = *prev;
            --jt;
            --prev;
        }
        *jt = value;
    }
}

template <typename T>
void PmergeMe::merge(T &container, T const &left, T const &right) {
	typename T::const_iterator it = left.begin();
	typename T::const_iterator jt = right.begin();

	while (it != left.end() && jt != right.end()) {
		if (*it < *jt) {
			container.push_back(*it);
			it++;
		} else {
			container.push_back(*jt);
			jt++;
		}
	}

	container.insert(container.end(), it, left.end());
	container.insert(container.end(), jt, right.end());
}

template <typename T>
void PmergeMe::mergeInsertionSort(T &container) {
	int threshold = 42;
	int n = container.size();
	if (n <= threshold) {
		insertionSort(container);
	} else {
		typename T::iterator middle = container.begin();
		std::advance(middle, n / 2);

		T left(container.begin(), middle);
		T right(middle, container.end());

		mergeInsertionSort(left);
		mergeInsertionSort(right);

		container.clear();
		merge(container, left, right);
	}
}

void PmergeMe::execute(void) {
	std::cout << "Before: ";
	printContainer(this->_v);
	std::cout << "After: ";
	clock_t startTimeList = clock();
	mergeInsertionSort(this->_l);
	clock_t endTimeList = clock();
	clock_t startTimeVector = clock();
	mergeInsertionSort(this->_v);
	clock_t endTimeVector = clock();
	printContainer(this->_v);

	double timeList = static_cast<double>(endTimeList - startTimeList) / CLOCKS_PER_SEC * 1000000;
	double timeVector = static_cast<double>(endTimeVector - startTimeVector) / CLOCKS_PER_SEC * 1000000;

	std::cout << "Time to process a range of " << this->_v.size() << " elements with std::list : " << timeList << " us" << std::endl;
	std::cout << "Time to process a range of " << this->_v.size() << " elements with std::vector : " << timeVector << " us" << std::endl;
}
