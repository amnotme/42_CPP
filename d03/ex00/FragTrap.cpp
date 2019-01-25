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

FragTrap::FragTrap(void) :
_name("FR4G-TP"),
_hp(100),
_maxHp(100),
_ep(100),
_maxEp(100),
_level(1),
_meleeAttackDamage(30),
_rangedAttackDamage(20),
_armorDamageReduction(5)
{
	srand (time(NULL));
	std::cout << BCYAN << _name <<  HYELLOW << " -- start bootup sequence.";
	std::cout << RESET << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) :
_name(name),
_hp(100),
_maxHp(100),
_ep(100),
_maxEp(100),
_level(1),
_meleeAttackDamage(30),
_rangedAttackDamage(20),
_armorDamageReduction(5)
{
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
std::string 	FragTrap::getName(void) const
{
	return (this->_name);
}
int			FragTrap::getHp(void) const
{
	return (this->_hp);
}
int			FragTrap::getMaxHp(void) const
{
	return (this->_maxHp);
}
int			FragTrap::getEp(void) const
{
	return (this->_ep);
}
int			FragTrap::getMaxEp(void) const
{
	return (this->_maxEp);
}
int			FragTrap::getLevel(void) const
{
	return (this->_level);
}
int 			FragTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}
int			FragTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}
int			FragTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}

void			FragTrap::setName(std::string name)
{
	this->_name = name;
}
void			FragTrap::setHp(int hp)
{
	this->_hp = hp;
}
void			FragTrap::setMaxHp(int maxHp)
{
	this->_maxHp = maxHp;
}
void			FragTrap::setEp(int ep)
{
	this->_ep = ep;
}
void			FragTrap::setMaxEp(int maxEp)
{
	this->_maxEp = maxEp;
}
void			FragTrap::setLevel(int level)
{
	this->_level = level;
}
void			FragTrap::setMeleeAttackDamage(int meleeAttackDamage)
{
	this->_meleeAttackDamage = meleeAttackDamage;
}
void			FragTrap::setRangedAttackDamage(int rangedAttackDamage)
{
	this->_rangedAttackDamage = rangedAttackDamage;
}
void			FragTrap::setArmorDamageReduction(int armorDamageReduction)
{
	this->_armorDamageReduction = armorDamageReduction;
}
// void 		FragTrap::rangedAttackDamage(std::string const & tarset)
// void 		FragTrap::meleeAttack(std::string const & tarset)
// void 		FragTrap::takeDamage(unsigned int amount)
// void 		FragTrap::beRepaired(unsigned int amount)
void     		FragTrap::printStats( void )
{
	std::cout << HRED << "<" << BCYAN << this->_name <<  HRED << ">" << BGREEN << ": " << std::endl;
	std::cout << HYELLOW << "  Health        " << BGREEN << " : " << HGREEN << this->getHp() << std::endl;
	std::cout << HYELLOW << "  Energy Points " << BGREEN << " : " << HGREEN << this->getEp() << std::endl;
	std::cout << HYELLOW << "  Level         " << BGREEN << " : " << HGREEN << this->getLevel() << std::endl;
	std::cout << HYELLOW << "  Armor         " << BGREEN << " : " << HGREEN << this->getArmorDamageReduction();
	std::cout << RESET << std::endl;
}
