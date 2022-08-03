/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:09:10 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/03 22:29:49 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class A_Animal
{
	public:
		A_Animal();
		A_Animal(std::string type);
		A_Animal(A_Animal const &src);
		virtual ~A_Animal();

		A_Animal &operator=(A_Animal const &rhs);

		void setType(std::string const newType);
		std::string &getType(void) const;
		virtual void makeSound(void) const = 0; // it's like magic ! :D

	protected:
		std::string	_type;
};

#endif