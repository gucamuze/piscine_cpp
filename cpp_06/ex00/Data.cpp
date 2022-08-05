/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:53:00 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 19:53:47 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data() : _user_input("") {}
Data::Data(std::string user_input) : _user_input(user_input) {}
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

// std::ostream &			operator<<( std::ostream & o, Data const & i )
// {
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Data::_convertToCharFromStr(void)
{
	std::cout << "char given" << std::endl;
	unsigned char c = static_cast<unsigned char>(this->_user_input[0]);
	if (!std::isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}


void	Data::parseAndDisplay(void)
{
	std::string const	&str = this->_user_input;
	std::cout << "input: " << str << ": ";
	if (str.find_first_of("0123456789") == std::string::npos) {
		if (str.length() == 1)
			this->_convertToCharFromStr();
		else if (str.find("inf") != std::string::npos)
			std::cout << "inf given" << std::endl;
		else if (str.find("nan") != std::string::npos)
			std::cout << "nan given" << std::endl;
		else
			throw Data::InvalidInputException();	
	}
	else {
		if (str.find_first_of(".f") != std::string::npos)
			std::cout << "float given" << std::endl;
		else if (str.find_first_of("f") != std::string::npos)
			std::cout << "double given" << std::endl;
		else if (str.find_first_not_of("0123456789") == std::string::npos)
			std::cout << "int given" << std::endl;
		else
			throw Data::InvalidInputException();
	}
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