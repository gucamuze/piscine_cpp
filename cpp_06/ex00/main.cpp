/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:19:36 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 21:17:42 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Converter	converter(av[1]);
		try { converter.parseAndDisplay(); }
		catch (std::exception &e) { std::cerr << "Error: " << e.what() << std::endl;}
	}
	else
		std::cout << "Invalid number of arguments, expected 1, got "
			<< ac - 1 << " instead\n";
	return 0;
}