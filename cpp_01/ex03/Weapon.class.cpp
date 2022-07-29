/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:32:24 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/20 15:46:58 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon( std::string weaponType) : _type(weaponType)
{
	std::cout << "New weapon " << weaponType << " created !" << std::endl; 
}

void Weapon::setType( std::string weaponType )
{
	this->_type = weaponType;
}

std::string const&	Weapon::getType( void )
{
	return ( const_cast<std::string&>(this->_type) );
}