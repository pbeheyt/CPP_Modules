/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:51:46 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/04 10:13:10 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_07_EX02_ARRAY_HPP_
#define MODULE_07_EX02_ARRAY_HPP_

#include <iostream>

template <typename T>
class Array {
	public:
		Array(void) : _size(0), _array(new T[0]) {}
		
		Array(unsigned int n) : _size(n), _array(new T[n]) {}
		
		Array(Array const &rhs) {
			this->_size = rhs._size;
			this->_array = new T[rhs._size];
			for (unsigned int i = 0; i < this->_size; i++) {
				this->_array[i] = rhs._array[i];
			}
		}
		
		Array &operator=(Array const &rhs) {
			if (this != &rhs) {
				delete[] this->_array;
				this->_size = rhs._size;
				this->_array = new T[rhs._size];
				for (unsigned int i = 0; i < this->_size; i++) {
					this->_array[i] = rhs._array[i];
				}
			}
			return *this;
		}
		
		~Array(void) {
			delete[] this->_array;
		}

		T &operator[](unsigned int idx) {
			if (idx >= this->_size) {
        		throw OutOfRangeException();
    		}
    		return this->_array[idx];
		}
		
		unsigned int size(void) const {
			return this->_size;
		}
		
		class OutOfRangeException : public std::exception {
			public:
				char const *what(void) const throw() {
					return "Element is out of range of array";	
				}
		};

	private:
		unsigned int	_size;
		T				*_array;		
};

#endif  // MODULE_07_EX02_ARRAY_HPP_