/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:10:46 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/23 23:31:28 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_02_EX00_FIXED_HPP_
# define MODULE_02_EX00_FIXED_HPP_

# include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed& copy);
		Fixed	&operator=(const Fixed& rhs);
		~Fixed(void);


		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_value;
		static const int	_fractionalBits = 8;
};

#endif  // MODULE_02_EX00_FIXED_HPP_
