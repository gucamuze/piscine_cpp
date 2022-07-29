/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:32:21 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/21 11:42:07 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
#define HUMANB_CLASS_HPP

#include <iomanip>
#include <iostream>
#include "Weapon.class.hpp"

class HumanB {
	private:
		Weapon	*	_weapon;
		std::string	_name;
		
	public:
					HumanB( std::string name);
		void		attack( void );
		void		setWeapon( Weapon &newWeapon );
};

#endif