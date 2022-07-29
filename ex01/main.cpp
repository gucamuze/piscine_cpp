/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:32:51 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/20 15:11:36 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main( void )
{
	Zombie *	zombies;
	int			n = 10;
	
	zombies = zombieHorde(n, "Resi");
	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete[] zombies;
}