/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 21:49:10 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/25 21:49:11 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
_name("Parent Default constructor ClapTrap")
{
	std::cout << YELLOW;
	std::cout << "Clap Trap constructor initiated" << std::endl;
	std::cout << WHITE;
	return ;
}

ClapTrap::ClapTrap(std::string name) :
_name(name)
{
	std::cout << YELLOW;
	std::cout << "Default constructor initiated" << std::endl;
	std::cout << WHITE;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << YELLOW;
	std::cout << "<Parent Constructor>" <<  " Am I dead???" << std::endl;
	std::cout << WHITE;
	sleep(1);
	return ;
}
ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << HYELLOW << "Copying..." << std::endl;
  	std::cout << HPURPLE << "Yeahyeahyeah, just -- wait, you can actually do that?";
	std::cout << RESET << std::endl;
	(*this) = src;
}
ClapTrap 	&ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << HPURPLE << "What? No, nooo, you are so STUPID! Whatever. You're welcome." << std::endl;
	std::cout << HYELLOW << "ClapTrap " << BGREEN << ": " << BCYAN << rhs.getName()
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
std::string 			ClapTrap::getName(void) const
{
	return (this->_name);
}
unsigned int			ClapTrap::getHp(void) const
{
	return (this->_hp);
}
unsigned int			ClapTrap::getMaxHp(void) const
{
	return (this->_maxHp);
}
unsigned int			ClapTrap::getEp(void) const
{
	return (this->_ep);
}
unsigned int			ClapTrap::getMaxEp(void) const
{
	return (this->_maxEp);
}
unsigned int			ClapTrap::getLevel(void) const
{
	return (this->_level);
}
unsigned int 			ClapTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}
unsigned int			ClapTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}
unsigned int			ClapTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}

