/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:42:09 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 22:42:38 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>

# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RESET "\033[0m"

int 				main(void)
{
	std::string string = "HI THIS IS MY BRAIN";
	std::string *strpointer = &string;
	std::string &string2 = string;

	std::cout << YELLOW << "this is the pointer '" << *strpointer << "'" << std::endl;
	std::cout << GREEN << "this is the reference '" << string2 << "'" << std::endl;
	std::cout << RESET;

	return (0);
}

