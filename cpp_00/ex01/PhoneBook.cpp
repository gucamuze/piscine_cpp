/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:40:03 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/29 02:32:25 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {this->_index = 0;}

std::string PhoneBook::_getUserInput(const char *prompt) {
	std::string	userInput = "";
	
	std::cout << prompt << std::endl;
	while (userInput.empty()) {
		if (std::cin.eof()) break;
		std::getline(std::cin, userInput);
	}
	return userInput;
}

int PhoneBook::add() {
	if (this->_index == 8)
		this->_index = 0;

	this->_input = this->_getUserInput("Please enter your first name:");
	if (std::cin.eof()) return -1;
	this->_contacts[this->_index].setContactInfo(this->_input, 0);
	this->_input = this->_getUserInput("Please enter your last name:");
	if (std::cin.eof()) return -1;
	this->_contacts[this->_index].setContactInfo(this->_input, 1);
	this->_input = this->_getUserInput("Please enter your nickname:");
	if (std::cin.eof()) return -1;
	this->_contacts[this->_index].setContactInfo(this->_input, 2);
	this->_input = this->_getUserInput("Please enter your phone number:");
	if (std::cin.eof()) return -1;
	this->_contacts[this->_index].setContactInfo(this->_input, 3);
	this->_input = this->_getUserInput("Please tell us your darkest secret...");
	if (std::cin.eof()) return -1;
	this->_contacts[this->_index].setContactInfo(this->_input, 4);

	std::cout << "Contact succesfully added !\n";
	this->_index++;
	return (0);
};

bool PhoneBook::_isNumber(const std::string & s) {
	for (size_t i = 0; i < s.length(); i++)
		if (!std::isdigit(s[i]))
			return false;
			
	return true;
}

int	PhoneBook::search() {
	for (int i = 0; this->_contacts[i].isValid(); i++)
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[i].getFormattedContactInfo(0) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[i].getFormattedContactInfo(1) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[i].getFormattedContactInfo(2) << std::endl;
	}

	this->_input = this->_getUserInput(
		"Please enter the index of the contact you want to display:");
	if (std::cin.eof()) return -1;
	if (this->_input.empty()) return 1;

	int searchindex;
	std::istringstream(this->_input) >> searchindex;

	if ( !this->_isNumber(this->_input) ||  searchindex < 0 || searchindex > 7 
		|| !this->_contacts[searchindex].isValid() )
		std::cout << "Invalid index !\n";
	else
		this->_contacts[searchindex].printContactInfos();
	return (0);
}