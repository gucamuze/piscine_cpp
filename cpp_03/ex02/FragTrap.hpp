/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:42:14 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/01 19:22:01 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class Fragtrap : public Claptrap {
	public:
		Fragtrap( void );
		Fragtrap( std::string name );
		Fragtrap( const Fragtrap &fragtrap );
		~Fragtrap( void );
		
		Fragtrap &operator=( const Fragtrap &fragtrap );
		
		void	attack( const std::string& target );
		void	highFiveGuys( void );
};

#endif