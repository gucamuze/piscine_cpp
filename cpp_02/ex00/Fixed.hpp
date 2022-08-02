/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:46:13 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/02 17:48:27 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixed_point_val;
		static const int	_fractional_bits = 8;

	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif