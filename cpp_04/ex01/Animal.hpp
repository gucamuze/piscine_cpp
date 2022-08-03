/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:09:10 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/03 07:11:50 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &src);
		virtual ~Animal();

		Animal &operator=(Animal const &rhs);

		void setType(std::string const newType);
		std::string &getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string	_type;
};

#endif