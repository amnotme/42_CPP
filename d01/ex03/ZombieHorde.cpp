/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:33:32 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 21:33:53 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Colors.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N)
{
	std::cout << BGREEN << _N << " Zombies have appeared" << RESET << std::endl;
	this->_horde = new Zombie[N];
}
ZombieHorde::~ZombieHorde(void)
{
	delete [] _horde;
	std::cout << BRED << "THE HORDE IS DEAD" << std::endl;
}
ZombieHorde::ZombieHorde(ZombieHorde const & src)
{
	*(this) = src;
}
ZombieHorde &ZombieHorde::operator=(ZombieHorde const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_horde = rhs._horde;
	return (*this);
}
void 	ZombieHorde::announce(void)
{
	int i = 0;

	while (i < this->_N)
		this->_horde[i++].announce();
	return ;
}
