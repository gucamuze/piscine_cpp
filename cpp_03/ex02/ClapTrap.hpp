/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:20:29 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/01 19:02:24 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <typeinfo>

enum stats {hp, ep, ad};

class Claptrap {
	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;
		
	public:
		Claptrap( void );
		Claptrap( std::string name );
		Claptrap( const Claptrap &claptrap );
		~Claptrap( void );
		
		Claptrap &operator=( const Claptrap &claptrap );
		
		void				attack( const std::string& target );
		void				takeDamage( unsigned int amount );
		void				beRepaired( unsigned int amount );
		void				showStats( void );

		void				setName( std::string name );
		void				setStat( unsigned int stat, unsigned int value );
		std::string			&getName( void ) const;
		unsigned int		&getStat( unsigned int stat ) const;
};

#endif