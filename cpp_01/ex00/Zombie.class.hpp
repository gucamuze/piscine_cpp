/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:26:00 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/20 13:48:01 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <cstring>
#include <iostream>

class Zombie {
	private:
		std::string _zombieName;
	public:
		Zombie(std::string input_name);
		~Zombie(void);
		void announce(void);
	
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif