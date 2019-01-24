/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 00:31:00 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/24 00:31:01 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	return ;
}
HumanB::HumanB(std::string name) :
_name(name)
{
	return ;
}
HumanB::~HumanB(void)
{
	return ;
}
void 		HumanB::attack(void)
{
	std::cout << HRED;
	std::cout << this->_name << " attacks with his " << this->_weapon->getType();
	std::cout << RESET << std::endl;
}
void 		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
