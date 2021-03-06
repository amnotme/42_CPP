/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 14:38:45 by lhernand          #+#    #+#             */
/*   Updated: 2019/02/01 14:47:56 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "easyfind.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>

int			main(int argc, char *argv[])
{
	int size;
	int toFind;
	int array[] = {10, 20, 30, 40, 50, -10, -20, -30, -40, -50};
	std::list<int> listV;
	if (argc != 2)
	{
		std::cout << BGREEN << "Please Enter one argument" << RESET << std::endl;
	}
	else
	{
		toFind = std::atoi(argv[1]);
		size = array_size(array);
		std::set<int> setI;
		setI.insert(1);
		setI.insert(2);
		setI.insert(3);
		setI.insert(4);
		setI.insert(5);
		std::vector<int>vectL(array, array + size);
		listV.push_back(2);
		listV.push_back(20);
		listV.push_back(-10);
		try
		{
			// easyfind< std::list<int> >(listV, toFind);
			// easyfind< std::vector<int> >(vectL, toFind);
			easyfind< std::set<int> >(setI, toFind);
		}
		catch (std::string str)
		{
			std::cout << str << std::endl;
		}
	}
	return (0);
}
