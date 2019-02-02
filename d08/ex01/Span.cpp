/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 21:11:12 by lhernand          #+#    #+#             */
/*   Updated: 2019/02/01 21:52:24 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span(unsigned int N) :
_N(N)
{
	return ;
}
Span::~Span(void)
{
	return ;
}
Span::Span(Span const & src)
{
	*this = src ;
}
Span		&Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_vectList = rhs._vectList;
	this->_N = rhs.getSize();
	return (*this);
}

size_t		Span::shortestSpan( void )
{
	std::less<int> lessInt;
	std::set<int>::iterator j = _vectList.begin();
	std::set<int>::iterator k = (++_vectList.begin());
	size_t				i = 0;
	int 					l = *(--_vectList.end());
	if (this->getSize() < 2)
		throw (std::string("There aren't enough elements to get a span"));
	else
	{
		while (i < (this->getSize() - 1))
		{
			if (lessInt((*k - *j), l))
				l = (*k - *j);
			++k;
			++j;
			i++;
		}
	}
	return (l);
}
size_t 		Span::longestSpan( void )
{
	std::set<int>::iterator i = std::max_element(_vectList.begin(), _vectList.end());
	std::set<int>::iterator j = std::min_element(_vectList.begin(), _vectList.end());
	if (this->getSize() < 2)
		throw( std::string("There aren't enough elements to get a span"));
	else
		return (*i - *j);
}
size_t		Span::getSize( void ) const
{
	return(this->_vectList.size());
}
void		Span::addNumber( int const number )
{
	if (this->getSize() < this->_N)
		this->_vectList.insert(number);
	else
		throw(std::string("No more elements can be added"));
}
void		Span::printSet( void ) const
{
	std::ostream_iterator<int> screen(std::cout, "-");
	copy(this->_vectList.begin(), this->_vectList.end(), screen);
	std::cout << std::endl;
}
bool		Span::isEmpty( void ) const
{
	return (this->_vectList.empty());
}
