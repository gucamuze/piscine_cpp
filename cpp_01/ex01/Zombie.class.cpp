/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:33:32 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/20 14:20:28 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie( std::string input_name ) : _zombieName(input_name)
{
	std::cout << "Zombie " << this->_zombieName << " constructor called" << std::endl;
}

Zombie::Zombie( void )
{
	std::cout << "Unnamed Zombie constructor called" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->_zombieName << " destroyed !" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->_zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name )
{
	this->_zombieName = name;
}