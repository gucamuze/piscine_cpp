/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:47:07 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 01:29:03 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
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
	{
		try {
			Bureaucrat	bureaucrat1("GradeTooLowBureaucrat", 420);
			Bureaucrat	bureaucrat2("GradeTooHighBureaucrat", 0);
			Bureaucrat	bureaucrat3("Resi", 1);
			bureaucrat3.upGrade();
			Bureaucrat	bureaucrat4("Camzee", 150);
			bureaucrat4.downGrade();
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "Press any key to continue to valid tests..." << std::endl;
	std::getchar();
	{
		Bureaucrat	bureaucrat("Camzee", 1);
		make_tests(bureaucrat);
	}
	std::cout << "Press any key to continue to error testing 1..." << std::endl;
	std::getchar();
	{
		Bureaucrat	bureaucrat("UnskilledBureaucrat", 150);
		make_tests(bureaucrat);
	}	
	std::cout << "Press any key to continue to error testing 2..." << std::endl;
	std::getchar();
	{
		Bureaucrat	bureaucrat("UnskilledBureaucrat", 72);
		make_tests(bureaucrat);
	}
	return 0;
}