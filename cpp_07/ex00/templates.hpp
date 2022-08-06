/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:21:13 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/06 17:40:02 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>

template<typename T>
void	swap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T	&min(const T& a, const T& b) {
	return (a < b) ? a : b;
}

template<typename T>
const T	&max(const T& a, const T& b) {
	return (a > b) ? a : b;
}

#endif
