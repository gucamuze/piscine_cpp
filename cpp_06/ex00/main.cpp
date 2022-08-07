/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:19:36 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 03:39:51 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Data	data(av[1]);
		try {
			data.parseAndDisplay();
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	else
		std::cout << "Invalid number of arguments, expected 1, got "
			<< ac - 1 << " instead\n";
	return 0;
}