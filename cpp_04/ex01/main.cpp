/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:26:20 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/03 22:22:08 by gucamuze         ###   ########.fr       */
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

	std::cout << "______________COPY TESTS FOR DOG_________________" << std::endl;
	Dog original;
	{
		Dog copy = original;
	}
	std::cout << "_________________COPY TESTS FOR CAT________________" << std::endl;

	Cat originalcat;
	{
		Cat copycat = originalcat;
	}
	std::cout << "_________________COPY TESTS FOR CAT *________________" << std::endl;
	{
		Cat *cat = new Cat();
		Cat cat_cpy(*cat);

		cat_cpy.makeSound();
		delete cat;
		cat_cpy.makeSound();
	}
	std::cout << "___________________________________________" << std::endl << std::endl;
	std::string str;
	std::cout << "Press any key to continue to the test for an array of 100 animals* ..." << std::endl;
	std::getline(std::cin, str);

	{
		Animal *animal_array[100];
		for (int i = 0; i < 100; i++)
		{
			if (i < 50)
				animal_array[i] = new Dog;
			else
				animal_array[i] = new Cat;
		}

		for (int i = 0; i < 100; i++)
			delete animal_array[i];
	}
	
	return 0;
}