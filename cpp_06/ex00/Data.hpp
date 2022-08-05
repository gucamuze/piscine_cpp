/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:20:07 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 19:51:31 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include <exception>

enum	convert_type {CHAR, INT, FLOAT, DOUBLE, INF, NAN};

class Data
{
	private:
		const std::string	_user_input;

		void	_convertToCharFromStr(void);
		void	_display(void);

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

// std::ostream &operator<<(std::ostream &o, Data const &i);

#endif