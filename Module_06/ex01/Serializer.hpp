/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:36:21 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/27 11:05:54 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_06_EX01_SERIALIZATION_HPP_
#define MODULE_06_EX01_SERIALIZATION_HPP_

#include <iostream>
#include <stdint.h>

struct Data {
	int			nb;
	std::string raw;
};

class Serializer {
	public:
		Serializer(void);
		Serializer(Serializer const &rhs);
		Serializer &operator=(Serializer const &rhs);
		~Serializer(void);

		uintptr_t	serialize(Data *ptr);
		Data*		deserialize(uintptr_t raw);

};

#endif  // MODULE_06_EX01_SERIALIZATION_HPP_