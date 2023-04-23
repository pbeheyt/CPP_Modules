/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:10:46 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/23 04:29:15 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_02_EX01_FIXED_H
# define MODULE_02_EX01_FIXED_H

# include <iostream>

class Fixed {
	public:
    Fixed(void);
	Fixed(int const n);
	Fixed(float const f);
    Fixed(Fixed const &copy);
    Fixed	&operator=(Fixed const &rhs);
    ~Fixed(void);

    int		getRawBits(void) const;
    void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:
    int					_value;
    static const int	_fractionalBits = 8;
};

std::ostream	&operator<<(std::ostream &ofs, Fixed const &rhs);

#endif  // MODULE_02_EX01_FIXED_H
