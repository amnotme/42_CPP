/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 02:49:30 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/31 21:13:49 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Colors.hpp"
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

template< typename T>
void		iter(T arr[], size_t i, T const func( T const & arr))
{

	size_t j = 0;
	while (j < i)
	{
		func(arr[j]);
		j++;
	}
}

template< typename T>
void 	print(T const & elem)
{
	std::srand(time(NULL));
	std::string colors[6] = {
		BRED, BGREEN, BYELLOW, BBLUE, BPURPLE, BCYAN,
	};		
	std::cout << colors[rand() % 6] << " " << elem << " " << RESET;
}

template< typename T>
T const plusTwo(T const & elem)
{
	T const temp = (elem + elem);
	print(temp);
	return (temp);
}

template <size_t SIZE, typename T> 
inline size_t array_size(T (&)[SIZE]) 
{
    return SIZE;
}
