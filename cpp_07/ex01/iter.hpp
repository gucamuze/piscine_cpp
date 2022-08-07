/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 05:57:25 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 05:57:26 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    print_elem(const T &elem)
{
    std::cout << "elem = " << elem << std::endl;
}

template<typename T>
void    iter(const T* array, int len, void func(const T & elem)) {
    for (int i = 0; i < len; i++)
        func(array[i]);
}

#endif