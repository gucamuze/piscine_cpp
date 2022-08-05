/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:06:16 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 00:21:01 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", "default", 72, 45)
{
	std::cout << "Default empty RobotomyRequestForm constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: Form("RobotomyRequestForm", target, 72, 45)
{
		std::cout << "Full RobotomyRequestForm constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs){
	if (this != &rhs)
		this->setSignedStatus(rhs.getSignedStatus());
	return *this;
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i)
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

void	RobotomyRequestForm::beExecuted(void) const
{
	std::cout << "**** RANDOM DRILLING NOISES *********" << std::endl;
	std::srand(std::time(0));
	int random = std::rand() % 2;
	if (random)
		std::cout << this->getName() << " has been succesfully robotomized !" << std::endl;
	else
		std::cout << "Robotomy fail for target " << this->getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/

/* ************************************************************************** */