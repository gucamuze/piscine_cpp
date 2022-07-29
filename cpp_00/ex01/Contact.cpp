/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:40:09 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/29 02:08:34 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int Contact::isValid() {
	if (firstName.empty() || lastName.empty() || nickname.empty()
			|| phoneNumber.empty() || darkestSecret.empty())
		return 0;
	return 1;
}

// mode 0 for firstname, 1 for lastName, 2 for nickname;
std::string Contact::getFormattedContactInfo(int mode) {
	std::string formattedString;
	
	if (mode == 0) formattedString = this->firstName;
	else if (mode == 1) formattedString = this->lastName;
	else formattedString = this->nickname;
	if (formattedString.size() > 10) {
		formattedString = formattedString.substr(0, 10);
		formattedString[9] = '.';
	}
	return formattedString;
}

void Contact::printContactInfos() {
	std::cout << "Contact first name : " << firstName << std::endl
		<< "Contact last name : " << lastName << std::endl
		<< "Contact nickname : " << nickname << std::endl
		<< "Contact phone number : " << phoneNumber << std::endl
		<< "Contact darkest secret : " << darkestSecret << std::endl;
}

// Mode 0 for firstname, 1 for lastname, 2 for nickname, 3 for phonenumber, 4 for darkestsecret
void Contact::setContactInfo( std::string newValue, int mode ) {
	switch (mode)
	{
		case 0:
			this->firstName = newValue;
			break;
		case 1:
			this->lastName = newValue;
			break;
		case 2:
			this->nickname = newValue;
			break;
		case 3:
			this->phoneNumber = newValue;
			break;
		case 4:
			this->darkestSecret = newValue;
			break;
	}
}