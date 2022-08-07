/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:20:07 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 04:01:02 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

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

class Data
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
		Data();
		Data(std::string user_input);
		Data(Data const &src);
		~Data();

		Data &operator=(Data const &rhs);

		std::string const &getUserInput() const;

		void	parseAndDisplay(void);
		
		class CharConversionException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class OverflowException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class InvalidInputException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Data const &i);
unsigned int	getOverflowMask(std::string str);

#endif