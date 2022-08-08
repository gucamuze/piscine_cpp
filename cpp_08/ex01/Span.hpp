/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:32:50 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/08 05:47:51 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <exception>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <limits.h>

class Span
{
	private:
		unsigned int		_max_size;
		unsigned int		_cur_size;
		std::vector<int>	_vector;

	public:
		Span();
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span &operator=(Span const &rhs);

		void			addNumber(int number);
		void			fillIt(void);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
		void			printSpan(void) const;

		unsigned int const		&getCurSize() const;
		std::vector<int> const	&getVector() const;

		class NoSpanFoundException : public std::exception {
			virtual const char *what() const throw();
		};
		class MaxSizeReachedException : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Span const &i);

#endif