/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:25:41 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/27 05:04:29 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
#define HARL_CLASS_HPP

#include <iostream>

// typedef void (*func)(void);

class Harl {
	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
		void	_default( void );
		
	public:
		Harl( void );
		~Harl( void );
		void	worstUseOfSwitchEverThanks42( std::string log_level);
};

#endif