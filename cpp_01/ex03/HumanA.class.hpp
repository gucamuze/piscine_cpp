/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:32:13 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/21 11:42:13 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
#define HUMANA_CLASS_HPP

#include <iomanip>
#include <iostream>
#include "Weapon.class.hpp"

class HumanA {
	private:
		Weapon	*	_weapon;
		std::string	_name;
		
	public:
					HumanA( std::string name, Weapon &weapon );
		void		attack( void );
};

#endif