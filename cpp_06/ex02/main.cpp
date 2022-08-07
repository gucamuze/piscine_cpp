/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 05:08:37 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 05:51:12 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstdio>

Base	*generate(void)
{
	std::srand(std::time(0));
	int random = std::rand() % 3;

	if (random == 0)
		return new A;
	if (random == 1)
		return new B;
	return new C;
}

void	identify(Base *p)
{
	std::cout << "IDENTIFY BY POINTER:" << std::endl;
	if (p)
	{
		A	*A_ptr = dynamic_cast<A*>(p);
		B	*B_ptr = dynamic_cast<B*>(p);
		C	*C_ptr = dynamic_cast<C*>(p);

		(void)C_ptr; // need to do this stupid shit because of -Werror
		std::cout << "Object type => "
			<< (A_ptr ? "A" : B_ptr ? "B" : "C") << std::endl;
	}
	else
		std::cout << "stop fucking around i'm tired thx" << std::endl;
}

void	identify(Base &p)
{
	std::cout << "IDENTIFY BY REFERENCE:" << std::endl;
	try {
		A	&A_ref = dynamic_cast<A&>(p);
		(void)A_ref; // fuck you -Werror thx
		std::cout << "Object type => A" << std::endl;
	} catch(const std::exception& e){}
	try	{
		B	&B_ref = dynamic_cast<B&>(p);
		(void)B_ref; // fuck you -Werror thx
		std::cout << "Object type => B" << std::endl;
	} catch(const std::exception& e){}
	try	{
		C	&C_ref = dynamic_cast<C&>(p);
		(void)C_ref; // fuck you -Werror thx
		std::cout << "Object type => C" << std::endl;
	} catch(const std::exception& e){}
}

int main(void)
{
	Base *random_ptr;
	while (1)
	{
		random_ptr = generate();
		identify(random_ptr);
		identify(*random_ptr);
		delete random_ptr;
		std::cout << "Press enter to make another test" << std::endl;
		std::getc(stdin);
	}
	return 0;
}