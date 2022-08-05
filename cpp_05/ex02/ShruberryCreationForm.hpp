/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:25:23 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 01:42:09 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "Form.hpp"

class ShruberryCreationForm : public Form
{
	private:

	public:
		ShruberryCreationForm(void);
		ShruberryCreationForm(const std::string target);
		ShruberryCreationForm(ShruberryCreationForm const &src);
		virtual ~ShruberryCreationForm();

		ShruberryCreationForm &operator=(ShruberryCreationForm const &rhs);

		virtual void beExecuted(void) const;

		class FileIOException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, ShruberryCreationForm const &i);

#endif