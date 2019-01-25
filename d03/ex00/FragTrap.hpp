/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 01:40:34 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/25 01:40:35 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "Colors.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const & src);
		FragTrap &operator=(FragTrap const & rhs);

		// void 		rangedAttackDamage(std::string const & target);
		// void 		meleeAttack(std::string const & target);
		// void 		takeDamage(unsigned int amount);
		// void 		beRepaired(unsigned int amount);
		void 		printStats(void);
		std::string 	getName(void) const;
		int			getHp(void) const;
		int			getMaxHp(void) const;
		int			getEp(void) const;
		int			getMaxEp(void) const;
		int			getLevel(void) const;
		int 			getMeleeAttackDamage(void) const;
		int			getRangedAttackDamage(void) const;
		int			getArmorDamageReduction(void) const;

		void			setName(std::string name);
		void			setHp(int hp) ;
		void			setMaxHp(int maxHp);
		void			setEp(int ep);
		void			setMaxEp(int maxEp);
		void			setLevel(int level);
		void			setMeleeAttackDamage(int meleeAttackDamage);
		void			setRangedAttackDamage(int rangedAttackDamage);
		void			setArmorDamageReduction(int armorDamageReduction);

	private:
		std::string	_name;
		int 			_hp;
		int			_maxHp;
		int			_ep;
		int			_maxEp;
		int			_level;
		int			_meleeAttackDamage;
		int			_rangedAttackDamage;
		int 			_armorDamageReduction;
};

#endif
