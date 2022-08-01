/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:29:08 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/01 19:21:47 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	Claptrap	clapy("Clapinou");
	Scavtrap	scavy("Scavinou");
	Fragtrap	fragy("Fraginou");

	clapy.showStats();
	scavy.showStats();
	fragy.showStats();

	scavy.guardGate();
	clapy.attack(fragy.getName());
	fragy.attack(clapy.getName());
	clapy.takeDamage(fragy.getStat(ad));
	clapy.beRepaired(10);
	fragy.highFiveGuys();
	scavy.attack(fragy.getName());
	fragy.takeDamage(scavy.getStat(ad));
	fragy.attack(scavy.getName());
	scavy.takeDamage(fragy.getStat(ad));
	fragy.attack(scavy.getName());
	scavy.takeDamage(fragy.getStat(ad));
	fragy.attack(scavy.getName());
	scavy.takeDamage(fragy.getStat(ad));
	fragy.attack(scavy.getName());
	scavy.takeDamage(fragy.getStat(ad));
	scavy.guardGate();

	clapy.showStats();
	scavy.showStats();
	fragy.showStats();

	return 0;
}