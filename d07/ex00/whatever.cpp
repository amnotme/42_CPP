/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 02:25:24 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/31 02:32:40 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void		swap(T & a, T & b)
{
	T temp = a;
	a = b;
	b = temp;
}
template<typename T>
T const &	max(T const & a, T const & b)
{
	if (a < b)
		return (a);
	else if (a == b)
		return (b);
	else 
		return (b);
}

template<typename T>
T const &	min(T const & a, T const & b)
{
	if (a > b)
		return (a);
	else if (a == b)
		return (b);
	else 
		return (b);
}
