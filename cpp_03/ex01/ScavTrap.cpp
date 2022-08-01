/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:48:03 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/01 19:00:54 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

Scavtrap::Scavtrap( void ) : gateKeeping(false)
{
	this->setName("DefaultScav");
	this->setStat(hp, 100);
	this->setStat(ep, 50);
	this->setStat(ad, 20);
	std::cout << "Default Scavtrap created" << std::endl;
}
Scavtrap::Scavtrap( std::string name ) : gateKeeping(false)
{
	this->setName(name);
	this->setStat(hp, 100);
	this->setStat(ep, 50);
	this->setStat(ad, 20);
	std::cout << "Scavtrap " << name << " created" << std::endl;
}
Scavtrap::Scavtrap( const Scavtrap &scavtrap ) : gateKeeping(false)
{
	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = scavtrap;
}
Scavtrap::~Scavtrap( void )
{
	std::cout << "Scavtrap " << this->getName() << " destroyed" << std::endl;
}
Scavtrap &Scavtrap::operator=(const Scavtrap &scavtrap)
{
	std::cout << "Scavtrap copy assignement operator called" << std::endl;
	this->setName(scavtrap.getName());
	this->setStat(hp, scavtrap.getStat(hp));
	this->setStat(ep, scavtrap.getStat(ep));
	this->setStat(ad, scavtrap.getStat(ad));
	return *this;
}

void	Scavtrap::attack( const std::string &target )
{
	if (this->getStat(ep) > 0 && this->getStat(hp) > 0) {
		std::cout << "Scavtrap " << this->getName() << " attacks " << target
			<< " for " << this->getStat(ad) << "dmg" << std::endl; 
		this->setStat(ep, this->getStat(ep) - 1);
	} else {
		std::cout << "Attack fail for Scavtrap " << this->getName() << std::endl;
	}
}

void	Scavtrap::guardGate( void )
{
	if (this->getStat(hp) > 0) {
		if (this->gateKeeping == false) {
			std::cout << this->getName() << " is now in gatekeeper mode" << std::endl;
			this->gateKeeping = true;
		} else {
			std::cout << this->getName() << " is already in gatekeeper mode" << std::endl;
		}	
	} else {
		std::cout << "Gatekeeping mode fail for " << this->getName() 
			<< ": no hp !" << std::endl;
	}
}