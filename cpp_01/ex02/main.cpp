/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:13:48 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/31 16:02:26 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string 	*stringPTR = &brain;
	std::string		&stringREF = brain;

	std::cout << "Memory address of brain variable : " << &brain << std::endl;
	std::cout << "Memory address of stringPTR : " << &stringPTR << std::endl;
	std::cout << "Memory address of stringREF : " << &stringREF << std::endl;
	std::cout << "Value of brain variable : " << brain << std::endl;
	std::cout << "Value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF : " << stringREF << std::endl;
}