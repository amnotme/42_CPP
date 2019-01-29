/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 14:38:36 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/25 14:38:38 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	setName("FR4G-TP");
	setHp(100);
	setMaxHp(100);
	setEp(50);
	setMaxEp(50);
	setLevel(1);
	setMeleeAttackDamage(20);
	setRangedAttackDamage(15);
	setArmorDamageReduction(3);
	std::cout << BCYAN << _name <<  HYELLOW << " -- start bootup sequence.";
	std::cout << RESET << std::endl;
	return ;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << HRED << "<" << BCYAN << this->_name  << BRED <<  "> "
			<< HBLUE << "Robot Down, robot down!" RESET << std::endl;
  	sleep(1);
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << HYELLOW << "Copying..." << std::endl;
  	std::cout << HBLUE << "That guy looks an awful lot like a Badass !";
	std::cout << RESET << std::endl;
	(*this) = src;
}

ScavTrap 	&ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << HBLUE << "Holy crap, that worked?" << std::endl;
	std::cout << HYELLOW << "ScavTrap " << BGREEN << ": " << BCYAN << rhs.getName()
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
void 		ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string attacks[5] = {
		"Dance for me monkey, DANCE!!!! ",
		"Go To a dark circular room. Find the corner and sit there... ",
		"Make your nose and elbow touch... without disassmebling any parts of yourself",
		"Take a cold shower with your circuit board's door ajar",
		"Turn off your own power supply and turn in it back on afterwards... Bwahahahah!"
	};
	if (this->getEp() > SPECIALEPCOST)
	{
		std::cout << BRED << "<" << HCYAN << this->getName() << BRED << "> " << HYELLOW << "attacks " << HCYAN << target << HYELLOW << " with : "
				<< HBGREEN <<  attacks[rand() % 5] << HYELLOW <<  " for " << BRED << "50 " << HYELLOW << "points worth of damage" << RESET << std::endl;
		this->setEp(this->getEp() - SPECIALEPCOST);
	}
	else
	{
		std::cout << HBLUE << "This is tiring... Let me catch my breath for a second... or a day" << std::endl;
		std::cout << HYELLOW << "You've tried attacking at short range but you simply won't move.  You only have " << BRED  << this->getEp() << HYELLOW << " Energy points!" << RESET <<  std::endl;
	}
	this->printStats();
	sleep(1);
}
