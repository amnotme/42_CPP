/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 21:42:03 by lhernand          #+#    #+#             */
/*   Updated: 2019/02/01 21:50:02 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Colors.hpp"
#include <iostream>
#include <string>
int 	main(void)
{
	Span sp = Span(5);
	Span sp2 = Span(5);
	Span sp3 = Span(5);

	std::cout << BYELLOW << "Before insertion sp empty? " << std::boolalpha << sp.isEmpty()
		<< RESET << std::endl;
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << BYELLOW << "After insertion sp empty? -> " << std::boolalpha
			<< sp.isEmpty() << RESET << std::endl;
		sp.printSet();

		sp2 = sp;
		sp2.printSet();
	}
	catch ( std::string str)
	{
		std::cout << str << std::endl;
	}

	try
	{
		std::cout << BGREEN << "Shortest Span -> "
			<< sp.shortestSpan() << RESET << std::endl;
		std::cout << BGREEN << "Longest Span -> "
			<< sp.longestSpan() << RESET << std::endl;
	}
	catch ( std::string str2)
	{
		std::cout << str2 << std::endl;
	}
	std::cout << BYELLOW << "Before insertion sp empty? " << std::boolalpha << sp.isEmpty()
		<< RESET << std::endl;
	try
	{

		sp3.addNumber(5);
		std::cout << BYELLOW << "After insertion sp empty? -> " << std::boolalpha
			<< sp3.isEmpty() << RESET << std::endl;
		sp3.printSet();
	}
	catch ( std::string str)
	{
		std::cout << str << std::endl;
	}
	try
	{
		std::cout << BGREEN << "Shortest Span -> "
			<< sp3.shortestSpan() << RESET << std::endl;
		std::cout << BGREEN << "Longest Span -> "
			<< sp3.longestSpan() << RESET << std::endl;
	}
	catch ( std::string str2)
	{
		std::cout << str2 << std::endl;
	}
	return (0);
}
