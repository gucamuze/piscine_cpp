/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:40:43 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 05:57:08 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    std::string array[3] = {"plz", "no", "blackhole"};
    char str[6] = "Hello";

    iter<std::string>(array, 3, print_elem);
    
    std::cout << std::endl;

    iter<char>(str, 5, print_elem);
    return 0;
}