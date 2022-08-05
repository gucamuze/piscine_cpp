/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:05:14 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/05 01:41:42 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

		virtual void beExecuted(void) const;
};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i);


#endif