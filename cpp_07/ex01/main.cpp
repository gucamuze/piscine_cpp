/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:40:43 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 06:05:01 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    std::cout << "test with std::string array:" << std::endl;
    std::string array[3] = {"plz", "no", "blackhole"};
    iter<std::string>(array, 3, display);
	
    std::cout << "test with char array" << std::endl;
    char str[6] = "Hello";
    iter<char>(str, 5, display);

    std::cout << "test with int array" << std::endl;
    int	int_array[9] = {1,2,3,4,5,6,7,8,9};
    iter<int>(int_array, 9, display);

    return 0;
}