/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:40:35 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/29 02:44:45 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctype.h>
#include "Contact.hpp"


class PhoneBook {
	private:
		Contact 	_contacts[8];
		int			_index;
		std::string	_input;

		std::string _getUserInput(const char *prompt);
		bool		_isNumber(const std::string & s);

	public:
		int			add();
		int			search();
		PhoneBook();
};

#endif