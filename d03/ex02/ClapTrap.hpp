/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 21:49:21 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/25 21:49:22 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define ZERO 0
# define RANGEDEPCOST 25
# define MELEEEPCOS 25
# define SPECIALEPCOST 25

# include "Colors.hpp"
# include <string>
# include <unistd.h>
# include <iostream>
# include <cstdlib>

class ClapTrap
{
	public:
	//constructors
		ClapTrap(void);
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & copy );
		~ClapTrap( void );
		ClapTrap & operator=( ClapTrap const & other );

		void 				rangedAttack(std::string const & target);
		void 				meleeAttack(std::string const & target);
		void 				takeDamage(unsigned int amount);
		void 				beRepaired(unsigned int amount);
		void     				printStats( void );

		std::string 			getName(void) const;
		unsigned int			getHp(void) const;
		unsigned int			getMaxHp(void) const;
		unsigned int			getEp(void) const;
		unsigned int			getMaxEp(void) const;
		unsigned int			getLevel(void) const;
		unsigned int 			getMeleeAttackDamage(void) const;
		unsigned int			getRangedAttackDamage(void) const;
		unsigned int			getArmorDamageReduction(void) const;

		void					setName(std::string name);
		void					setHp(unsigned int hp) ;
		void					setMaxHp(unsigned int maxHp);
		void					setEp(unsigned int ep);
		void					setMaxEp(unsigned int maxEp);
		void					setLevel(unsigned int level);
		void					setMeleeAttackDamage(unsigned int meleeAttackDamage);
		void					setRangedAttackDamage(unsigned int rangedAttackDamage);
		void					setArmorDamageReduction(unsigned int armorDamageReduction);

	protected:
		std::string			_name;
		unsigned int 			_hp;
		unsigned int			_maxHp;
		unsigned int			_ep;
		unsigned int			_maxEp;
		unsigned int			_level;
		unsigned int			_meleeAttackDamage;
		unsigned int			_rangedAttackDamage;
		unsigned int 			_armorDamageReduction;
};

# endif
