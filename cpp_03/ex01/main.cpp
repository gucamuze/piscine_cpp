/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:29:08 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/01 18:39:59 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	Claptrap	rambo("Rambo");
	Scavtrap	default_scav;

	rambo.showStats();
	default_scav.showStats();
	default_scav.setName("Terminator");
	default_scav.showStats();

	Scavtrap	copy_scav(default_scav);
	Scavtrap	named_scav("Resi");

	default_scav.showStats();
	copy_scav.showStats();
	named_scav.showStats();

	copy_scav.attack(rambo.getName());
	rambo.takeDamage(copy_scav.getStat(ad));

	rambo.showStats();
	rambo.attack(copy_scav.getName());

	copy_scav.beRepaired(1);

	copy_scav.guardGate();
	copy_scav.guardGate();
	copy_scav.attack(named_scav.getName());
	named_scav.takeDamage(copy_scav.getStat(ad));
	copy_scav.attack(named_scav.getName());
	named_scav.takeDamage(copy_scav.getStat(ad));
	copy_scav.attack(named_scav.getName());
	named_scav.takeDamage(copy_scav.getStat(ad));
	copy_scav.attack(named_scav.getName());
	named_scav.takeDamage(copy_scav.getStat(ad));
	copy_scav.attack(named_scav.getName());
	named_scav.takeDamage(copy_scav.getStat(ad));
	named_scav.guardGate();

	default_scav.showStats();
	copy_scav.showStats();
	named_scav.showStats();

	return 0;
}