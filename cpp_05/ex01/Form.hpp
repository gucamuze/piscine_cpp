/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 05:03:12 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/04 06:15:29 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string	const	_name;
		bool				_is_signed;
		unsigned int const	_req_sign_grade;
		unsigned int const	_req_exec_grade;

	public:
		Form();
		Form(
			const std::string	name, 
			const unsigned int	req_sign_grade,
			const unsigned int	req_exec_grade
		);
		Form(Form const &src);
		~Form();

		Form &operator=(Form const &rhs);
		
		void				 setSignedStatus(bool is_signed);

		const std::string	&getName(void) const;
		const bool			&getSignedStatus(void) const;
		const unsigned int	&getReqSignGrade(void) const;
		const unsigned int	&getReqExecGrade(void) const;
		
		void beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif