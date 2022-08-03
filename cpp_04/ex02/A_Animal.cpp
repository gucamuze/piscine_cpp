/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:09:07 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/03 07:11:56 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

A_Animal::A_Animal()
{
	std::cout << "A_Animal default constructor called" << std::endl;
}
A_Animal::A_Animal(std::string type)
{
	this->setType(type);
	std::cout << "A_Animal default constructor called" << std::endl;
}
A_Animal::A_Animal(const A_Animal &src)
{
	std::cout << "A_Animal copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

A_Animal::~A_Animal()
{
	std::cout << "A_Animal destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

A_Animal &A_Animal::operator=(A_Animal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void A_Animal::makeSound(void) const
{
	std::cout << "*unknown A_Animal sounds*" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void A_Animal::setType(std::string const newType)
{
	this->_type = newType;
}
std::string &A_Animal::getType(void) const
{
	return const_cast<std::string&>(this->_type);
}
/* ************************************************************************** */