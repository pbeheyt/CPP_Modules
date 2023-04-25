/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 05:21:57 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/25 05:48:19 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_02_EX03_POINT_HPP_
#define MODULE_02_EX03_POINT_HPP_

#include "Fixed.cpp"

class Point {
	public:
		Point(void);
		Point(const float x, const float y);
		Point(Point const &rhs);
		Point	&operator=(Point const &rhs);
		~Point(void);
	
	private:
		Fixed const _x;
		Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif // MODULE_02_EX03_POINT_HPP_