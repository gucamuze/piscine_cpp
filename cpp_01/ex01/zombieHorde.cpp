/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:03:56 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/31 16:02:01 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie *	zombieHorde( int N, std::string name )
{
	Zombie *	zombies = NULL;
	
	if (N >= 0)
	{
		zombies = new Zombie[N];
		for (int i = 0; i < N; i++)
			zombies[i].setName(name);
	}
	
	return zombies;
}