/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:53:00 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 04:44:57 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data() : _user_input("")
{
	throw Data::InvalidInputException();
}
Data::Data(std::string user_input) : _user_input(user_input)
{
	this->_convert_functions[0] = this->_convertToChar;
	this->_convert_functions[1] = this->_convertToInt;
	this->_convert_functions[2] = this->_convertToFloat;
	this->_convert_functions[3] = this->_convertToDouble;
}
Data::Data( const Data & src ) : _user_input(src._user_input) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data &				Data::operator=( Data const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

unsigned int	Data::_detectType(void)
{
	std::string s = this->getUserInput();
	// Check easy identifiable stuff
	// is a char
	if (s.length() == 1 && !std::isdigit(s.at(0)))
		return CHAR;
	// is inf type
	if (s.compare("nanf") == 0 || s.compare("inff") == 0
			|| s.compare("+inff") == 0 || s.compare("-inff") == 0)
		return FLOAT;
	// is nan type
	if (s.compare("inf") == 0 || s.compare("+inf") == 0 
			|| s.compare("-inf") == 0 || s.compare("nan") == 0)
		return DOUBLE;
	
	// Check each char to check
	int f_flag = 0;
	int dot_flag = 0;
	int sign_flag = 0;
	for (size_t i = 0; i < s.length(); i++)
	{
		unsigned char c = s.at(i);
		if (c == '+' || c == '-')
		{
			if (i == 0)
				sign_flag++;
			else throw Data::InvalidInputException();
		}
		else if (c == 'f' || c == 'F')
			f_flag++;
		else if (c == '.')
			dot_flag++;
		else if (!std::isdigit(c))
			throw Data::InvalidInputException();
	}
	if (f_flag > 1 || dot_flag > 1)
		throw Data::InvalidInputException();
	if (f_flag)
		return FLOAT;
	else if (dot_flag)
		return DOUBLE;
	else
		return INT;
}

void	Data::_convertToChar(std::string str, unsigned int mask)
{
	char c = str.at(0);
	
	(void)mask;
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed
		<< static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed
		<< static_cast<double>(c) << std::endl;
}

void	Data::_convertToInt(std::string str, unsigned int mask)
{
	double i = std::strtod(str.c_str(), NULL);
	
	if (mask & CHAR_OVERFLOW)
		std::cout << "char: Impossible" << std::endl;
	else if (std::isprint(static_cast<unsigned char>(i)))
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char: Not displayable" << std::endl;

	if (mask & INT_OVERFLOW)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;

	if (mask & FLOAT_OVERFLOW)
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << std::setprecision(1) << std::fixed
				  << static_cast<float>(i) << "f" << std::endl;

	if ((mask & DOUBLE_OVERFLOW))
		std::cout << "double: Impossible" << std::endl;
	else
		std::cout << "double: " << std::fixed
				  << static_cast<double>(i) << std::endl;
}

void	Data::_convertToFloat(std::string str, unsigned int mask)
{
	float f = std::strtod(str.c_str(), NULL);
	int p = str.length() - str.find_first_of('.') - 2;
	
	if (isnan(f) || mask & CHAR_OVERFLOW)
		std::cout << "char: Impossible" << std::endl;
	else if (std::isprint(static_cast<unsigned char>(f)))
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "char: Not displayable" << std::endl;

	if (isnan(f) || mask & INT_OVERFLOW)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;

	if (!isinf(f) && (mask & FLOAT_OVERFLOW))
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << std::setprecision(p?p:1) << std::fixed
				  << static_cast<float>(f) << "f" << std::endl;

	if (!isinf(f) && (mask & DOUBLE_OVERFLOW))
		std::cout << "double: Impossible" << std::endl;
	else
		std::cout << "double: " << std::setprecision(p?p:1) << std::fixed
				  << static_cast<double>(f) << std::endl;
}

void	Data::_convertToDouble(std::string str, unsigned int mask)
{
	double d = std::strtod(str.c_str(), NULL);
	int p = str.length() - str.find_first_of('.') - 1;

	if (isnan(d) || mask & CHAR_OVERFLOW)
		std::cout << "char: Impossible" << std::endl;
	else if (std::isprint(static_cast<unsigned char>(d)))
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char: Not displayable" << std::endl;

	if (isnan(d) || (d < INT_MIN || d > INT_MAX))
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	if (!isinf(d) && (mask & FLOAT_OVERFLOW))
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << std::setprecision(p?p:1) << std::fixed
				  << static_cast<float>(d) << "f" << std::endl;

	if (!isinf(d) && (mask & DOUBLE_OVERFLOW))
		std::cout << "double: Impossible" << std::endl;
	else
		std::cout << "double: " << std::setprecision(p?p:1) << std::fixed
				  << static_cast<double>(d) << std::endl;
}

void	Data::parseAndDisplay(void)
{
	// Parse and detect type
	unsigned int	type = this->_detectType();
	unsigned int	mask = getOverflowMask(this->_user_input);
	this->_convert_functions[type](this->_user_input, mask);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Data::getUserInput() const
{
	return this->_user_input;
}

/*
** --------------------------------- EXCEPTIONS -------------------------------
*/

const char *Data::CharConversionException::what() const throw()
{
	return "Character not displayable";
}
const char *Data::OverflowException::what() const throw()
{
	return "Number overflow";
}
const char *Data::InvalidInputException::what() const throw()
{
	return "Invalid input";
}

/* ************************************************************************** */

unsigned int	getOverflowMask(std::string str)
{
	std::stringstream	ss(str);
	long double			ld;
	unsigned int				mask = 0;
	
	ss >> ld;
	std::cout << "long double: " << ld << std::endl;
	if (ld > CHAR_MAX || ld < CHAR_MIN)
		mask |= CHAR_OVERFLOW;
	std::cout << "mask: " << mask << std::endl;
	if (ld > INT_MAX || ld < INT_MIN)
		mask |= INT_OVERFLOW;
	std::cout << "mask: " << mask << std::endl;
	if (ld > FLT_MAX || ld < -FLT_MAX)
		mask |= FLOAT_OVERFLOW;
	std::cout << "mask: " << mask << std::endl;
	if (ld > DBL_MAX || ld < -DBL_MAX)
		mask |= DOUBLE_OVERFLOW;
	std::cout << "mask: " << mask << std::endl;

	return mask;
}