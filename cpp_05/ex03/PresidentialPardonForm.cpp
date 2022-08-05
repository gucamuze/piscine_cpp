/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 23:36:19 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 00:28:52 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", "default", 25, 5)
{
	std::cout << "Default empty PresidentialPardonForm constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: Form("PresidentialPardonForm", target, 25, 5)
{
		std::cout << "Full PresidentialPardonForm constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
	: Form("PresidentialPardonForm", "target", 25, 5)
{
	std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
	if (this != &rhs)
		this->setSignedStatus(rhs.getSignedStatus());
	return *this;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i)
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

void	PresidentialPardonForm::beExecuted(void) const
{
	std::cout << this->getTarget() << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/

/* ************************************************************************** */