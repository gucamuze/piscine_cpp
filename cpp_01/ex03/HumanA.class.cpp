/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:32:10 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/31 16:12:47 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
	: _weapon(weapon), _name(name) {}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}