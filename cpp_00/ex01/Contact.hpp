/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:40:26 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/29 02:08:21 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <cstring>
#include <iostream>

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		int			isValid( void );
		void		printContactInfos( void );
		void		setContactInfo( std::string newValue, int mode );
		std::string	getFormattedContactInfo(int mode);
};

#endif