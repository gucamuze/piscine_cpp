/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:40:18 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/20 13:54:25 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie *	newZombie = new Zombie(name);
	
	return (newZombie);
}