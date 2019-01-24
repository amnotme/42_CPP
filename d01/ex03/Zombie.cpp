/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 03:09:24 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 03:09:25 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Colors.hpp"

Zombie::Zombie(void)
{
	std::string ranNames[7] = {"Lust", "Sloth", "Envy", "Anger","Pride",
						"Covetousness", "Gluttony"};
	std::string ranTypes[5] = {"NewBorn", "Old", "Runner", "Fire", "Invincible"};
	this->_name = (ranNames[rand() % 6]);
	this->_type = (ranTypes[rand() % 5]);
}

Zombie::Zombie(std::string name, std::string type) :
_name(name),
 _type(type)
{
	return ;
}
Zombie::~Zombie(void)
{
	std::cout << BRED;
	std::cout << "Zombie " << this->_name << " has been vanquished" << std::endl;
}
Zombie::Zombie(Zombie const & src)
{
	*(this) = src;
}
Zombie  &Zombie::operator=(Zombie const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	this->_name = rhs.getName();
	return (*this);
}
void 		Zombie::setName(std::string const name)
{
	this->_name = name;
}
void 		Zombie::setType(std::string const type)
{
	this->_type = type;
}
std::string	Zombie::getType(void) const
{
	return (this->_type);
}
std::string 	Zombie::getName(void) const
{
	return (this->_name);
}
void 				Zombie::announce(void) const
{
	std::cout << YELLOW;
	std::cout << "<" << this->_name << GREEN;
	std::cout << " (" << this->_type;
	std::cout << ")" << YELLOW;
	std::cout << "> " << RED;
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
	std::cout << RESET;
}
