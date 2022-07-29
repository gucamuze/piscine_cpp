/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:25:41 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/27 04:04:40 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
#define HARL_CLASS_HPP

#include <iostream>

// typedef void (*func)(void);

class Harl {
	private:
		static void	_debug( void );
		static void	_info( void );
		static void	_warning( void );
		static void	_error( void );
		void		(*_func_array[4])(void);
		
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};

#endif