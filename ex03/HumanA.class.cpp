/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:32:10 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/21 11:45:49 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
	: _weapon(&weapon), _name(name) {}

void	HumanA::attack( void )
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon !" << std::endl;
}