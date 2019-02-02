/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 22:36:48 by lhernand          #+#    #+#             */
/*   Updated: 2019/02/01 22:36:48 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>
#include <iostream>
#include <list>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>( void ) {
			return;
		}

		MutantStack( MutantStack const & other ) {
			*this = other;
			return;
		}

		~MutantStack<T>( void ) {
			return;
		}

		MutantStack &operator=( MutantStack const & rhs ) {
			this->_s = rhs._s;
			return;
		}

		typedef std::list<int>::iterator iterator;
		T const top( void ) {
			return (_s.front());
		}

		T const size( void ) {
			return (_s.size());
		}

		void push(T const value) {
			_s.push_front(value);
		}

		void pop(void)	{
			_s.pop_front();
		}

		iterator begin( void ) {
			return (_s.begin());
		}

		iterator end( void ) {
			return (_s.end());
		}

		void printSet( void ) const {
			std::ostream_iterator<int> screen(std::cout, "\033[1;32m - \033[0m");
			copy(this->_s.begin(), this->_s.end(), screen);
			std::cout << std::endl;
		}

	private:
		std::list<T>		_s;
};

#endif
