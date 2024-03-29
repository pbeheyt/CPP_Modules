/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:42:11 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/09/13 01:51:38 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(int ac, char **av)
	: _d(), _v() {
	for (int i = 1; i < ac; ++i) {
		if (!isStringAllDigits(av[i])) {
			throw std::runtime_error("Argument is not a positive number");
		}
		
 		long long nb = atoll(av[i]);
        if (nb > 0 && nb <= std::numeric_limits<int>::max()) {
            int intNb = static_cast<int>(nb);
            this->_d.push_back(intNb);
            this->_v.push_back(intNb);
        } else {
			throw std::runtime_error("Argument is not a positive integer");
		}
	}
	execute();
};

PmergeMe::PmergeMe(PmergeMe const &rhs) {
	*this = rhs;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs) {
	if (this != &rhs) {
		this->_d = rhs._d;
		this->_v = rhs._v;
	}
	return *this;
}

PmergeMe::~PmergeMe(void) {}

/* ************************************************************************** */

template <typename T>
void PmergeMe::insertionSort(T &container) {
    int size = container.size();
    if (size <= 1)
        return;

    for (int i = 1; i < size; ++i) {
        typename T::value_type value = container[i];
        int j = i;

        while (j > 0 && container[j - 1] > value) {
            container[j] = container[j - 1];
            --j;
        }

        container[j] = value;
    }
}


template <typename T>
void PmergeMe::mergeSort(T &container) {
	int n = container.size();
	if (n < 2) {
		return;
	}
	
	typename T::iterator middle = container.begin();
	std::advance(middle, n / 2);

	T left(container.begin(), middle);
	T right(middle, container.end());

	mergeSort(left);
	mergeSort(right);

	container.clear();
	merge(container, left, right);
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
	int threshold = 10;
	int n = container.size();
	if (n <= threshold) {
		insertionSort(container);
	} else {
		mergeSort(container);
	}
}

template <typename T>
void PmergeMe::printContainer(T const &container) {
	for (typename T::const_iterator it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

/* ************************************************************************** */

bool PmergeMe::isStringAllDigits(std::string const &str) {
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it)) {
            return false;
        }
    }
    return true;
}

void PmergeMe::execute(void) {
	std::cout << "Before: ";
	printContainer(this->_v);
	std::cout << "After: ";
	clock_t startTimeDeque = clock();
	mergeInsertionSort(this->_d);
	clock_t endTimeDeque = clock();
	clock_t startTimeVector = clock();
	mergeInsertionSort(this->_v);
	clock_t endTimeVector = clock();
	printContainer(this->_v);

	double timeDeque = static_cast<double>(endTimeDeque - startTimeDeque) / CLOCKS_PER_SEC * 1000000;
	double timeVector = static_cast<double>(endTimeVector - startTimeVector) / CLOCKS_PER_SEC * 1000000;

	std::cout << "Time to process a range of " << this->_d.size() << " elements with std::deque : " << timeDeque << " us" << std::endl;
	std::cout << "Time to process a range of " << this->_v.size() << " elements with std::vector : " << timeVector << " us" << std::endl;
}
