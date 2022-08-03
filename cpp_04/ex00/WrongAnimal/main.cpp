/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:26:20 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/03 07:17:08 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *kat = new Cat();
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << kat->getType() << " " << std::endl << std::endl;
	
	kat->makeSound();
	meta->makeSound();

	delete meta;
	delete kat;
		
	return 0;
}