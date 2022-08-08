/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:11:16 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/08 00:03:24 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <ctime>
#include <iostream>
#include <vector>
#include <span>

int main(void)
{
	srand(time(NULL));

	std::cout << "\tEMPTY VECTOR:" << std::endl;
	std::vector<int> vec;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 0);
		std::cout << "it = " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "\tVector 50len with random 0 to 50" << std::endl;
	for (int i = 0; i < 50; i++)
		vec.push_back(rand() % 50 + 1);
	for (int i = 0; i < 50; i++)
		std::cout << "vec["<<i<<"] = " << vec[i] << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 42);
		std::cout << "it = " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "\tVec2 random:" << std::endl;
	std::vector<int> vec2;

	for (int i = 0; i < 5; i++)
		vec2.push_back(rand());
	for (int i = 0; i < 5; i++)
		std::cout << "vec2 = " << vec2[i] << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec2, rand());
		std::cout << "it = " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	return 0;
}