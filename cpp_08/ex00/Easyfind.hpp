/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:11:13 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 23:58:07 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

class NotFoundException : public std::exception
{
	virtual const char *what() const throw() {return "Value not found !";};
};

template <typename T>
typename T::iterator easyfind(T &container, int to_find)
{
	typename T::iterator iterator = find(container.begin(), container.end(), to_find);
	if (iterator == container.end())
		throw NotFoundException();
	return iterator;
}

#endif