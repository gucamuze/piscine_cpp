/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:09:07 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/03 07:11:56 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(std::string type)
{
	this->setType(type);
	std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound(void) const
{
	std::cout << "*unknown animal sounds*" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void Animal::setType(std::string const newType)
{
	this->_type = newType;
}
std::string &Animal::getType(void) const
{
	return const_cast<std::string&>(this->_type);
}
/* ************************************************************************** */