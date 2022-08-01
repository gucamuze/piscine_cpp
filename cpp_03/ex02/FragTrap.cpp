/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:48:03 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/01 19:23:12 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

Fragtrap::Fragtrap( void )
{
	this->setName("DefaultScav");
	this->setStat(hp, 100);
	this->setStat(ep, 100);
	this->setStat(ad, 30);
	std::cout << "Default Fragtrap created" << std::endl;
}
Fragtrap::Fragtrap( std::string name )
{
	this->setName(name);
	this->setStat(hp, 100);
	this->setStat(ep, 100);
	this->setStat(ad, 30);
	std::cout << "Fragtrap " << name << " created" << std::endl;
}
Fragtrap::Fragtrap( const Fragtrap &Fragtrap )
{
	std::cout << "Fragtrap copy constructor called" << std::endl;
	*this = Fragtrap;
}
Fragtrap::~Fragtrap( void )
{
	std::cout << "Fragtrap " << this->getName() << " destroyed" << std::endl;
}
Fragtrap &Fragtrap::operator=(const Fragtrap &Fragtrap)
{
	std::cout << "Fragtrap copy assignement operator called" << std::endl;
	this->setName(Fragtrap.getName());
	this->setStat(hp, Fragtrap.getStat(hp));
	this->setStat(ep, Fragtrap.getStat(ep));
	this->setStat(ad, Fragtrap.getStat(ad));
	return *this;
}

void	Fragtrap::attack( const std::string &target )
{
	if (this->getStat(ep) > 0 && this->getStat(hp) > 0) {
		std::cout << "Fragtrap " << this->getName() << " attacks " << target
			<< " for " << this->getStat(ad) << "dmg" << std::endl; 
		this->setStat(ep, this->getStat(ep) - 1);
	} else {
		std::cout << "Attack fail for Fragtrap " << this->getName() << std::endl;
	}
}

void	Fragtrap::highFiveGuys( void )
{
	std::cout << "HI FIVE MOFOOOOOOS !" << std::endl;
}