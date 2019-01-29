/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 01:40:26 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/25 01:40:27 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"



FragTrap::FragTrap(std::string name)
{
	setName(name);
	setHp(100);
	setHp(100);
	setMaxHp(100);
	setEp(100);
	setMaxEp(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
	srand (time(NULL));
	std::cout << BCYAN << _name <<  HYELLOW << " -- start bootup sequence.";
	std::cout << RESET << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << HRED << "<" << BCYAN << this->_name  << BRED <<  "> "
			<< HPURPLE << "Dang it. I'm out !" RESET << std::endl;
  	sleep(1);
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << HYELLOW << "Copying..." << std::endl;
  	std::cout << HPURPLE << "Yeahyeahyeah, just -- wait, you can actually do that?";
	std::cout << RESET << std::endl;
	(*this) = src;
}

FragTrap 	&FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << HPURPLE << "What? No, nooo, you are so STUPID! Whatever. You're welcome." << std::endl;
	std::cout << HYELLOW << "FragTrap " << BGREEN << ": " << BCYAN << rhs.getName()
			<< HYELLOW << " is being copied!" << RESET <<  std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs.getName();
	this->_hp = rhs.getHp();
	this->_maxHp = rhs.getMaxHp();
	this->_ep = rhs.getEp();
	this->_maxEp = rhs.getMaxEp();
	this->_level = rhs.getLevel();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	return (*this);
}
