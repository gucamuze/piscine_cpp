/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:54:59 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/03 20:03:59 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain &operator=(Brain const &rhs);
		
		std::string	*getIdeas(void) const;

	private:
		std::string	_ideas[100];
};


#endif