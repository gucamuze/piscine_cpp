/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:48:09 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/02 19:07:36 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int nbr) : _fixed_point_val(nbr << _fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float nbr) : _fixed_point_val(roundf(nbr * (1 << _fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point_val = copy.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const { return this->_fixed_point_val; }
void Fixed::setRawBits(int const raw) { this->_fixed_point_val = raw; }

float Fixed::toFloat(void) const
{
	return static_cast<float>(_fixed_point_val) / (1 << _fractional_bits);
}

int Fixed::toInt(void) const
{
	return static_cast<int>(roundf(static_cast<float>(_fixed_point_val) / (1 << _fractional_bits)));
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &obj)
{
	ostream << obj.toFloat();
	return ostream;
}

// Arithmetic operators //
bool Fixed::operator>(Fixed const &obj) const
{
	return this->_fixed_point_val > obj._fixed_point_val;
}

bool Fixed::operator<(Fixed const &obj) const
{
	return this->_fixed_point_val < obj._fixed_point_val;
}

bool Fixed::operator>=(Fixed const &obj) const
{
	return this->_fixed_point_val >= obj._fixed_point_val;
}

bool Fixed::operator<=(Fixed const &obj) const
{
	return this->_fixed_point_val <= obj._fixed_point_val;
}

bool Fixed::operator==(Fixed const &obj) const
{
	return this->_fixed_point_val == obj._fixed_point_val;
}

bool Fixed::operator!=(Fixed const &obj) const
{
	return this->_fixed_point_val != obj._fixed_point_val;
}

Fixed Fixed::operator+(Fixed const &obj) const
{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(Fixed const &obj) const
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(Fixed const &obj) const
{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(Fixed const &obj) const
{
	return Fixed(this->toFloat() / obj.toFloat());
}
//

// Increment operators //
Fixed &Fixed::operator++(void)
{
	this->_fixed_point_val++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	this->_fixed_point_val++;
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	this->_fixed_point_val--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;

	tmp = *this;
	this->_fixed_point_val--;
	return tmp;
}
//

// Comparaison operators //
Fixed &Fixed::min(Fixed &fixed_number1, Fixed &fixed_number2)
{
	return fixed_number1 < fixed_number2 ? fixed_number1 : fixed_number2;
}

const Fixed &Fixed::min(Fixed const &fixed_number1, Fixed const &fixed_number2)
{
	return fixed_number1 < fixed_number2 ? fixed_number1 : fixed_number2;
}

Fixed &Fixed::max(Fixed &fixed_number1, Fixed &fixed_number2)
{
	return fixed_number1 > fixed_number2 ? fixed_number1 : fixed_number2;
}

const Fixed &Fixed::max(Fixed const &fixed_number1, Fixed const &fixed_number2)
{
	return fixed_number1 > fixed_number2 ? fixed_number1 : fixed_number2;
}
//