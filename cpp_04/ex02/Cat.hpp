/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:09:32 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/03 22:41:21 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
	public:
		// virtual void	abstractoPatronum();
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		Cat &operator=(Cat const &rhs);
		void makeSound(void) const;

	private:
		Brain	*_brain;
};

#endif