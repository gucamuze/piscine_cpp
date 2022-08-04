/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 05:03:10 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/04 06:26:15 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() :
	_name(""),
	_is_signed(false),
	_req_sign_grade(150),
	_req_exec_grade(150)
{
	std::cout << "Default empty form constructor called" << std::endl;
}
Form::Form(const std::string name,
		   const unsigned int req_sign_grade,
		   const unsigned int req_exec_grade) :
	 _name(name),
	 _is_signed(false),
	 _req_sign_grade(req_sign_grade),
	 _req_exec_grade(req_exec_grade)
{
	if (req_sign_grade > 150 || req_exec_grade > 150)
		throw Form::GradeTooHighException();
	else if (req_sign_grade < 1 || req_sign_grade < 1)
		throw Form::GradeTooLowException();
	else
		std::cout << "Full form constructor called" << std::endl;
}
Form::Form(const Form &src) :
	_name(src._name),
	_is_signed(src._is_signed),
	_req_sign_grade(src._req_sign_grade),
	_req_exec_grade(src._req_exec_grade)
{
	std::cout << "Copy Form constructor called" << std::endl;
	*this = src;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Default Form constructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		this->_is_signed = rhs.getSignedStatus();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << "\tForm name: " << i.getName() << std::endl
		<< "\tForm is signed: " << i.getSignedStatus() << std::endl
		<< "\tForm required grade for signing: " << i.getReqSignGrade() << std::endl
		<< "\tForm required grade for executing: " << i.getReqExecGrade() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::setSignedStatus(const bool is_signed)
{
	this->_is_signed = is_signed;
}

// TODO: Exception throwing
void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_req_sign_grade)
		this->setSignedStatus(true);
	else
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	&Form::getName() const
{
	return this->_name;
}

const bool	&Form::getSignedStatus() const
{
	return const_cast<bool&>(this->_is_signed);
}

const unsigned int	&Form::getReqSignGrade() const
{
	return const_cast<unsigned int&>(this->_req_sign_grade);
}

const unsigned int	&Form::getReqExecGrade() const
{
	return const_cast<unsigned int&>(this->_req_exec_grade);
}

/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/

const char *Form::GradeTooHighException::what() const throw()
{
	return "Error: grade too high";
}
const char *Form::GradeTooLowException::what() const throw()
{
	return "Error: grade too low";
}

/* ************************************************************************** */