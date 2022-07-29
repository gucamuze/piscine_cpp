/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:32:29 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/20 15:46:35 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP

#include <iomanip>
#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
							Weapon( std::string weaponType );
		void				setType( std::string weaponType );
		std::string const&	getType( void );
};

#endif