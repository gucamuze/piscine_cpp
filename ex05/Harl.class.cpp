/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:25:24 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/27 04:08:10 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

Harl::Harl( void ) 
{
	this->_func_array[0] = this->_debug;
	this->_func_array[1] = this->_info;
	this->_func_array[2] = this->_warning;
	this->_func_array[3] = this->_error;
}

Harl::~Harl( void ) {}

void Harl::complain( std::string level )
{
	std::string	complaint_level[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	
	for (size_t i = 0; i < 4; i++)
		if (complaint_level[i].compare(level) == 0)
			return this->_func_array[i]();
	
	std::cout << "Invalid complaint !" << std::endl;
}

void Harl::_debug( void )
{
	std::cout << "Give me some pineapple on my pizza. I love it !" << std::endl;
}

void Harl::_info( void )
{
	std::cout << "What do you mean adding pineapple would cost me money?" << std::endl;
}

void Harl::_warning( void )
{
	std::cout << "I've been a customer here for 42 years, I DESERVE pineapple on my pizza !!" << std::endl;
}

void Harl::_error( void )
{
	std::cout << "I'm done talking to you, i want to speak to your manager !" << std::endl;
}