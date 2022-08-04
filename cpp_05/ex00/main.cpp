/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:47:07 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/04 02:18:27 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat camzee("Camzee", 151);
	}		
	catch (std::exception &e) {
		std::cerr << e.what() << ", can't construct object" << std::endl;
	}
	try {
		Bureaucrat camzee("Camzee", 0);
	}		
	catch (std::exception &e) {
		std::cerr << e.what() << ", can't construct object" << std::endl;
	}
	
	Bureaucrat resi("Resi", 150);
	Bureaucrat camzee("Camzee", 1);
	
	std::cout << resi << std::endl << camzee << std::endl;
	
	try {
		resi.downGrade();
	}		
	catch (std::exception &e) {
		std::cerr << e.what() << ", can't downgrade " << resi << std::endl;
	}
	try {
		camzee.upGrade();
	}		
	catch (std::exception &e) {
		std::cerr << e.what() << ", can't upgrade " << camzee << std::endl;
	}

	resi.upGrade();
	camzee.downGrade();
	
	std::cout << resi << "\t" << camzee << std::endl;
	
	return 0;
}