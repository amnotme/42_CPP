/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 03:09:14 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 03:09:16 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <stdlib.h>
#include <cstdlib>

int 			main(int argc, char **argv)
{
	std::srand(std::time(nullptr));
	if (argc != 2)
	{
		std::cout << BPURPLE << "Please enter a number of Zombies to invade your city" << RESET << std::endl;
		return (0);
	}
	ZombieHorde zoms = ZombieHorde(atoi(argv[1]));
	ZombieHorde zoms2 = ZombieHorde(atoi(argv[1]));
	zoms.announce();
	zoms2.announce();
	return (0);
}
