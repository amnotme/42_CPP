/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 00:29:38 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/24 00:29:39 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) :
_type("stick")
{
	return ;
}
Weapon::Weapon(std::string type) :
_type(type)
{
	return ;
}
Weapon::~Weapon(void)
{
	return ;
}
void 		Weapon::setType(std::string type)
{
	this->_type = type;
}
std::string 	&Weapon::getType(void)
{
	return (this->_type);
}
