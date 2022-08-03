/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:09:37 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/03 22:41:49 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
	public:
		Dog();
		Dog(Dog const &src);
		virtual ~Dog();

		Dog &operator=(Dog const &rhs);
		virtual void makeSound(void) const;
		
	private:
		Brain	*_brain;
};

#endif