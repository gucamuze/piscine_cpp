/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:47:07 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 02:06:45 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"

void	make_tests(Bureaucrat &Bureaucrat)
{
	PresidentialPardonForm	p_form("Heisenberg");
	Bureaucrat.signForm(p_form);
	Bureaucrat.executeForm(p_form);

	RobotomyRequestForm r_form("Donald Trump");
	Bureaucrat.signForm(r_form);
	Bureaucrat.executeForm(r_form);

	ShruberryCreationForm s_form("test");
	Bureaucrat.signForm(s_form);
	Bureaucrat.executeForm(s_form);
}

int main(void)
{
	Intern someRandomIntern;
	Form *rrf;
	Bureaucrat	boss("Boss", 1);
	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
		rrf = someRandomIntern.makeForm("shruberry creation", "Wohnung");
		std::cout << *rrf << std::endl;
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Donald Trump");
		std::cout << *rrf << std::endl;
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cant create form: " <<e.what() << '\n';
	}
	return 0;	
}