/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:32:51 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/20 13:58:00 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main()
{
	std::cout << "Test for randomChump function:" << std::endl;
	randomChump("chumpy");
	
	std::cout << std::endl << "Test for newZombie function:" << std::endl;
	Zombie *	zombie = newZombie("newZombie");
	zombie->announce();
	delete zombie;
}