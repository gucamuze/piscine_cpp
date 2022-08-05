/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:34:23 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 02:03:33 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"

class Intern
{
	private:
		Form *	(*_func_array[3])(std::string);

	public:
		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern 		&operator=(Intern const &rhs);
		static Form	*createPPForm(std::string target);
		static Form	*createSCForm(std::string target);
		static Form	*createRRForm(std::string target);
		Form		*makeForm(std::string formName, std::string formTarget) const;

		class UnknownFormException : public std::exception
		{
			virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &o, Intern const &i);

#endif