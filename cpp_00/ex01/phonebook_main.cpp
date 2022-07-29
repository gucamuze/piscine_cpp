/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_main.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:40:20 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/29 02:45:53 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstring>

int main()
{
	PhoneBook	phoneBook;
	std::string userInput;
	
	while (1) {
		std::cout << "Please enter one of the following commands : ADD, SEARCH, EXIT\n";
		std::getline(std::cin, userInput);
		if (std::cin.eof())
			return 0;
		if (std::strcmp(userInput.c_str(), "ADD") == 0) {
			if (phoneBook.add() == -1)
				return (0);
		} 
		else if (std::strcmp(userInput.c_str(), "SEARCH") == 0) {
			if (phoneBook.search() == -1)
				return (0);
		}
		else if (std::strcmp(userInput.c_str(), "EXIT") == 0) {
			return (1);
		}
	}
}