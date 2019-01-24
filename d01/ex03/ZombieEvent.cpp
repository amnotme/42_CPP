/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 03:09:44 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 03:09:45 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void) :
_type("default")
{
	std::srand(std::time(nullptr));
	return ;
}
ZombieEvent::~ZombieEvent(void)
{
	return ;
}
ZombieEvent::ZombieEvent(ZombieEvent const & src)
{
	*(this) = src;
}
ZombieEvent  &ZombieEvent::operator=(ZombieEvent const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getZombieType();
	return (*this);
}
void 		ZombieEvent::setZombieType(std::string newType)
{
	this->_type = newType;
}
std::string 	ZombieEvent::getZombieType(void) const
{
	return (this->_type);
}
Zombie 		*ZombieEvent::newZombie(std::string const name)
{
	Zombie 	*z = new Zombie(name, _type);
	return (z);
}
Zombie 		*ZombieEvent::randomChump(void)
{

	std::string ranNames[7] = {"Lust", "Sloth", "Envy", "Anger","Pride",
						"Covetousness", "Gluttony"};

	Zombie *zom = new Zombie(ranNames[rand() % 6], this->_type);
	zom->announce();
	return (zom);
}
