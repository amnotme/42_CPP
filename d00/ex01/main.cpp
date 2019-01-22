/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:38:45 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/21 11:38:46 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include "Colors.hpp"
#include <iostream>
#include <string>
#include <sstream>

int main(void)
{
	system("clear");
	Phonebook 		phone;
	std::string		temp;
	int 				choice = 0;

	while (choice != 3)
	{
		if (std::cin.eof())
		exit(1);
		std::getline(std::cin, temp);
		std::stringstream	conversion(temp);
		conversion >> choice;
		if (choice == 1)
			phone.add();
		else if (choice == 2)
			phone.search();
		else if (choice == 3)
			continue ;
		else
			std::cout << BRED << "Invalid Choice. Please Try again" << RESET << std::endl;
	}
	std::cout << BBLUE << "Thanks for using 'Agenda', Goodbye! ^_^ " << RESET << std::endl;
	return (0);
}
