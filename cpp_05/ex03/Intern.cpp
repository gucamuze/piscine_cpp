/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:31:44 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 02:04:05 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	this->_func_array[0] = this->createPPForm;
	this->_func_array[1] = this->createRRForm;
	this->_func_array[2] = this->createSCForm;
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	(void)o;(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form	*Intern::createPPForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form	*Intern::createSCForm(std::string target)
{
	return new ShruberryCreationForm(target);
}

Form	*Intern::createRRForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeForm(std::string formName, std::string formTarget) const
{
	std::string	available_forms[3] = {
		"robotomy request",
		"shruberry creation",
		"presidential pardon"
	};
	
	size_t i;
	for (i = 0; i < 3; i++)
		if (formName.compare(available_forms[i]) == 0)
			break;
			
	if (i == 3)
		throw Intern::UnknownFormException();
	
	return this->_func_array[i](formTarget);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const char *Intern::UnknownFormException::what() const throw()
{
	return "Unknown form";
}

/* ************************************************************************** */