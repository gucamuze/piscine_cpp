/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:47:07 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/04 06:23:10 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
// #include "Bureaucrat.hpp"

int main(void)
{
	Form myForm("myForm", 100, 69);
	std::cout << myForm << std::endl;
	
	Form copyForm(myForm);
	std::cout << copyForm << std::endl;
	
	try
	{
		Form myForm2("myForm2", 0, 12);
		std::cout << myForm2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Form myForm2("myForm2", 420, 12);
		std::cout << myForm2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Bureaucrat camzee("Camzee", 42);
	Bureaucrat resi("Resi", 123);
	std::cout << camzee << '\t' << resi << std::endl;

	try
	{
		resi.signForm(myForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return 0;
}