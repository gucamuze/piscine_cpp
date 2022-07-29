/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:25:24 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/27 05:03:39 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void Harl::worstUseOfSwitchEverThanks42( std::string level )
{
	std::string	complaint_level[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	
	size_t i = 0;
	for (; i < 4; i++)
		if (complaint_level[i].compare(level) == 0)
			break;
			
	switch (i)
	{
		case 0:
			this->_debug();
			this->_info();
			this->_warning();
			this->_error();
			break;
		case 1:
			this->_info();
			this->_warning();
			this->_error();
			break;
		case 2:
			this->_warning();
			this->_error();
			break;
		case 3:
			this->_error();
			break;
		default:
			this->_default();
			break;
	}
}

void Harl::_debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Give me some pineapple on my pizza. I love it !" << std::endl;
}

void Harl::_info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "What do you mean adding pineapple would cost me money?" << std::endl;
}

void Harl::_warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I've been a customer here for 42 years, I DESERVE pineapple on my pizza !!" << std::endl;
}

void Harl::_error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "I'm done talking to you, i want to speak to your manager !" << std::endl;
}

void Harl::_default( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}