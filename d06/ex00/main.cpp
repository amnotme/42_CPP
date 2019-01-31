/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:34:42 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/30 20:34:44 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Convert.hpp"

int				main(int argc, char **argv) {

	if (argc != 2)
		std::cout << "\033[1;32mInput one parameter\033[0m" << std::endl;
	else
	{
		Convert converter;
		converter.parseInput(argv[1]);
	}
	return (0);
}
