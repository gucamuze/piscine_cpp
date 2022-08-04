/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:47:03 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/04 06:16:23 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string _name;
		unsigned int _grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &rhs);
		std::string const &getName(void) const;
		unsigned int const &getGrade(void) const;
		void upGrade(void);
		void downGrade(void);

		void signForm(Form &form) const;

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif