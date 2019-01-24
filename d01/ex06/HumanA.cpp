/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 00:30:03 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/24 00:30:05 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{
	return ;
}
HumanA::HumanA(std::string name, Weapon weapon) :
_weapon(weapon),
_name(name)
{
	return ;
}
HumanA::~HumanA(void)
{
	return ;
}
void 		HumanA::attack(void)
{
	std::cout << HRED;
	std::cout << this->_name << " attacks with his " << this->_weapon.getType();
	std::cout << RESET << std::endl;
}
