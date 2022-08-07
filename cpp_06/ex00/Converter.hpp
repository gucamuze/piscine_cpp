/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:20:07 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 21:16:26 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <limits>
#include <cfloat>
#include <math.h>

enum	convert_type {CHAR, INT, FLOAT, DOUBLE};

#define CHAR_OVERFLOW 1 // 0001
#define INT_OVERFLOW 2 // 0010
#define FLOAT_OVERFLOW 4 // 0100
#define DOUBLE_OVERFLOW 8 // 1000

class Converter
{
	private:
		const std::string	_user_input;
		void				(*_convert_functions[4])(std::string, unsigned int);

		unsigned int		_detectType(void);
		void				_detectOverflows(void);
		
		static void			_convertToChar(std::string str, unsigned int mask);
		static void			_convertToInt(std::string str, unsigned int mask);
		static void			_convertToFloat(std::string str, unsigned int mask);
		static void			_convertToDouble(std::string str, unsigned int mask);

	public:
		Converter();
		Converter(std::string user_input);
		Converter(Converter const &src);
		~Converter();

		Converter &operator=(Converter const &rhs);

		std::string const &getUserInput() const;

		void	parseAndDisplay(void);
		
		class InvalidInputException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Converter const &i);
unsigned int	getOverflowMask(std::string str);

#endif