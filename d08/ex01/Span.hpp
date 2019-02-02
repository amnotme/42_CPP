/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 21:11:12 by lhernand          #+#    #+#             */
/*   Updated: 2019/02/01 21:52:41 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <set>
# include <iostream>
# include <string>
# include <iterator>
# include <algorithm>
# include <functional>

class Span
{
		public:
			Span(void);
			Span(unsigned int N);
			~Span(void);
			Span(Span const & src);
			Span &operator=(Span const & rhs);
			//Add your public methods below here
			size_t		shortestSpan( void );
			size_t 		longestSpan( void );
			size_t		getSize( void ) const;
			void		addNumber( int const number );
			void		printSet( void ) const;
			bool		isEmpty( void ) const;
		private:
			//Add your private methods

			//Add your private attributes below here
			std::set<int>			_vectList;
			size_t					_N;
};

#endif
