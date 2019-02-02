/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 14:34:41 by lhernand          #+#    #+#             */
/*   Updated: 2019/02/01 21:09:15 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
# include "Colors.hpp"
# include <vector>
# include <string>
# include <iostream>

template <size_t SIZE, typename T>
inline size_t array_size(T (&)[SIZE]) 
{
	return (SIZE);
}

template <typename T>
void		easyfind(T intList, int const & y) 
{
	int  i = 0;
	typename T::iterator it;

	for( it = intList.begin() ; it != intList.end() ; ++it) 
	{
		if (*it == y) 
		{
			std::cout << BGREEN << "Element found at index " << BRED << "["
			   		  << i << "]" << BGREEN << " element -> " << BYELLOW
					  << *it << RESET << std::endl;
			return ;
		}
		i++;
	}
	throw(std::string("\033[1;31mValue isn't in the list\033[0m"));	
}

#endif 

