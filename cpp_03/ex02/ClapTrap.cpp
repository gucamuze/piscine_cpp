/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:25:10 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/01 19:04:25 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap( void ) : 
	_name("defaultClap"), _hp(10), _ep(10), _ad(0)
{
	std::cout << "Default Claptrap created" << std::endl;
}
Claptrap::Claptrap( std::string name ) : 
	_name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "Claptrap " << name << " created" << std::endl;
}
Claptrap::Claptrap( const Claptrap &claptrap )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = claptrap;
}
Claptrap::~Claptrap( void )
{
	std::cout << "Claptrap " << this->_name << " destroyed" << std::endl;
}
Claptrap &Claptrap::operator=(const Claptrap &claptrap)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_name = claptrap._name;
	this->_hp = claptrap._hp;
	this->_ep = claptrap._ep;
	this->_ad = claptrap._ad;
	return *this;
}

void	Claptrap::attack( const std::string &target )
{
	if (this->_ep > 0 && this->_hp > 0) {
		std::cout << "Claptrap " << this->_name << " attacks " << target
			<< " for " << this->_ad << "dmg" << std::endl; 
		this->_ep--;
	} else {
		std::cout << "Attack fail for Claptrap " << this->_name << std::endl;
	}
}

void	Claptrap::takeDamage( unsigned int amount )
{
	if (this->_hp > 0) {
		if (amount > this->_hp)
			this->_hp = 0;
		else
			this->_hp -= amount;
		std::cout << this->_name << " takes " << amount
			<< " points of damage, going down to " << this->_hp << std::endl;
	} else {
		std::cout << this->_name << " is already at 0hp" << std::endl;
	}		
}

void	Claptrap::beRepaired( unsigned int amount )
{
	if (this->_ep > 0 && this->_hp > 0) {
		std::cout << this->_name << " repairs for " << amount
			<< "hp" << std::endl;
		this->_hp += amount;
		this->_ep--;
	} else {
		std::cout << "Repair fail for Claptrap " << this->_name << std::endl;
	}
}

void	Claptrap::showStats( void )
{
	std::cout << "NAME: " << this->_name << std::endl
		<< "HP: " << this->_hp << std::endl
		<< "EP: " << this->_ep << std::endl
		<< "AD: " << this->_ad << std::endl;
}

void	Claptrap::setName( std::string name )
{
	this->_name = name;
}
void	Claptrap::setStat( unsigned int stat, unsigned int value )
{
	switch (stat)
	{
		case 0:
			this->_hp = value;
			break;
		case 1:
			this->_ep = value;
			break;
		case 2:
			this->_ad = value;
			break;
	}
}

std::string	&Claptrap::getName( void ) const
{
	return const_cast<std::string&>(this->_name);
}
unsigned int &Claptrap::getStat( unsigned int stat ) const
{
	switch (stat)
	{
		case 0:
			return const_cast<unsigned int&>(this->_hp);
		case 1:
			return const_cast<unsigned int&>(this->_ep);
	}
	return const_cast<unsigned int&>(this->_ad);
}
