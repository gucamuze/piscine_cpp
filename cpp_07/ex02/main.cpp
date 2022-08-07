/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 06:13:41 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 06:15:03 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <stdlib.h>
#define SIZE 750

int main(void)
{
    Array<int>	template_array(SIZE);
    int			*int_array = new int[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        const int value = rand();
        template_array[i] = value;
        int_array[i] = value;
    }
    {
        Array<int> tmp = template_array;
        Array<int> test(tmp);
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (int_array[i] != template_array[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        } 
		else {
			std::cout << "template_array["<< i <<"] => " << template_array[i]
				<< "\tint_array["<< i <<"] => " << int_array[i] << std::endl;
		}
    }
    try {	// Check underflow
        template_array[-2] = 0;
	} catch(const std::exception& e) {
        std::cerr << "underflow catched ! " << e.what() << '\n';
    }
    try {	// Check overflow
        template_array[SIZE] = 0;
    } catch(const std::exception& e) {
        std::cerr << "overflow catched ! " << e.what() << '\n';
    }
    delete [] int_array;//
    return 0;
}
