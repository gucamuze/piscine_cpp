/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:37:45 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 01:04:39 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) :
	_name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		std::cout << "Constructor call for bureaucrat " << name << std::endl;
	// this->_grade = grade;
}
Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor call for Bureaucrat" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs ) {
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	 Bureaucrat::upGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else {
		std::cout << this->_name << " upgrades, going from " << this->_grade
			<< " to " << this->_grade - 1 << std::endl;
		this->_grade--;
	}
}

void	Bureaucrat::downGrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else {
		std::cout << this->_name << " downgrades, going from " << this->_grade
			<< " to " << this->_grade + 1 << std::endl;
		this->_grade++;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	&Bureaucrat::getName(void) const
{
	return this->_name;
}
unsigned int const	&Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/
const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: grade too high";
}
const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: grade too low";
}

/* ************************************************************************** */