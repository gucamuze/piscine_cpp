/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:26:00 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/20 14:19:57 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <cstring>
#include <iostream>

class Zombie {
	private:
		std::string	_zombieName;
	public:
					Zombie( std::string input_name );
					Zombie( void );
					~Zombie( void );
		void		announce( void );
		void		setName( std::string name );
	
};

Zombie *			zombieHorde( int N, std::string name );

#endif