void			ClapTrap::setName(std::string name)
{
	this->_name = name;
}
void			ClapTrap::setHp(unsigned int hp)
{
	this->_hp = hp;
}
void			ClapTrap::setMaxHp(unsigned int maxHp)
{
	this->_maxHp = maxHp;
}
void			ClapTrap::setEp(unsigned int ep)
{
	this->_ep = ep;
}
void			ClapTrap::setMaxEp(unsigned int maxEp)
{
	this->_maxEp = maxEp;
}
void			ClapTrap::setLevel(unsigned int level)
{
	this->_level = level;
}
void			ClapTrap::setMeleeAttackDamage(unsigned int meleeAttackDamage)
{
	this->_meleeAttackDamage = meleeAttackDamage;
}
void			ClapTrap::setRangedAttackDamage(unsigned int rangedAttackDamage)
{
	this->_rangedAttackDamage = rangedAttackDamage;
}
void			ClapTrap::setArmorDamageReduction(unsigned int armorDamageReduction)
{
	this->_armorDamageReduction = armorDamageReduction;
}
void 		ClapTrap::rangedAttack(std::string const & target)
{
	if (this->getEp() > RANGEDEPCOST)
	{
		std::cout << BRED << "<" << HCYAN << this->getName() << BRED << ">" << HYELLOW << " attacks " << HCYAN << target << HYELLOW " at range with : " << BRED
				<< this->getRangedAttackDamage() << HYELLOW << " points worth of damage" << RESET << std::endl;
		this->setEp(this->getEp() - RANGEDEPCOST);
	}
	else
	{
		std::cout << HBLUE << "Hey... Is this thing on!!! What's wrong with it why won't it shoot!!!!" << std::endl;
		std::cout << HYELLOW << "You've tried attacking with your ranged weapon but you only have " << HRED << this->getEp() << HYELLOW << " Energy points!" << RESET << std::endl;
	}
	sleep(1);
}
void 		ClapTrap::meleeAttack(std::string const & target)
{
	if (this->getEp() > MELEEEPCOST)
	{
		std::cout << BRED << "<" << HCYAN << this->getName() << BRED << "> " << HYELLOW << "punches " << HCYAN << target << HYELLOW << " with : " << BRED
				<< this->getMeleeAttackDamage() << HYELLOW << " points worth of damage" << RESET << std::endl;
		this->setEp(this->getEp() - MELEEEPCOST);
	}
	else
	{
		std::cout << HBLUE << "This is tiring... Let me catch my breath for a second... or a day" << std::endl;
		std::cout << HYELLOW << "You've tried attacking at short range but you simply won't move.  You only have " << HRED << this->getEp() << HYELLOW << " Energy points!" << RESET << std::endl;
	}
	sleep(1);
}
void 		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHp() < amount)
	{
		std::cout << HBLUE << "dying dying..." << std::endl;
		std::cout << HYELLOW << "Armor Damage reduction activated: +" << this->getArmorDamageReduction() << std::endl;
		std::cout << BRED << "<" << HCYAN << this->getName() << BRED << ">" << HYELLOW << " took " << HRED << amount - this->getArmorDamageReduction() << HYELLOW << " points of damage!" << RESET << std::endl;
		this->setHp(ZERO);
	}
	else
	{
		std::cout << HBLUE << "Well that's inconvenient" << std::endl;
		std::cout << "Armor Damage reduction activated: +" << this->getArmorDamageReduction() << std::endl;
		std::cout << BRED << "<" << HCYAN << this->getName() << BRED << ">" << HYELLOW <<  " took " << HRED << amount - this->getArmorDamageReduction() << HYELLOW << " points of damage!" << RESET << std::endl;
		this->setHp(this->getHp() - (amount - this->getArmorDamageReduction()));
	}
	this->printStats();
	sleep(1);
}
void 		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHp() + amount > this->getMaxHp())
	{
		std::cout << HBLUE << "No more" << std::endl;
		std::cout << HYELLOW << "You've tried healing by : " << HRED << amount << HYELLOW << " but You're already at your limit" << RESET << std::endl;
		this->setHp(this->getMaxHp());
	}
	else
	{
		std::cout << HBLUE << "Was that close or what?" << std::endl;
		std::cout << HYELLOW "You've healed by " << amount << " HP." << RESET <<  std::endl;
		this->setHp(this->getHp() + amount);
	}
	if (this->getEp() + amount > this->getMaxEp())
	{
		std::cout << HBLUE << "It's spilling!" << std::endl;
		std::cout << HYELLOW << "You've tried healing by : " HRED << amount << HYELLOW << " but you're already at your limit" << RESET << std::endl;
		this->setEp(this->getMaxEp());
	}
	else
	{
		std::cout << HBLUE << "Much obliged!" << std::endl;
		std::cout << HYELLOW << "You've recovered by " << amount << " EP." << RESET << std::endl;
		this->setEp(this->getEp() + amount);
	}
	this->printStats();
	sleep(1);
}
// void 		FragTrap::meleeAttack(std::string const & target)
// {
// 	if (this->getEp() > MELEEEPCOST)
// 	{
// 		std::cout << BRED << "<" << HCYAN << this->getName() << BRED << "> " << HYELLOW << "punches " << HCYAN << target << HYELLOW << " with : " << BRED
// 				<< this->getMeleeAttackDamage() << HYELLOW << " points worth of damage" << RESET << std::endl;
// 		this->setEp(this->getEp() - MELEEEPCOST);
// 	}
// 	else
// 	{
// 		std::cout << HPURPLE << "This is tiring... Let me catch my breath for a second... or a day" << std::endl;
// 		std::cout << HYELLOW << "You've tried attacking at short range but you simply won't move.  You only have " << HRED << this->getEp() << HYELLOW << " Energy points!" << RESET << std::endl;
// 	}
// 	sleep(1);
// }
// void 		FragTrap::takeDamage(unsigned int amount)
// {
// 	if (this->getHp() < amount)
// 	{
// 		std::cout << HPURPLE << "I'm almost already dead..." << std::endl;
// 		std::cout << HYELLOW << "Armor Damage reduction activated: +" << this->getArmorDamageReduction() << std::endl;
// 		std::cout << BRED << "<" << HCYAN << this->getName() << BRED << ">" << HYELLOW << " took " << HRED << amount - this->getArmorDamageReduction() << HYELLOW << " points of damage!" << RESET << std::endl;
// 		this->setHp(ZERO);
// 	}
// 	else
// 	{
// 		std::cout << HPURPLE << "Oouchhh!!!! that hurts!" << std::endl;
// 		std::cout << "Armor Damage reduction activated: +" << this->getArmorDamageReduction() << std::endl;
// 		std::cout << BRED << "<" << HCYAN << this->getName() << BRED << ">" << HYELLOW <<  " took " << HRED << amount - this->getArmorDamageReduction() << HYELLOW << " points of damage!" << RESET << std::endl;
// 		this->setHp(this->getHp() - (amount - this->getArmorDamageReduction()));
// 	}
// 	printStats();
// 	sleep(1);
// }
// void 		FragTrap::beRepaired(unsigned int amount)
// {
// 	if (this->getHp() + amount > this->getMaxHp())
// 	{
// 		std::cout << HPURPLE << "I've had enough" << std::endl;
// 		std::cout << HYELLOW << "You've tried healing by : " << HRED << amount << HYELLOW << " but You're already at your limit" << RESET << std::endl;
// 		this->setHp(this->getMaxHp());
// 	}
// 	else
// 	{
// 		std::cout << HPURPLE << "I thought I was a goner!" << std::endl;
// 		std::cout << HYELLOW "You've healed by " << amount << " HP." << RESET <<  std::endl;
// 		this->setHp(this->getHp() + amount);
// 	}
// 	if (this->getEp() + amount > this->getMaxEp())
// 	{
// 		std::cout << HPURPLE << "That's too much!" << std::endl;
// 		std::cout << HYELLOW << "You've tried healing by : " HRED << amount << HYELLOW << " but you're already at your limit" << RESET << std::endl;
// 		this->setEp(this->getMaxEp());
// 	}
// 	else
// 	{
// 		std::cout << HPURPLE << "Much obliged!" << std::endl;
// 		std::cout << HYELLOW << "You've recovered by " << amount << " EP." << RESET << std::endl;
// 		this->setEp(this->getEp() + amount);
// 	}
// 	printStats();
// 	sleep(1);
// }
void     		ClapTrap::printStats( void )
{
	std::cout << HRED << "<" << BCYAN << this->_name <<  HRED << ">" << BGREEN << ": " << std::endl;
	std::cout << HYELLOW << "  Health        " << BGREEN << " : " << HGREEN << this->getHp() << std::endl;
	std::cout << HYELLOW << "  Energy Points " << BGREEN << " : " << HGREEN << this->getEp() << std::endl;
	std::cout << HYELLOW << "  Level         " << BGREEN << " : " << HGREEN << this->getLevel() << std::endl;
	std::cout << HYELLOW << "  Armor         " << BGREEN << " : " << HGREEN << this->getArmorDamageReduction();
	std::cout << RESET << std::endl;
}
