/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:42:11 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/07 04:14:20 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {};

PmergeMe::PmergeMe(int ac, char **av) {
	for (int i = 1; i < ac; ++i) {
		int nb = atoi(av[i]);
		
		if (nb > 0) {
			this->_l.push_back(nb);
			this->_v.push_back(nb);
		} else {
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

PmergeMe::~PmergeMe() {};

template <typename T>
void printContainer(T &container) {
	for (typename T:iterator it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void insertionSort(T &container) {
    for (typename T::iterator it = container.begin(); it != container.end(); ++it) {
        typename T::value_type value = *it;
        typename T::iterator jt = it;
        if (jt == container.begin()) {
			continue;
		}	
		while (*(jt - 1) > value) {
			*jt = *(jt - 1);
			--jt;
		}
		*jt = value;
	}
}

template <typename T>
void merge(T &container, T const &left, T const &right) {
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
void mergeInsertionSort(T &container) {
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
	
}
