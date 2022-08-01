/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:42:14 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/01 19:03:51 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <typeinfo>

class Scavtrap : public Claptrap {
	private:
		bool gateKeeping;
	public:
		Scavtrap( void );
		Scavtrap( std::string name );
		Scavtrap( const Scavtrap &scavtrap );
		~Scavtrap( void );
		
		Scavtrap &operator=( const Scavtrap &scavtrap );
		
		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif