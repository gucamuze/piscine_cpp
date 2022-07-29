/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:59:46 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/27 05:02:51 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int main( int ac, char **av )
{
	Harl harl;

	if (ac == 2)
		harl.worstUseOfSwitchEverThanks42(av[1]);
	else
		std::cout << "Argument needed !" << std::endl;
		
	return 0;
}