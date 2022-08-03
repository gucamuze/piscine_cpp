/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:26:20 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/03 07:15:56 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *dawg = new Dog();
	const Animal *kat = new Cat();
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << dawg->getType() << " " << std::endl;
	std::cout << kat->getType() << " " << std::endl << std::endl;
	
	kat->makeSound();
	dawg->makeSound();
	meta->makeSound();

	delete meta;
	delete dawg;
	delete kat;
	
	Animal not_const_this_time("Chupacabra");
	std::cout << not_const_this_time.getType() << " " << std::endl;
	not_const_this_time.makeSound();
	not_const_this_time.setType("Dog");
	std::cout << not_const_this_time.getType() << " " << std::endl;
	not_const_this_time.makeSound();
	std::cout << std::endl;

	Dog dany;
	std::cout << dany.getType() << " " << std::endl;
	dany.makeSound();
	dany.setType("Chupacabra");
	std::cout << dany.getType() << " " << std::endl;
	dany.makeSound();
	std::cout << std::endl;
	
	return 0;
}