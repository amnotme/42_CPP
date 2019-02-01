/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 21:57:54 by lhernand          #+#    #+#             */
/*   Updated: 2019/02/01 14:25:39 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<class T> class Array
{
	public:
		Array(void)
		{
			this->_size = 0;
			this->_arr = new T[0];
		}
		Array(unsigned int n)
		{
			this->_size = n;
			this->_arr = new T[_size];
			initAll(n);
		}
		T 	const		size(void) const
		{
			return (this->_size);
		}
		void 			initAll(unsigned int size)
		{
			unsigned int i = 0;

			while (i < size)
				this->_arr[i++] = 0;
		}
		void 			setElem(int elem, T const val)
		{
			this->_arr[elem] = val;
		}
		T const			getElemAt(int elem) const
		{
			return (_arr[elem]);
		}
		T const			&operator[](int elem)
		{
			if (elem >= this->size())
			{
				std::cout << "Index Out of Bounds" << std::endl;
				return (_arr[0]);
			}
			else
				return (_arr[elem]);
		}
		T const 			&operator=(T const & arr)
		{

		}
	private:

		unsigned int 		_size;
		T				*_arr;
};
