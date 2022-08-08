/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:34:29 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/08 06:41:01 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <iostream>

int main(void)
{
	{ // TESTS FROM SUBJECT
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(11);
		sp.addNumber(17);
		sp.addNumber(9);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{ // MY TESTS => 50k elems
		Span s = Span(50000);
		std::cout << "la" << std::endl;
		s.fillIt();
		std::cout << "la " << s.getVector().capacity() <<std::endl;
		std::cout << s;
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	{ // MY TESTS => Errors
		Span s = Span(1);
		
		s.fillIt(); // will catch max size exception
		std::cout << s << std::endl;
		// Invalid span search testing
		try	{ std::cout << s.shortestSpan() << std::endl;}
		catch(const std::exception& e) {std::cerr << e.what() << '\n';}
		try	{ std::cout << s.longestSpan() << std::endl;}
		catch(const std::exception& e) {std::cerr << e.what() << '\n';}
	}
	
	return 0;
}