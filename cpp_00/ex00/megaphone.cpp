/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:40:42 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/29 02:26:01 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		std::string	str;
		for (int i = 1; i < ac; i++)
			str += av[i];
		for (size_t n = 0; str[n]; n++)
			str[n] = std::toupper(str[n]);
		std::cout << str << std::endl;
	}
	return 0;
}