/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:23:42 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 00:25:09 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShruberryCreationForm::ShruberryCreationForm()
	: Form("ShruberryCreationForm", "default", 145, 137)
{
	std::cout << "Default empty ShruberryCreationForm constructor called" << std::endl;
}
ShruberryCreationForm::ShruberryCreationForm(const std::string target)
	: Form("ShruberryCreationForm", target, 145, 137)
{
		std::cout << "Full ShruberryCreationForm constructor called" << std::endl;
}
ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &src)
	: Form("ShruberryCreationForm", "target", 145, 137)
{
	std::cout << "Copy ShruberryCreationForm constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShruberryCreationForm::~ShruberryCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShruberryCreationForm &ShruberryCreationForm::operator=(ShruberryCreationForm const &rhs){
	if (this != &rhs)
		this->setSignedStatus(rhs.getSignedStatus());
	return *this;
}

std::ostream &operator<<(std::ostream &o, ShruberryCreationForm const &i)
{
	o << "\tForm name: " << i.getName() << std::endl
	  << "\tTarget: " << i.getTarget() << std::endl
	  << "\tForm is signed: " << i.getSignedStatus() << std::endl
	  << "\tForm required grade for signing: " << i.getReqSignGrade() << std::endl
	  << "\tForm required grade for executing: " << i.getReqExecGrade() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShruberryCreationForm::beExecuted(void) const
{
	std::fstream	fs_out;
	std::string		target;
	std::string		content;

	target += this->getTarget() + "_shruberry";
	fs_out.open(target.c_str(), std::fstream::out);
	if (fs_out.fail())
		throw ShruberryCreationForm::FileIOException(); // TODO => Exception
	content =	"        __ _.--..--._ _\n"
				"     .-' _/   _/\\_   \\_'-.\n"
				"    |__ /   _/\\__/\\_   \\__|\n"
				"       |___/\\_\\__/  \\___|\n"
				"              \\__/\n"
				"              \\__/\n"
				"               \\__/\n"
				"                \\__/\n"
				"             ____\\__/___\n"
				"       . - '             ' -.\n"
				"      /                      \\\n"
				"~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~\n"
				"  ~~~   ~~~~~   ~!~~   ~~ ~  ~ ~ ~\n\n";
	content += content += content;
	fs_out << content;
	fs_out.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/

const char *ShruberryCreationForm::FileIOException::what() const throw()
{
	return "I/O Error";
}

/* ************************************************************************** */