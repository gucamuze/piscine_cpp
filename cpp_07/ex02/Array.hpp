/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:44:08 by gucamuze          #+#    #+#             */
/*   Updated: 2022/08/07 06:18:15 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
	private:
		int _len;
		T *_array;

	public:
		Array<T>(void) : _len(0), _array(NULL) {}
		Array<T>(unsigned int n) : _len(n), _array(0) { this->_array = new T[n]; }
		Array<T>(Array<T> const &copy) : _len(0), _array(NULL) { *this = copy; }
		~Array<T>(void) { delete[] this->_array; }
		
		Array<T> &operator=(Array<T> const &copy)
		{
			if (this->_len > 0)
				delete[] this->_array;
			this->_len = copy.size();
			this->_array = new T[this->_len];
			for (int i = 0; i < this->_len; i++)
				this->_array[i] = copy._array[i];
			return *this;
		}
		T &operator[](int const i) const
		{
			if (i < 0 || i >= this->_len)
				throw std::overflow_error("[i] out of range.");
			return this->_array[i];
		}

		int size(void) const { return this->_len; }
};

#endif