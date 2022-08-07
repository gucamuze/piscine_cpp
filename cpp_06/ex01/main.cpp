/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 04:59:23 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 05:11:05 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {return reinterpret_cast<uintptr_t>(ptr);}

Data* deserialize(uintptr_t serialized) {return reinterpret_cast<Data*>(serialized);}

int main(void)
{
	Data test;

	test.data_str = "L'ex00 etait l'equivalent d'un cancer et a reduit mon esperance de vie";
	
	std::cout << "Data struct test adress : " << &test << std::endl;
	uintptr_t serialized = serialize(&test);
	std::cout << "Serialized value : " << serialized << std::endl;
	Data *deserialized = deserialize(serialized);
	std::cout << "Deserialized pointer is holding adress: " << deserialized << std::endl;

	std::cout << "Checking for data_str value on deserialized pointer: "
		<< deserialized->data_str << std::endl;
}